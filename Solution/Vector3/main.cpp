#include <iostream>
#include "Vec3.h"

using namespace std;

int main() {
	Vector3<int> a(1, 1, 1), b(0, 1, 1);
	//test cos
	float l = cos(a, b);
	cout << l << "\n";

	//test +,-
	Vector3<int> c = a + b, d = a - b;
	cout << c << " | " << d << "\n";

	//test *, *=
	Vector3<float> f(2, 5, 3), g = f * 5.5;
	f *= 10;
	cout << g << " | " << f << "\n";

	//test =, +=, -=, copy 
	Vector3<int> e, k(a), h = b;
	e += a; k -= b;
	cout << e << " | " << k << " | " << h << "\n";

	//test ++, --
	Vector3<int> n(4, 5, 6), m(7, 8, 9), j(10, 11, 12), s(13, 14, 15);
	cout << ++m << " | " << --s << "\n";
	n++; j--;
	cout << n << " | " << j << " \n";

	return 0;
}