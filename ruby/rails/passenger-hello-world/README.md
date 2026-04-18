# Hello World — Ruby on Rails with Passenger

Rails 8.1 with Passenger/Puma on Ruby 3.3.

## Docker

```bash
docker build -t hello-rails-passenger .
docker run -p 3000:3000 hello-rails-passenger
# Visit http://localhost:3000
```

## Local Development

```bash
bundle install
bin/rails server
```
