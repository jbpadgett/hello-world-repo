// This program justs displays a string and exits
#include <iostream>
#include <string>
#include <silicon/api.hh>
#include <silicon/backends/mhd.hh>
#include "symbols.hh"

using namespace sl; // Silicon namespace
using namespace s; // Symbols namespace

// Define the API:
auto hello_api = http_api(

  // The hello world procedure.
  GET / _hello = [] () { return D(_message = "Hello World from C++ Silicon Web!"); }

);


int main()
{
  // Serve hello_api via microhttpd using the json format:
  sl::mhd_json_serve(hello_api, 12345);
}

