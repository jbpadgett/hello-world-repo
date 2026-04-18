# Hello World — C++ Crow Web Framework

C++17 web app using [Crow](https://crowcpp.org) (replaced the abandoned Silicon framework).

## Docker

```bash
docker build -t hello-crow .
docker run -p 12345:12345 hello-crow
# Visit http://localhost:12345
# JSON: http://localhost:12345/hello
```

## Local Development

```bash
# Download Crow header
curl -LO https://github.com/CrowCpp/Crow/releases/download/v1.2.0/crow_all.h
mv crow_all.h crow.h

# Compile and run
g++ -std=c++17 -I . hello.cc -lpthread -o hello
./hello
```

## hello2.cc

Standalone console app (no web framework):
```bash
g++ -std=c++17 hello2.cc -o hello2
./hello2
```
