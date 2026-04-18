# Hello World — Java WAR on Tomcat

Static HTML hello world deployed as a WAR on Tomcat 11.

## Docker

```bash
docker build -t hello-war-tomcat .
docker run -p 8080:8080 hello-war-tomcat
# Visit http://localhost:8080
```

## Local Development

Deploy `hello.html` and `WEB-INF/web.xml` to Tomcat 11+ webapps directory.
