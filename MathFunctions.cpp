#include "MathFunctions.h"
#include "WalkClass.h"

using namespace std;

double avgDistance(vector<Walk> currVector)
{
    double totalDistance = 0.0;

    // COULD BE USED BUT USED SHORTER CODE BELOW
    /*for (unsigned int i = 0; i < currVector.size(); i++) {
        totalDistance = totalDistance + currVector.at(i).getDistance();
    }

    return (totalDistance / currVector.size());     // returns the average value*/

    for (Walk obj : currVector)
    {
        totalDistance = totalDistance + obj.getDistance();
    }

    return (totalDistance / currVector.size());
}

double shortestDistance(vector<Walk> currVector)
{
    double currDistance = currVector.at(0).getDistance();
    for (Walk obj : currVector)
    {
        if (obj.getDistance() < currDistance)
        {
            currDistance = obj.getDistance();
        }
    }
    return currDistance;
}

double longestDistance(vector<Walk> currVector)
{
    double currDistance = currVector.at(0).getDistance();
    for (Walk obj : currVector)
    {
        if (obj.getDistance() > currDistance)
        {
            currDistance = obj.getDistance();
        }
    }
    return currDistance;
}

double medianDistance(vector<Walk> currVector)
{
    double medianVal = 0.0;

    if ((currVector.size() % 2) == 0)
    { // case for even number of walks
        int indx1;
        int indx2;

        indx1 = currVector.size() / 2;       // index of second middle value
        indx2 = (currVector.size() / 2) - 1; // index of first middle value

        medianVal = (currVector.at(indx1).getDistance() + currVector.at(indx2).getDistance()) / 2;
    }
    else
    { // case for odd number of walks
        int indx;
        indx = floor(currVector.size() / 2); // index of middle value
        medianVal = currVector.at(indx).getDistance();
    }

    return medianVal;
}