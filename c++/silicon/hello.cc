// Hello World app using the C++ Crow web framework
// https://crowcpp.org
#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]() {
        return "Hello World from C++ Crow Web!";
    });

    CROW_ROUTE(app, "/hello")
    ([]() {
        crow::json::wvalue result;
        result["message"] = "Hello World from C++ Crow Web!";
        return result;
    });

    app.port(12345).run();
}
