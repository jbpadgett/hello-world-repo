FROM ubuntu:22.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y \
    g++ cmake libboost-all-dev libssl-dev zlib1g-dev git \
    && rm -rf /var/lib/apt/lists/*
WORKDIR /build
RUN git clone --depth 1 --branch 4.10.4 https://github.com/emweb/wt.git && \
    cd wt && mkdir build && cd build && \
    cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local -DBUILD_EXAMPLES=OFF -DENABLE_HARU=OFF -DENABLE_PANGO=OFF -DENABLE_QT4=OFF -DENABLE_QT5=OFF -DENABLE_QT6=OFF && \
    make -j$(nproc) && make install && ldconfig
WORKDIR /app
COPY hello.cc .
RUN g++ -std=c++17 -o hello hello.cc -lwthttp -lwt
EXPOSE 9090
ENTRYPOINT ["./hello", "--docroot", ".", "--http-address", "0.0.0.0", "--http-port", "9090"]
