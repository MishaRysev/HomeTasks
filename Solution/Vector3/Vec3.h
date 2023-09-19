#pragma once
#include <cmath>

template <typename T>
class Vector3 {
private:
	T x;
	T y;
	T z;
public:
	Vector3();
	Vector3(T _x, T _y, T _z);
	Vector3(const Vector3& vec);

	friend std::istream& operator >> (std::istream& in, Vector3& vec) {
		in >> vec.x >> vec.y >> vec.z;
		return in;
	}
	friend std::ostream& operator << (std::ostream& out, Vector3& vec) {
		out << vec.x << " " << vec.y << " " << vec.z;
		return out;
	}
	friend float cos(Vector3<T>& a, Vector3<T>& b) {
		float res = (a * b)/(a.length() * b.length());
		return res;
	}

	float length();

	Vector3<T>& operator = (const Vector3<T>& vec);
	Vector3<T>& operator += (const Vector3<T>& vec);
	Vector3<T>& operator -= (const Vector3<T>& vec);
	Vector3<T>& operator *= (const T num);
	Vector3<T> operator + (const Vector3<T>& vec) const;
	Vector3<T> operator - (const Vector3<T>& vec) const;
	Vector3<T> operator * (const T num) const;
	Vector3<T>& operator++ ();
	Vector3<T> operator++ (int);
	Vector3<T>& operator-- ();
	Vector3<T> operator-- (int);
	T operator * (const Vector3<T>& vec) const;
};

template<typename T>
float Vector3<T>::length() {
	float res;
	res = sqrtf(x * x + y * y + z * z);
	return res;
}

template<typename T>
Vector3<T>::Vector3(){
	x = 0;
	y = 0;
	z = 0;
}

template<typename T>
Vector3<T>::Vector3(T _x, T _y, T _z) {
	x = _x;
	y = _y;
	z = _z;
}

template<typename T>
Vector3<T>::Vector3(const Vector3& vec){
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

template<typename T>
Vector3<T>& Vector3<T>::operator = (const Vector3<T>& vec) {
	x = vec.x;
	y = vec.y;
	z = vec.z;
	return (*this);
}

template<typename T>
Vector3<T>& Vector3<T>::operator += (const Vector3<T>& vec){
	x += vec.x;
	y += vec.y;
	z += vec.z;
	return (*this);
}

template<typename T>
Vector3<T>& Vector3<T>::operator -= (const Vector3<T>& vec) {
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return (*this);
}

template<typename T>
Vector3<T>& Vector3<T>::operator*= (T num) {
	x *= num;
	y *= num;
	z *= num;
	return (*this);
}

template<typename T>
Vector3<T>& Vector3<T>::operator++() {
	x += 1; y += 1; z += 1;
	return (*this);
}

template<typename T>
Vector3<T> Vector3<T>::operator++(int) {
	Vector3<T> tmp = (*this);
	++(*this);
	return tmp;
}

template<typename T>
Vector3<T>& Vector3<T>::operator--() {
	x -= 1; y -= 1; z -= 1;
	return (*this);
}

template<typename T>
Vector3<T> Vector3<T>::operator--(int) {
	Vector3<T> tmp = (*this);
	--(*this);
	return tmp;
}

template<typename T>
Vector3<T> Vector3<T>::operator + (const Vector3<T>& vec) const{
	Vector3<T> res;
	res.x = x + vec.x;
	res.y = y + vec.y;
	res.z = z + vec.z;
	return res;
}

template<typename T>
Vector3<T> Vector3<T>::operator - (const Vector3<T>& vec) const {
	Vector3<T> res;
	res.x = x - vec.x;
	res.y = y - vec.y;
	res.z = z - vec.z;
	return res;
}

template<typename T>
Vector3<T> Vector3<T>::operator * (const T num) const {
	Vector3<T> res;
	res.x = x * num;
	res.y = y * num;
	res.z = z * num;
	return res;
}

template <typename T>
T Vector3<T>::operator * (const Vector3<T>& vec) const {
	T res = x*vec.x + y*vec.y + z*vec.z;
	return res;
}
