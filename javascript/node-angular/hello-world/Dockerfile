FROM alpine:latest

#Create an app dir
WORKDIR /app

COPY *.json ./

COPY src /app

EXPOSE 80
ENTRYPOINT ["ng serve"]
