#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

void init(float*& mas, int& n) {
	cin >> n;
	mas = new float[n];
	for (int i = 0; i < n; i++) cin >> mas[i];
}

void rep(float* mas, int n) {
	for (int i = 0; i < n; i++) {
		if (mas[i] > 10.0) mas[i] = sqrtf(mas[i]);
	}
}

void out(float* mas, int n) {
	for (int i = 0; i < n; i++) cout << mas[i] << " ";
}