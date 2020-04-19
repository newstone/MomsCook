#include "Contents.h"

Contents::Contents() : dishes(DISH){
}
Contents::~Contents() {
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