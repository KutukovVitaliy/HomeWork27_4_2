//
// Created by kvitadmin on 11.11.2021.
//

#ifndef HOMEWORK27_4_2_CIRCLE_H
#define HOMEWORK27_4_2_CIRCLE_H
#include "Figure.h"
#include <cmath>

class Circles : public Figure{
    double radius;
public:
    Circles() : Figure() {radius = 1.0;}
    Circles(int inX, int inY) : Figure(inX, inY){radius = 1.0;}
    Circles(int inX, int inY, Colors inColor) : Figure(inX, inY, inColor){radius = 1.0;}
    Circles(double inRadius) : Figure(), radius(inRadius){}
    Circles(const Centers& inCenter, Colors inColor, double inRadius) : Figure(inCenter, inColor),radius(inRadius){}
    double GetArea(){
        return std::pow(radius * M_PI,2);
    }
};


#endif //HOMEWORK27_4_2_CIRCLE_H
