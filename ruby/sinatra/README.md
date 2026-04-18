# Hello World — Ruby Sinatra

Sinatra 4.2 with Puma 7 on Ruby 3.3.

## Docker

```bash
docker build -t hello-sinatra .
docker run -p 9292:9292 hello-sinatra
# Visit http://localhost:9292
```

## Local Development

```bash
bundle install
bundle exec rackup -o 0.0.0.0
```
