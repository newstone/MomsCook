#include "Dish.h"
#include <string>

Dish::Dish() : calory (0), name(""){
}
Dish::~Dish() {
}
void Dish::setName(const string& name) {
	this->name = name;
}
const string& Dish::getName() {
	return name;
}