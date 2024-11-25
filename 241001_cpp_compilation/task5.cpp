#include <iostream>

int main() {
	std::cout << "Введите номер дня";
	std::cin >> day_number;
	
	const char* week_days[] = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};
	
	const int max_days = 7;
	const int main_days = 1;
	if (day_number < main_days || day_number > max_days) {
		std::cout << "Неправильный номер дня" << std::endl;
	} else {
		for (int i = day_number - 1; i < max_days; i++) {
			std::cout << week_days[i] << std::endl;
		}
	}
	
	return 0;
}
