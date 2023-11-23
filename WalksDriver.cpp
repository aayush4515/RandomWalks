// P01: Random Walks
// Aayush Acharya
// Generates random walks and calculates the distance walked, sorts the walks w/r/t distance in ascending order

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

#include "MathFunctions.h"
#include "WalkClass.h"
#include "SortVector.h"

using namespace std;

int main()
{

    srand(time(0)); // using srand() function to generate random walks by creating a unique seed each time
    int numPoints = 0;
    int numWalks = 0;

    cout << "*** Random Walks ***" << endl
         << endl;
    cout << "This program generates a number of random walks." << endl
         << endl;

    cout << "Enter number of points for each walk: ";
    cin >> numPoints;
    cout << endl;

    cout << "Enter number of random walks to generate: ";
    cin >> numWalks;

    cout << endl
         << endl;

    Walk walkObject;          // declares an object of Walk class
    vector<Walk> walkHistory; // declares a vector of Walk objects

    // SEEMS GOOD
    for (unsigned int i = 0; i < numWalks; i++)
    {
        for (unsigned int j = 0; j < numPoints; j++)
        {

            walkObject.walkAgain();
            cout << "Walk/Step: " << i + 1 << "/" << j + 1 << ": " << walkObject;
        }
        cout << endl;
        walkHistory.push_back(walkObject);
    }

    // sorting the vector
    sortVector(walkHistory);

    // Printing the walks after sorting

    // Could be used but using the ostream for output formatting
    /*cout << "Walks Sorted:" << endl << endl;
    for (const Walk& walk : walkHistory) {
        walk.Print();
    }*/

    // used this instead
    cout << "Walks Sorted: " << endl
         << endl;
    for (const Walk &walk : walkHistory)
    {
        cout << walk;
    }

    cout << endl;
    cout << "Average Distance: " << avgDistance(walkHistory) << endl
         << endl;
    cout << "Shortest Distance/Walk: " << shortestDistance(walkHistory) << endl;
    cout << "Median Distance/Walk: " << medianDistance(walkHistory) << endl;
    cout << "Longest Distance/Walk: " << longestDistance(walkHistory) << endl;

    return 0;
}