//
// Created by 谷川洋介 on 7/21/16.
//

#ifndef INC_201607221_INITIAL_CLION_PROJECT_RECT_H_H
#define INC_201607221_INITIAL_CLION_PROJECT_RECT_H_H

#include "Shape.hpp"


class Rect : public Shape
{
    int height, width;

public:
    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    virtual int area() const;

public:
    Rect(int height, int width);

    int perimeter();
};


#endif //INC_201607221_INITIAL_CLION_PROJECT_RECT_H_H
