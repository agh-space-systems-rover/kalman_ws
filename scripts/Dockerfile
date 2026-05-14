FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# Install system dependencies, Node.js 18, and clang-format 20
RUN apt-get update \
  && apt-get install -y --no-install-recommends \
    ca-certificates \
    curl \
    git \
    lsb-release \
    python3 \
    python3-pip \
    software-properties-common \
    wget \
  && curl -fsSL https://deb.nodesource.com/setup_18.x | bash - \
  && apt-get install -y --no-install-recommends nodejs \
  && wget -qO /tmp/llvm.sh https://apt.llvm.org/llvm.sh \
  && chmod +x /tmp/llvm.sh \
  && /tmp/llvm.sh 20 \
  && apt-get install -y --no-install-recommends clang-format-20 \
  && update-alternatives --install /usr/bin/clang-format clang-format /usr/bin/clang-format-20 100 \
  && update-alternatives --set clang-format /usr/bin/clang-format-20 \
  && rm -rf /var/lib/apt/lists/* /tmp/llvm.sh

# Python formatter
RUN python3 -m pip install --no-cache-dir --upgrade pip \
  && python3 -m pip install --no-cache-dir black

COPY format.sh /usr/local/bin/format.sh
RUN chmod +x /usr/local/bin/format.sh

WORKDIR /workspace
ENTRYPOINT ["/usr/local/bin/format.sh"]
CMD ["bash"]
