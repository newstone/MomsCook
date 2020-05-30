#include "Dish.h"
#include <string>

Dish::Dish() : calory (0), name(""){
}
Dish::~Dish() {
}
void Dish::setName(const QString& name) {
	this->name = name;
}
const QString& Dish::getName() {
	return name;
}
const Nutrient& Dish::getNutrient() {
	return mNutrient;
}
int Dish::getCalory() {
	return calory;
}