#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

int main() {
    std::string command;
    do{
        std::cout << "Enter the command: ";
        std::cin >> command;
        if(command == "circle"){
            auto* cir = new Circles();
            int x, y;
            double rad;
            std::cout << "Enter X coordinates of center: ";
            std::cin >> x;
            std::cout << "Enter Y coordinates of center: ";
            std::cin >> y;
            std::cout << "Enter radius of circle: ";
            std::cin >> rad;
            cir->SetCenter(x, y);
            cir->SetRadius(rad);
            std::cout << "Areea of circle: " << cir->GetArea() << std::endl;
            Centers cent = cir->GetDescrRectangle().GetCenter();
            std::cout << "Describing rectangle has center at (" << cent.GetX() << ", " << cent.GetY() << ")" << std::endl;
            std::cout << "Describing rectangle length: " << cir->GetDescrRectangle().GetLength() << std::endl;
            std::cout << "Describing rectangle width: " << cir->GetDescrRectangle().GetWidth() << std::endl;
            delete cir;
        }
    }while(command != "exit");
   std::cout << "Exiting... "<<  std::endl;
    return 0;
}
