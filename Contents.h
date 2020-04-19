#pragma once

#include <vector>
#include "Dish.h"

using namespace std;

class Contents {
public:
	Contents();
	~Contents();

	string getDishs();

private:
	string selectedDay;
	string toDay;
	vector<Dish> dishes;
};