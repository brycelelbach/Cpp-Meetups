#include <another_shared_library_header.hpp>
#include <iostream>
#include <shared_library_header.hpp>

int main() {
  std::cout << print_from_shared_library() << '\n'
            << another_print_from_shared_library() << '\n';
}
