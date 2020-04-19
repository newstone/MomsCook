#pragma once
#include "Nutrient.h"

#define DISH 5

enum class DISH_TYPE {
	RICE, SOUP, SIDE1, SIDE2, SIDE3, END
};

inline DISH_TYPE operator++(DISH_TYPE& x) {
	return x = static_cast<DISH_TYPE>(std::underlying_type<DISH_TYPE>::type(x) + 1);
}

class Dish {
public:
	Dish();
	virtual ~Dish();
	Nutrient getNutrient();
	int getCalory();
	const string& getName();
private:
	string name;
	Nutrient mNutrient;

	DISH_TYPE type;
	int calory;
};