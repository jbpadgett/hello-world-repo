FROM golang:1.24-alpine AS build
WORKDIR /app
COPY go.mod ./
COPY hello.go hello.html ./
RUN go build -o hello hello.go

FROM alpine:latest
WORKDIR /app
COPY --from=build /app/hello /app/hello.html ./
EXPOSE 8080
ENTRYPOINT ["./hello"]
