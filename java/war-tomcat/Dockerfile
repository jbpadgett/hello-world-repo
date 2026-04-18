FROM tomcat:11-jre21
RUN rm -rf /usr/local/tomcat/webapps/*
RUN mkdir -p /usr/local/tomcat/webapps/ROOT/WEB-INF
COPY hello.html /usr/local/tomcat/webapps/ROOT/
COPY WEB-INF/web.xml /usr/local/tomcat/webapps/ROOT/WEB-INF/
EXPOSE 8080
