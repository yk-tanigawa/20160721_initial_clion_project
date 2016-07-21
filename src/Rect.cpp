//
// Created by 谷川洋介 on 7/21/16.
//

#include "Shape.hpp"
#include "Rect.hpp"

Rect::Rect(int height, int width) : height(height), width(width) {}

int Rect::getHeight() const {
    return height;
}

void Rect::setHeight(int height) {
    Rect::height = height;
}

int Rect::getWidth() const {
    return width;
}

void Rect::setWidth(int width) {
    Rect::width = width;
}

int Rect::area() const {
    return width * height;
}

int Rect::perimeter() {
    return 2 * (width + height);
}
