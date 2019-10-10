   
#include "Complex.hpp"
#include <iostream>
#include <cmath>

    // construct the complex number zero
    Complex::Complex(){
        real=0;
        imaginary=0;
    };

    // construct a complex number with given real and imaginary parts
    Complex::Complex(double real, double imaginary){
        this->real=real;
        this->imaginary=imaginary;
    };

    Complex::~Complex(){
        std::cout <<"Destroying number "<<real<<" + "<<imaginary <<" * i"<< std::endl;
        };

    double Complex::getReal(){return real;};             // get the real part of the number
    double Complex::getImaginary(){return imaginary;};        // get the imaginary part of the number
    void Complex::setReal(double re){real=re;};      // set the value of the real part
    void Complex::setImaginary(double im){imaginary=im;}; // set the value of the imaginary part

    double Complex::magnitude(){
        double re2;
        double im2;

        re2=  pow (real,2);
        im2=pow (imaginary,2);
        return sqrt(re2+im2);

    };           // computes the distance from the complex origin

/*
   modifies the number so its magnitude becomes 1
   but it stays in the same direction from the complex origin, if possible. In other
   words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
*/
    void Complex::normalize(){
        double mag=magnitude();
        real = real/mag;
        imaginary=imaginary/mag;
    };