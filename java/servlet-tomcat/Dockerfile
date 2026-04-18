FROM eclipse-temurin:21-jdk AS build
WORKDIR /app
RUN apt-get update && apt-get install -y unzip && \
    curl -fsSL https://services.gradle.org/distributions/gradle-8.14.3-bin.zip -o gradle.zip && \
    unzip -q gradle.zip && rm gradle.zip
ENV PATH="/app/gradle-8.14.3/bin:${PATH}"
COPY build.gradle.kts settings.gradle.kts ./
COPY helloservlet helloservlet
RUN gradle war --no-daemon

FROM tomcat:11-jre21
RUN rm -rf /usr/local/tomcat/webapps/*
COPY --from=build /app/build/libs/helloservlet.war /usr/local/tomcat/webapps/ROOT.war
EXPOSE 8080
