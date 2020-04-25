#pragma once

#include <vector>
#include "Dish.h"

using namespace std;

class Contents {
public:
	Contents();
	~Contents();
	
	void SetDish(DISH_TYPE type, const string& dish);
	string getDishs();

private:
	string selectedDay;
	string toDay;
	vector<Dish> dishes;
};