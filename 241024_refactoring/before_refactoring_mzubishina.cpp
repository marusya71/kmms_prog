#include <iostream>

int main() {
	int day;
	std::cout << "������� ����: ";
	std::cin >> day;

	int month;
	std::cout << "������� �����: ";
	std::cin >> month;

	int year;
	std::cout << "������� ���: ";
	std::cin >> year;

	int century_year = year % 100;
	int century = year / 100;

	int week_day_number = (
	day
	+ (13 * month - 1) / 5
	+ 2
	+ century_year
	+ century_year / 4
	+ century / 4
	+ 2 * century
	) % 7;

	switch (result) {
	case 0:
		std::cout << "�����������" <<std::endl;
		break;
	case 1:
		std::cout << "�����������" <<std::endl;
		break;
	case 2:
		std::cout << "�������" <<std::endl;
		break;
	case 3:
		std::cout << "�����" <<std::endl;
		break;
	case 4:
		std::cout << "�������" <<std::endl;
		break;
	case 5:
		std::cout << "�������" <<std::endl;
		break;
	case 6:
		std::cout << "�������" <<std::endl;
		break;
	}
	return 0;
}
