FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV UV_VERSION=0.11.14
ENV UV_PYTHON_INSTALL_DIR=/opt/uv/python
ENV UV_DOWNLOAD_URL=https://releases.astral.sh/github/uv/releases/download/${UV_VERSION}

# Install system dependencies, Node.js 18, and clang-format 20
RUN apt-get update \
  && apt-get install -y --no-install-recommends \
    ca-certificates \
    curl \
    git \
    lsb-release \
    software-properties-common \
    wget \
    xz-utils \
  && curl -fsSL https://deb.nodesource.com/setup_18.x | bash - \
  && apt-get install -y --no-install-recommends nodejs \
  && wget -qO /tmp/llvm.sh https://apt.llvm.org/llvm.sh \
  && chmod +x /tmp/llvm.sh \
  && /tmp/llvm.sh 20 \
  && apt-get install -y --no-install-recommends clang-format-20 \
  && update-alternatives --install /usr/bin/clang-format clang-format /usr/bin/clang-format-20 100 \
  && update-alternatives --set clang-format /usr/bin/clang-format-20 \
  && rm -rf /var/lib/apt/lists/* /tmp/llvm.sh

# Install uv
RUN curl -LsSf https://astral.sh/uv/install.sh | sh -s -- \
  && /root/.local/bin/uv --version \
  && cp /root/.local/bin/uv /usr/local/bin/uv

# Ensure the installed binary is on the PATH
ENV PATH="/root/.local/bin:$PATH"

# Python formatter tooling via uv
COPY scripts/format-tools /usr/local/bin/format-tools
RUN uv --project /usr/local/bin/format-tools python install \
  && uv --project /usr/local/bin/format-tools sync --locked \
  && chmod -R a+rwX /usr/local/bin/format-tools \
  && chmod -R a+rX /opt/uv

COPY scripts/format.sh /usr/local/bin/format.sh
RUN chmod +x /usr/local/bin/format.sh

WORKDIR /workspace
ENTRYPOINT ["/usr/local/bin/format.sh"]
CMD ["bash"]
