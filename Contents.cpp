#include "Contents.h"

Contents::Contents() : dishes(DISH){ 
}
Contents::~Contents() {
}
void Contents::SetDish(DISH_TYPE type, const string& dish) {
	if (type != DISH_TYPE::SIDE1) {
		if (dishes[static_cast<int>(type)].getName() == "") {
			dishes[static_cast<int>(type)].setName(dish);
		}
	}
	else {
		for (DISH_TYPE i = DISH_TYPE::SIDE1; i != DISH_TYPE::END; ++i) {
			if (dishes[static_cast<int>(i)].getName() == "") {
				dishes[static_cast<int>(i)].setName(dish);
				break;
			}
		}
	}
}
string Contents::getDishs() {
	string contents = "====================\n";
	for (DISH_TYPE i = DISH_TYPE::RICE; i != DISH_TYPE::END; ++i) {
		switch (i)
		{
		case DISH_TYPE::RICE:
			contents += "밥: ";
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SOUP:
			contents += "국: ";
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SIDE1:
			contents += "반찬1: ";
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SIDE2:
			contents += "반찬2: ";
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SIDE3:
			contents += "반찬3: ";
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		default:
			break;
		}
	}
	return contents;
}