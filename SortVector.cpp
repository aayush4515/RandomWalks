#include "SortVector.h"

using namespace std;

// Sorting a vector using a lambda expression

void sortVector(vector<Walk> currVector)
{
    sort(currVector.begin(), currVector.end(), [](const Walk &a, const Walk &b)
         { return a.getDistance() < b.getDistance(); });
}