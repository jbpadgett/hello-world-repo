# Hello World — Angular

Angular 21 with TypeScript 5.9, served via nginx.

## Docker

```bash
docker build -t hello-angular .
docker run -p 80:80 hello-angular
# Visit http://localhost
```

## Local Development

```bash
npm install
ng serve
# Visit http://localhost:4200
```
