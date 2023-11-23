#include "WalkClass.h"
#include "MathFunctions.h"
#include <iomanip>

using namespace std;

// defualt constructor
Walk::Walk()
{
    this->x = 0.00;
    this->y = 0.00;
    this->distance = 0.00;
}

void Walk::setXValue(double x) { this->x = x; }
void Walk::setYValue(double y) { this->y = y; }
void Walk::setDistance(double distance) { this->distance = distance; }

int Walk::generateAngle() { return rand() % 360; }
int Walk::generateLength() { return rand() % 101; }

double Walk::convertToRadians(double degree) { return degree * 0.01745; }

double Walk::getXValue() const { return this->x; }
double Walk::getYValue() const { return this->y; }
double Walk::getDistance() const { return this->distance; }

void Walk::walkAgain()
{
    double angle = 0.00;
    double length = 0.00;
    double angleInRadians = 0.00;

    angle = generateAngle();
    length = generateLength();
    angleInRadians = convertToRadians(angle);

    // updates the distance
    this->distance = this->distance + length;

    // updates the points
    this->x = this->x + (length * cos(angleInRadians));
    this->y = this->y + (length * sin(angleInRadians));
}

// Keeping the wrong code so that I later fig out what NOT to do
/*void Print(int numWalks, int numPoints) {

    for (unsigned int i = 0; i < numWalks; i++) {
        for (unsigned int j = 0; j < numPoints; j++) {
            cout << "Walk/Step: " << i + 1 << "/" << j + 1 << ": Point: " << this->x << ", " << this->y << " Distance: " << this->distance << endl;
        }
        cout << endl;
    }
}*/

// ALL GOOD but using the ostream for output formatting
/*void Walk::Print() const {
    cout << "Point: " << this->x << ", " << this->y << " Distance: " << this->distance << endl;
}8*/

// using this instead for output formatting
ostream &operator<<(ostream &os, const Walk &w)
{
    cout << fixed;
    os << "Point: " << setprecision(2) << w.getXValue() << ", " << w.getYValue() << " Distance: " << w.getDistance() << endl;
    return os;
}

// alternative:: since a walk object "w" is declared, accessor functions are not required
/*ostream& operator<<(ostream& os, const Walk& w) {
    os << "Point: " << w.x << ", " << w.y << " Distance: " << w.distance << endl;
    return os;
}*/