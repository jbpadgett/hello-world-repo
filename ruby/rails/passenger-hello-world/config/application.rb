require_relative "boot"

require "rails/all"

Bundler.require(*Rails.groups)

module Hello
  class Application < Rails::Application
    config.load_defaults 8.1
  end
end
