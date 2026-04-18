# Hello World — Ruby on Rails with Puma

Rails 8.1 with Puma 7 on Ruby 3.3.

## Docker

```bash
docker build -t hello-rails-puma .
docker run -p 3000:3000 hello-rails-puma
# Visit http://localhost:3000
```

## Local Development

```bash
bundle install
bin/rails server
```
