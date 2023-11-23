#pragma once
#ifndef __MATHFUNCTIONS__
#define __MATHFUNCTIONS__

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#include "WalkClass.h"

double avgDistance(vector<Walk> currVector);
double shortestDistance(vector<Walk> currVector);
double longestDistance(vector<Walk> currVector);
double medianDistance(vector<Walk> currVector);

#endif