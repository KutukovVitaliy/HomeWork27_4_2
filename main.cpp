#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circles cir(1,1,Colors::Red,10);
    Rectangles rect(2,2,10,10,Colors::Red);
    DescrRectangle des = rect.GetDescrRectangle();
   std::cout << "Hello, World!Square "<< cir.GetArea() << std::endl;
    return 0;
}
