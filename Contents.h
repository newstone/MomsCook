#pragma once

#include <vector>
#include "Dish.h"
#include <string>

using namespace std;

class Contents {
public:
	Contents();
	~Contents();
	string getDate();

private:
	string selectedDay;
	string toDay;
	vector<Dish> dishes;
};