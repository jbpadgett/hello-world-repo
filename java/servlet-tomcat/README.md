# Hello World — Java Servlet on Tomcat

Jakarta Servlet 6.1 deployed on Tomcat 11, built with Gradle.

## Docker

```bash
docker build -t hello-servlet .
docker run -p 8080:8080 hello-servlet
# Visit http://localhost:8080/hello
```

## Local Development

```bash
gradle war
# Deploy build/libs/helloservlet.war to Tomcat 11+
```
