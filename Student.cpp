#include "Student.h"
#include <iomanip>
#include <fstream>
#include <sstream>


std::ifstream& operator>>(std::ifstream& is, Student& st)
{
	getline(is, st.name, ',');
	getline(is, st.surname, ',');

	std::string buf;
	getline(is, buf, ',');
	std::stringstream bufStream(buf);
	bufStream >> st.avarageMark;
	getline(is, buf, '\n');
	bufStream.clear();
	bufStream.str(buf);
	bufStream >> st.attendedLessons;
	return is;
}

std::ostream& operator<<(std::ostream& os, Student& st)
{
	
	if (st.avarageMark > 4 && st.attendedLessons > 5)
	{ 
		os << std::setw(9) << std::left << "    +";
	}
	else
	{
		os << std::setw(10);
	}
	os << ' ' << std::setw(9) << std::left << st.name << std::setw(14) << std::setfill(' ') << st.surname << std::setw(8) << std::right << std::setprecision(3) << st.avarageMark << "     " << std::setw(9) << std::left << st.attendedLessons;
	
	return os;
}
