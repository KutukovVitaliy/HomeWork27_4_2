//
// Created by kvitadmin on 12.11.2021.
//

#ifndef HOMEWORK27_4_2_TRIANGLE_H
#define HOMEWORK27_4_2_TRIANGLE_H
#include "Figure.h"

class Triangle : public Figure {
    double sideLength;
public:
    Triangle() : Figure() {sideLength = 1.0;}
    Triangle(int inX, int inY, Colors inColor, double inSideLength) : Figure(inX, inY, inColor),sideLength(inSideLength){}
    double GetArea(){return std::pow(sideLength, 2) * std::sqrt(3) / 4;}
    void SetSideLength(double inLength){sideLength = inLength;}
    double GetSideLength(){return sideLength;}
    DescrRectangle GetDescrRectangle(){
        DescrRectangle rect(this->GetCenter(),sideLength, sideLength * std::sqrt(3) / 2);
        return rect;
    }
};


#endif //HOMEWORK27_4_2_TRIANGLE_H
