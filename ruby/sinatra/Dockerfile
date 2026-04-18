FROM ruby:3.3-slim
RUN apt-get update && apt-get install -y build-essential && rm -rf /var/lib/apt/lists/*
WORKDIR /app
COPY Gemfile ./
RUN bundle install
COPY hello.rb config.ru ./
EXPOSE 9292
CMD ["bundle", "exec", "rackup", "-o", "0.0.0.0"]
