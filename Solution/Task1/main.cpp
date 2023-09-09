#include <iostream>
#include "Header.h"

int main() {
	float* mas;
	int count;

	init(mas, count);
	rep(mas, count);
	out(mas, count);

	delete[] mas;
	return 0;
}