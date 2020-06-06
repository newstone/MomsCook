#include "Contents.h"
#include <QString>

Contents::Contents() {
	dishes[0].resize(DISH);
	dishes[1].resize(DISH);
}
Contents::~Contents() {
}

bool Contents::isInitialized() {
	return dishes[0].size() > 0 && dishes[1].size() > 0;
}

bool Contents::setDish(int t, DISH_TYPE type, const QString& dish) {
	if (dishes[t].size() == 0) {
		return false;
	}

	if (type != DISH_TYPE::SIDE1) {
		if (dishes[t][static_cast<int>(type)].getName() == "") {
			dishes[t][static_cast<int>(type)].setName(dish);
		}
	}
	else {
		for (DISH_TYPE i = DISH_TYPE::SIDE1; i != DISH_TYPE::END; ++i) {
			if (dishes[t][static_cast<int>(i)].getName() == "") {
				dishes[t][static_cast<int>(i)].setName(dish);
				break;
			}
		}
	}
	return true;
}

void Contents::reset() {
	for (int j = 0; j < 2; ++j) {
		dishes[j][static_cast<int>(DISH_TYPE::RICE)].setName("");
		dishes[j][static_cast<int>(DISH_TYPE::SOUP)].setName("");
		dishes[j][static_cast<int>(DISH_TYPE::SIDE1)].setName("");
		dishes[j][static_cast<int>(DISH_TYPE::SIDE2)].setName("");
		dishes[j][static_cast<int>(DISH_TYPE::SIDE3)].setName("");
	}
}

float getCalory(QString s) {
	float sum = 0.f;
	// 데이터베이스로 부터 칼로리정보 얻기
	return 0.f;
}

QString Contents::getContentsString() {
	QString contents = "\n";
	
	for (int j = 0; j < 2; ++j) {
		if (j == 0) {
			contents += QString::fromLocal8Bit("[중식]\n");
		}
		else {
			contents += QString::fromLocal8Bit("\n[석식]\n");
		}

		for (DISH_TYPE i = DISH_TYPE::RICE; i != DISH_TYPE::END; ++i) {
			switch (i)
			{
			case DISH_TYPE::RICE:
				contents += QString::fromLocal8Bit("특식: ");
				contents += dishes[j][static_cast<int>(i)].getName();
				contents += "\n";
				break;
			case DISH_TYPE::SOUP:
				contents += QString::fromLocal8Bit("국: ");
				contents += dishes[j][static_cast<int>(i)].getName();
				contents += "\n";
				break;
			case DISH_TYPE::SIDE1:
				contents += QString::fromLocal8Bit("반찬1: ");
				contents += dishes[j][static_cast<int>(i)].getName();
				contents += "\n";
				break;
			case DISH_TYPE::SIDE2:
				contents += QString::fromLocal8Bit("반찬2: ");
				contents += dishes[j][static_cast<int>(i)].getName();
				contents += "\n";
				break;
			case DISH_TYPE::SIDE3:
				contents += QString::fromLocal8Bit("반찬3: ");
				contents += dishes[j][static_cast<int>(i)].getName();
				contents += "\n";
				break;
			default:
				break;
			}
		}
	}
	return contents;
}