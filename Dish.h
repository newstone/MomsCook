#pragma once
#include "Nutrient.h"

class Dish {
public:
	Dish();
	virtual ~Dish();
	Nutrient getNutrient();
	int getCalory();
private:
	Nutrient mNutrient();
	int calory;
};