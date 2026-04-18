# Hello World Repo

Hello World web apps in multiple languages, each containerized with Docker.

## Quick Start with Docker

Every app has a Dockerfile. Build and run any of them:

### Java

```bash
# Spring Boot (Jetty) — port 8080
cd java/gradle-springboot
docker build -t hello-springboot .
docker run -p 8080:8080 hello-springboot

# Servlet on Tomcat — port 8080
cd java/servlet-tomcat
docker build -t hello-servlet .
docker run -p 8080:8080 hello-servlet
# Visit http://localhost:8080/hello

# WAR on Tomcat — port 8080
cd java/war-tomcat
docker build -t hello-war-tomcat .
docker run -p 8080:8080 hello-war-tomcat
```

### Ruby

```bash
# Rails + Puma — port 3000
cd ruby/rails/puma-hello-world
docker build -t hello-rails-puma .
docker run -p 3000:3000 hello-rails-puma

# Rails + Passenger — port 3000
cd ruby/rails/passenger-hello-world
docker build -t hello-rails-passenger .
docker run -p 3000:3000 hello-rails-passenger

# Rails (default) — port 3000
cd ruby/rails/hello_world
docker build -t hello-rails-default .
docker run -p 3000:3000 hello-rails-default

# Sinatra — port 9292
cd ruby/sinatra
docker build -t hello-sinatra .
docker run -p 9292:9292 hello-sinatra
```

### Go

```bash
# Go stdlib HTTP — port 8080
cd golang/go-webapp
docker build -t hello-go .
docker run -p 8080:8080 hello-go
# Visit http://localhost:8080/hello.html
```

### JavaScript

```bash
# Angular (nginx) — port 80
cd javascript/node-angular/hello-world
docker build -t hello-angular .
docker run -p 80:80 hello-angular
```

### C++

```bash
# Crow — port 12345
cd c++/silicon
docker build -t hello-crow .
docker run -p 12345:12345 hello-crow

# Wt — port 9090
cd c++/wt
docker build -t hello-wt .
docker run -p 9090:9090 hello-wt
```

## Project Structure

| Language | Framework | Path | Port |
|----------|-----------|------|------|
| Java | Spring Boot 4.0 / Jetty | `java/gradle-springboot` | 8080 |
| Java | Jakarta Servlet / Tomcat 11 | `java/servlet-tomcat` | 8080 |
| Java | WAR / Tomcat 11 | `java/war-tomcat` | 8080 |
| Ruby | Rails 8.1 / Puma 7 | `ruby/rails/puma-hello-world` | 3000 |
| Ruby | Rails 8.1 / Passenger | `ruby/rails/passenger-hello-world` | 3000 |
| Ruby | Rails 8.1 (default) | `ruby/rails/hello_world` | 3000 |
| Ruby | Sinatra 4.2 / Puma 7 | `ruby/sinatra` | 9292 |
| Go | stdlib net/http | `golang/go-webapp` | 8080 |
| JavaScript | Angular 21 / nginx | `javascript/node-angular/hello-world` | 80 |
| C++ | Crow (C++17) | `c++/silicon` | 12345 |
| C++ | Wt 4.x (C++17) | `c++/wt` | 9090 |
