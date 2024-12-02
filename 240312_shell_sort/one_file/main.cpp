#include <iostream>

void shell_sort(int* const arr, const int size);
void print_array(const char* const comment, int* arr, const int size);

int main() {
	inr arr[] = {7, 3, 1, 15, 9, 5};
	const int arr_size = sizeof(arr) / sizeof(arr[0]);
	
	print_array("Массив до сортировки:", arr, arr_size);
	
	shell_sort(arr, arr_size);
	
	print_array("Массив после сортировки:", arr, arr_size);
	
	return 0;
}

void shell_sort(int* const arr, const int size) {
	int step = size / 2;
	while (step > 0) {
		for (int i = step; i < size; i++) {
			int j = i;
			int h = arr[j];
			while (j >= step && h < arr[j - step]) {
				arr[j] = arr[j - step];
				j -= step;
			}
			arr[j] = h;
		}
		step /= 2;
	}
}

void print_array(const char* const comment, int* arr, const int size) {
	const char format = ' ';
	std::cout << comment;
	for (int i = 0; i < size; i++) {
		std::cout << format << arr[i];
	}
	std::cout << std::endl;
}