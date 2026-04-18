# Hello World — Java Spring Boot

Spring Boot 4.0.3 with embedded Jetty, built with Gradle 8.14.

## Docker

```bash
docker build -t hello-springboot .
docker run -p 8080:8080 hello-springboot
# Visit http://localhost:8080
```

## Local Development

```bash
./gradlew bootRun
```
