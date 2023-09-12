#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int* mas, * res;
	int Mcount, Rcount = 0;

	init(mas, Mcount);
	edit(mas, Mcount, res, Rcount);
	print(res, Rcount);

	delete[] mas;
	return 0;
}