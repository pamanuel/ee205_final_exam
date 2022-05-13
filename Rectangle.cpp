///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const double newLength, const double newWidth) {
    if(!Rectangle::validateLength(newLength)){
        throw std::invalid_argument ("Length must be > 0");
    }
    if(!Rectangle::validateWidth(newWidth)){
        throw std::invalid_argument ("Length must be > 0");
    }
    length = newLength;
    width  = newWidth;
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::getWidth() {
    return width;
}

bool Rectangle::validateLength(const double length) {
    if(length <= 0){
        return false;
    }
    return true;
}

bool Rectangle::validateWidth(const double width) {
    if(width <= 0){
        return false;
    }
    return true;
}

double Rectangle::compute_area() const noexcept {
    return length * width ;
}
