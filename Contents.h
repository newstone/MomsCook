#pragma once

#include <vector>
#include "Dish.h"

using namespace std;

class Contents {
public:
	Contents();
	~Contents();

	bool isInitialized();
	bool setDish(DISH_TYPE type, const string& dish);
	string getContentsString();
	void reset();
private:
	string selectedDay;
	string toDay;
	vector<Dish> dishes;
};