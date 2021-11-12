#include <iostream>
#include "Circle.h"

int main() {
    Circles cir(1,1,Colors::Red,10);

   std::cout << "Hello, World!Square "<< cir.GetArea() << std::endl;
    return 0;
}
