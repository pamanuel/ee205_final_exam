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

#include "Rectangle.h"

Rectangle::Rectangle(const double newLength, const double newWidth) {

}

double Rectangle::getLength() {
    return 0;
}

double Rectangle::getWidth() {
    return 0;
}

bool Rectangle::validateLength() {
    return false;
}

bool Rectangle::validateWidth() {
    return false;
}

double Rectangle::compute_area() const noexcept {
    return length * width ;
}
