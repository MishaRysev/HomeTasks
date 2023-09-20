#include <iostream>
#include "Student.h"

using namespace std;

DoB::DoB() {
	day = 0;
	month = 0;
	year = 0;
}

const DoB& DoB::operator = (const DoB& _date) {
	day = _date.day;
	month = _date.month;
	year = _date.year;
}

DoB::DoB(int _day, int _month, int _year) {
	day = _day;
	month = _month;
	year = _year;
}


Student::Student() {
	name = "";
	surname = "";
	phone = "";
	date = DoB();
}

Student::Student(string& _name, string& _surname, string& _phone, DoB& _date) {
	name = _name;
	surname = _surname;
	phone = _phone;
	date = _date;
}