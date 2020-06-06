#pragma once

#include <vector>
#include "Dish.h"

using namespace std;

class Contents {
public:
	Contents();
	~Contents();

	bool isInitialized();
	bool setDish(int t, DISH_TYPE type, const QString& dish);
	QString getContentsString();
	void reset();
private:
	string selectedDay;
	string toDay;
	vector<Dish> dishes[2];
};