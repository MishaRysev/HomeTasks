#include <iostream>
#include "Header.h"

using namespace std;

void edit(int* mas, int Mcount, int*& res, int& Rcount) {
	res = new int[Mcount];
	res[0] = mas[0];
	Rcount += 1;
	for (int i = 1; i < Mcount; i++) {
		char flag = 1;
		for (int j = 0; j < i && flag; j++) {
			if (mas[i] == mas[j]) flag = 0;
		}
		if (flag) {
			res[Rcount] = mas[i];
			Rcount += 1;
		}
	}
}