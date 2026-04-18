# Hello World — Ruby on Rails (Default)

Rails 8.1 with Puma on Ruby 3.3.

## Docker

```bash
docker build -t hello-rails-default .
docker run -p 3000:3000 hello-rails-default
# Visit http://localhost:3000
```

## Local Development

```bash
bundle install
bin/rails server
```
