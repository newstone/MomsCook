#include "Dish.h"
#include <string>

Dish::Dish() : calory (0), name(""){
}
Dish::~Dish() {
}

const string& Dish::getName() {
	return name;
}