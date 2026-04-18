# Hello World — C++ Wt Web Framework

C++17 web app using [Wt 4.x](https://www.webtoolkit.eu/wt) (widget-based UI).

## Docker

```bash
docker build -t hello-wt .
docker run -p 9090:9090 hello-wt
# Visit http://localhost:9090
```

## Local Development

```bash
# Install Wt 4.x (macOS: brew install wt, Ubuntu: build from source)
g++ -std=c++17 -o hello hello.cc -lwthttp -lwt
./hello --docroot . --http-address 0.0.0.0 --http-port 9090
```
