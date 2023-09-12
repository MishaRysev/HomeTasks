#include <iostream>
#include "Header.h"

using namespace std;

void init(int*& mas, int& count) {
	cin >> count;
	mas = new int[count];
	for (int i = 0; i < count; i++) cin >> mas[i];
}

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

void print(int* res, int Rcount) {
	for (int i = 0; i < Rcount; i++) cout << res[i] << " ";
}