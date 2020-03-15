#pragma once
#include "Nutrient.h"

enum class DISH_TYPE {
	RICE, SOUP, SIDE
};

class Dish {
public:
	Dish();
	virtual ~Dish();
	Nutrient getNutrient();
	int getCalory();
private:
	Nutrient mNutrient;

	DISH_TYPE type;
	int calory;
};