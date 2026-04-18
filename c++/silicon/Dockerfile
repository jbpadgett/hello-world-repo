FROM debian:bookworm-slim AS build
RUN apt-get update && apt-get install -y g++ libboost-all-dev libasio-dev curl
WORKDIR /app
RUN curl -fsSL https://github.com/CrowCpp/Crow/releases/download/v1.2.0/crow_all.h -o crow.h
COPY hello.cc .
RUN g++ -std=c++17 -I . hello.cc -lpthread -o hello

FROM debian:bookworm-slim
RUN apt-get update && apt-get install -y libstdc++6 && rm -rf /var/lib/apt/lists/*
WORKDIR /app
COPY --from=build /app/hello .
EXPOSE 12345
ENTRYPOINT ["./hello"]
