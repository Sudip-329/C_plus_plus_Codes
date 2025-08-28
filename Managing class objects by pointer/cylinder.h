#ifndef CYLINDER_H  // same thing that saying pi is uding in the both folder.
#define CYLINDER_H

#include "constants.h"   //including the constant file ;
class Cylinder {
    public : 
    Cylinder(double rad_param,double height_param){
    base_radius = rad_param;
    height = height_param;
}
    double volume(){
    return PI * base_radius * base_radius * height;
}

//Setter and getter methods
double get_base_radius(){
    return base_radius;
}
double get_height(){
    return height;
}

void set_base_radius(double rad_param){
    base_radius = rad_param;
}

void set_height(double height_param){
    height = height_param;
}
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};
#endif