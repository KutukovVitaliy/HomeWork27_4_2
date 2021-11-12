//
// Created by kvitadmin on 12.11.2021.
//

#ifndef HOMEWORK27_4_2_RECTANGLE_H
#define HOMEWORK27_4_2_RECTANGLE_H
#include "Figure.h"

class Rectangles : public Figure {
    double length;
    double width;
public:
    Rectangles(Centers center, double inLength, double inWidth) : Figure(center, Colors::None){
        length = inLength;
        width = inWidth;
    }
    Rectangles(int inX, int inY, double inLength, double inWidth, Colors inColor) : Figure(inX, inY, inColor){
        length = inLength;
        width = inWidth;
    }
    void SetLength(double inLength){
        length = inLength;
    }
    void SetWidth(double inWidth){
        width = inWidth;
    }
    DescrRectangle GetDescrRectangle(){
        DescrRectangle rect(this->GetCenter(), length, width);

        return rect;
    }
};


#endif //HOMEWORK27_4_2_RECTANGLE_H
