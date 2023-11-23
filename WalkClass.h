#pragma once
#ifndef __WALKCLASS__
#define __WALKCLASS__

#include <iostream>
using namespace std;

class Walk
{

public:
    // defualt constructor
    Walk();

    // mutators
    void setXValue(double x);
    void setYValue(double y);
    void setDistance(double distance);

    int generateAngle();
    int generateLength();
    double convertToRadians(double degree);

    // accessors
    double getXValue() const;
    double getYValue() const;
    double getDistance() const;

    void walkAgain();

    // void Print() const; (didnt have to use this)

    // used this instead
    friend ostream &operator<<(ostream &os, const Walk &w);

private:
    double x;
    double y;
    double distance;
};

#endif