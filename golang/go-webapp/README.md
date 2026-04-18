# Hello World — Golang

Go 1.24 stdlib HTTP server.

## Docker

```bash
docker build -t hello-go .
docker run -p 8080:8080 hello-go
# Visit http://localhost:8080/hello.html
```

## Local Development

```bash
go build -o hello hello.go
./hello
```
