#include "sortings.hpp"

void biv::sortings::shell_sort(int* const arr, const int size) {
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