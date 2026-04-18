require_relative "boot"

require "rails/all"

Bundler.require(*Rails.groups)

module HelloWorld
  class Application < Rails::Application
    config.load_defaults 8.1
  end
end
