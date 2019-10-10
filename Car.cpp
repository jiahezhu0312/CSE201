#include "Car.hpp"
#include <iostream>


void Engine::print(){
    std::cout<<"An engine of type: "<< engine <<std::endl;
};

void Seats::print(){
    for(int i=0;4;i++){
        std::cout<<"A seat of type: "<< seat <<std::endl;
    };
};

void Wheels::print(){
    for(int i=0; 4; i++){
        std::cout<< "A wheel of type: "<< wheel<<std::endl;
    };
};

void Steering::print(){
    std::cout<<" A steeringWheel of type: "<< steering<<std::endl;
};

void Car::print(){
    std::cout<< "This car is a "<<brand<<" "<<type<<"that is composed by:"<<std::endl;
    engine.print();
    seats.print();
    wheels.print();
    steering.print();
}

Car::Car(Brand br,Type ty,Engine en,Wheels wh,Seats se,Steering st){
    brand=br;
    type=ty;
    wheels=wh;
    seats=se;
    steering=st;
};
        