//
// Created by kvitadmin on 11.11.2021.
//

#ifndef HOMEWORK27_4_2_FIGURE_H
#define HOMEWORK27_4_2_FIGURE_H
#include <utility>
#include <cmath>

enum class Colors{
    Red,
    Blue,
    Green,
    None
};

class Centers{
    int x;
    int y;
public:
    Centers(int inX, int inY) : x(inX), y(inY){}
    Centers(){ x = 0; y = 0;}
    void SetCenter(int inX, int inY){
        x = inX;
        y = inY;
    }
};

class Figure {
    Centers center;
    Colors color;
public:
    Figure(const Centers& inCenter, Colors inColor = Colors::None): center(inCenter), color(inColor){}
    Figure(Colors inColor) : color(inColor){}
    Figure(int inX, int inY){center.SetCenter(inX, inY);color = Colors::None;}
    Figure(int inX, int inY, Colors inColor){center.SetCenter(inX, inY);color = inColor;}
    Figure(){color = Colors::None;}

    Centers GetCenter(){ return center;}
    void SetColor(Colors inColor){color = inColor;}
    Colors GetColor(){return color;}
};

class DescrRectangle : public Figure{
    double length;
    double width;
public:
    DescrRectangle(Centers center, double inLength, double inWidth) : Figure(center, Colors::None){
        length = inLength;
        width = inWidth;
    }
};


#endif //HOMEWORK27_4_2_FIGURE_H
