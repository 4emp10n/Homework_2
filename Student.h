#pragma once
#include <string>

class Student
{
private:
	std::string name, surname;
	float avarageMark;
	int attendedLessons;


public:
	Student(std::string name, std::string surname, float avarageMark, int attendedLessons) : name(name), surname(surname),
		avarageMark(avarageMark), attendedLessons(attendedLessons) {}
	Student() = default;
	std::string getName() { return name; }
	std::string getSurname() { return surname; }
	float getAvarageMark() { return avarageMark; }
	int getAttendedLessons() { return attendedLessons; }
	friend std::ifstream& operator>> (std::ifstream& is, Student& st);
	friend std::ostream& operator<<(std::ostream& os, Student& st);
};


