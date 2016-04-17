// This program justs displays a string and exits
#include <iostream>
 
int main()
{
  std::cout << "Hello World!";

  std::cout << R"(
      _   _      _ _                             _     _ _
	 | | | | ___| | | ___    __      _____  _ __| | __| | |
	 | |_| |/ _ \ | |/ _ \   \ \ /\ / / _ \| '__| |/ _` | |
	 |  _  |  __/ | | (_) |   \ V  V / (_) | |  | | (_| |_|
	 |_| |_|\___|_|_|\___/     \_/\_/ \___/|_|  |_|\__,_(_)
	 )";

  std::cout << std::endl;

  return 0;
}

