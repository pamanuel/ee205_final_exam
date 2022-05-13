///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Shape.h"
class Rectangle: public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(const double newLength, const double newWidth);
public:
    double getLength();
    double getWidth();
public:
    static bool validateLength( const double length);
    static bool validateWidth( const double width);
public:
    double compute_area() const noexcept override;
};
