#include "io.hpp"
#include "sortings.hpp"

int main() {
	int arr[] = {7, 3, 1, 15, 9, 5};
	const int arr_size = sizeof(arr) / sizeof(arr[0]);
	
	biv::print_array("Массив до сортировки:", arr, arr_size);
	
	biv::sortings::shell_sort(arr, arr_size);
	
	biv::print_array("Массив после сортировки:", arr, arr_size);
	
	return 0;
}