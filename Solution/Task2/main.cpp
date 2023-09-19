#include <iostream>
#include "Header.h"
#include <rel.cpp>

using namespace std;

int main() {
	float* mas;
	int count;

	init(mas, count);
	rep(mas, count);
	print(mas, count);

	return 0;
}