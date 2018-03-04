// FIXME: You definitely want to include a test framework here
#include <iostream>
#define ASSERT(cond) \
   if (!(cond)) {\
       std::cerr << "Assertion failed: " << #cond << std::endl;\
       return 1;\
   }

#include <crom_test/crom_test.hpp>
using namespace crom_test;

int main() {
   ASSERT(foo() == "Hello world!");
   ASSERT(bar(1, 1) == 2);
   ASSERT(bar(1, 2) == 3);
   ASSERT(bar(0, 42) == 42);

   std::cout << "All tests passed!" << std::endl;
   return 0;
}
