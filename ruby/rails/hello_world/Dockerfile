FROM ruby:3.3-slim
RUN apt-get update && apt-get install -y build-essential libsqlite3-dev libyaml-dev && rm -rf /var/lib/apt/lists/*
WORKDIR /app
COPY Gemfile ./
RUN bundle install
COPY . .
RUN bin/rails db:prepare 2>/dev/null || true
EXPOSE 3000
CMD ["bin/rails", "server", "-b", "0.0.0.0"]
