#include "Contents.h"
#include <QString>

Contents::Contents() : dishes(DISH){ 
}
Contents::~Contents() {
}

bool Contents::isInitialized() {
	return dishes.size();
}

bool Contents::setDish(DISH_TYPE type, const QString& dish) {
	if (dishes.size() == 0) {
		return false;
	}

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
	return true;
}

void Contents::reset() {
	dishes[static_cast<int>(DISH_TYPE::RICE)].setName("");
	dishes[static_cast<int>(DISH_TYPE::SOUP)].setName("");
	dishes[static_cast<int>(DISH_TYPE::SIDE1)].setName("");
	dishes[static_cast<int>(DISH_TYPE::SIDE2)].setName("");
	dishes[static_cast<int>(DISH_TYPE::SIDE3)].setName("");
}

QString Contents::getContentsString() {
	QString contents = "\n";
	for (DISH_TYPE i = DISH_TYPE::RICE; i != DISH_TYPE::END; ++i) {
		switch (i)
		{
		case DISH_TYPE::RICE:
			contents += QString::fromLocal8Bit("특식: ");
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SOUP:
			contents += QString::fromLocal8Bit("국: ");
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SIDE1:
			contents += QString::fromLocal8Bit("반찬1: ");
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SIDE2:
			contents += QString::fromLocal8Bit("반찬2: ");
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		case DISH_TYPE::SIDE3:
			contents += QString::fromLocal8Bit("반찬3: ");
			contents += dishes[static_cast<int>(i)].getName();
			contents += "\n";
			break;
		default:
			break;
		}
	}
	return contents;
}