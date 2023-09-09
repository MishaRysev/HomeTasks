#include <iostream>
#include "Header.h"

using namespace std;

void init(float*& mas, int& n) {
	do {
		cin >> n;
		if (n % 2 != 0) cout << "number must be odd\n";
	} while (n % 2 != 0);
	mas = new float[n];
	for (int i = 0; i < n; i++) cin >> mas[i];
}

void rep(float* mas, int n) {
	for (int i = 0; i < n / 2; i++) {
		int tmp = mas[i];
		mas[i] = mas[n/2 + i];
		mas[n/2 + i] = tmp;
	}
}

void out(float* mas, int n) {
	for (int i = 0; i < n; i++) cout << mas[i] << " ";
}