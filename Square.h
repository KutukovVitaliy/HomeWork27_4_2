//
// Created by kvitadmin on 12.11.2021.
//

#ifndef HOMEWORK27_4_2_SQUARE_H
#define HOMEWORK27_4_2_SQUARE_H
#include "Figure.h"

class Square : public Figure{
    double sideLength;
public:
    void SetLength(double length){
        sideLength = length;
    }
    Square() : Figure() {sideLength = 1.0;}
    Square(int inX, int inY, Colors inColor, double inSideLength) : Figure(inX, inY, inColor),sideLength(inSideLength){}
    double GetArea(){return std::pow(sideLength, 2);}
    void SetSideLength(double inLength){sideLength = inLength;}
    double GetSideLength(){return sideLength;}
    DescrRectangle GetDescrRectangle(){
        DescrRectangle rect(this->GetCenter(),sideLength, sideLength);
        return rect;
    }
};


#endif //HOMEWORK27_4_2_SQUARE_H
