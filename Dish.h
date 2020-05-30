#pragma once
#include "Nutrient.h"
#include <QString>

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
	const Nutrient& getNutrient();
	int getCalory(); 
	void setName(const QString& name);
	const QString& getName();
private:
	QString name;
	Nutrient mNutrient;

	DISH_TYPE type;
	int calory;
};