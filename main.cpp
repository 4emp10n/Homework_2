#include <iostream>
#include <fstream>
#include "Student.h"
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	ifstream iFile("Test.txt");

	if (!iFile.is_open())
	{
		cout << "Error! File isn't open\n";
	}
	
	Student student;
	vector<Student> Students;
	while (iFile >> student)
	{
		Students.push_back(student);
	}

	if (Students.empty())
	{
		cout << "There aren't students in the file\n";
	}
	else
	{
		cout << setw(10) << left << "Succeeded" << setw(9) << "Name" << setw(14) << "Surname" << setw(8) <<right<< "Avg mark" << setw(9) << "Attended" << endl;

		for (auto i : Students)
		{
			cout << i << endl;
		}
	}
	iFile.close();
	
	return 0;
}