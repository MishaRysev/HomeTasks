#include <iostream>
#include "Hdr.h"

using namespace std;

void init(int*& mas, int& count) {
	cin >> count;
	mas = new int[count];
	for (int i = 0; i < count; i++) cin >> mas[i];
}

void print(int* res, int Rcount) {
	for (int i = 0; i < Rcount; i++) cout << res[i] << " ";
}

void print(float* res, int Rcount) {
	for (int i = 0; i < Rcount; i++) cout << res[i] << " ";
}