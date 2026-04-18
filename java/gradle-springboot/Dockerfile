FROM eclipse-temurin:21-jdk AS build
WORKDIR /app
RUN apt-get update && apt-get install -y unzip && \
    curl -fsSL https://services.gradle.org/distributions/gradle-8.14.3-bin.zip -o gradle.zip && \
    unzip -q gradle.zip && rm gradle.zip
ENV PATH="/app/gradle-8.14.3/bin:${PATH}"
COPY build.gradle.kts settings.gradle.kts ./
COPY src src
RUN gradle bootJar --no-daemon

FROM eclipse-temurin:21-jre
WORKDIR /app
COPY --from=build /app/build/libs/*.jar app.jar
EXPOSE 8080
ENTRYPOINT ["java", "-jar", "app.jar"]
