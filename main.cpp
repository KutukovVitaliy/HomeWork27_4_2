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
        if(command == "square"){
            auto* sq = new Square();
            int x, y;
            double side;
            std::cout << "Enter X coordinates of center: ";
            std::cin >> x;
            std::cout << "Enter Y coordinates of center: ";
            std::cin >> y;
            std::cout << "Enter the side's length  of square: ";
            std::cin >> side;
            sq->SetCenter(x, y);
            sq->SetSideLength(side);
            std::cout << "Areea of square: " << sq->GetArea() << std::endl;
            Centers cent = sq->GetDescrRectangle().GetCenter();
            std::cout << "Describing rectangle has center at (" << cent.GetX() << ", " << cent.GetY() << ")" << std::endl;
            std::cout << "Describing rectangle length: " << sq->GetDescrRectangle().GetLength() << std::endl;
            std::cout << "Describing rectangle width: " << sq->GetDescrRectangle().GetWidth() << std::endl;
            delete sq;
        }
        if(command == "triangle"){
            auto* tr = new Triangle();
            int x, y;
            double side;
            std::cout << "Enter X coordinates of center: ";
            std::cin >> x;
            std::cout << "Enter Y coordinates of center: ";
            std::cin >> y;
            std::cout << "Enter the side's length  of triangle: ";
            std::cin >> side;
            tr->SetCenter(x, y);
            tr->SetSideLength(side);
            std::cout << "Areea of triangle: " << tr->GetArea() << std::endl;
            Centers cent = tr->GetDescrRectangle().GetCenter();
            std::cout << "Describing rectangle has center at (" << cent.GetX() << ", " << cent.GetY() << ")" << std::endl;
            std::cout << "Describing rectangle length: " << tr->GetDescrRectangle().GetLength() << std::endl;
            std::cout << "Describing rectangle width: " << tr->GetDescrRectangle().GetWidth() << std::endl;
            delete tr;
        }
        if(command == "rectangle"){
            auto* rec = new Rectangles();
            int x, y;
            double length, width;
            std::cout << "Enter X coordinates of center: ";
            std::cin >> x;
            std::cout << "Enter Y coordinates of center: ";
            std::cin >> y;
            std::cout << "Enter the length  of rectangle: ";
            std::cin >> length;
            std::cout << "Enter the width  of rectangle: ";
            std::cin >> width;
            rec->SetCenter(x, y);
            rec->SetLength(length);
            rec->SetWidth(width);
            std::cout << "Areea of rectangle: " << rec->GetArea() << std::endl;
            Centers cent = rec->GetDescrRectangle().GetCenter();
            std::cout << "Describing rectangle has center at (" << cent.GetX() << ", " << cent.GetY() << ")" << std::endl;
            std::cout << "Describing rectangle length: " << rec->GetDescrRectangle().GetLength() << std::endl;
            std::cout << "Describing rectangle width: " << rec->GetDescrRectangle().GetWidth() << std::endl;
            delete rec;
        }
    }while(command != "exit");
   std::cout << "Exiting... "<<  std::endl;
    return 0;
}
