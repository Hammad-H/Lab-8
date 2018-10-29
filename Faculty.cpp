#ifndef __FACULTY_CPP__
#define __FACULTY_CPP__

#include "Faculty.h"
#include <iostream>

Faculty::Faculty():Person() {}

Faculty::Faculty(const Faculty& other):Person(other)
{
	my_startday = other.my_startday;
	my_startmo = other.my_startmo;
	my_startyr = other.my_startyr;
	my_school = other.my_school;
	my_rank = other.my_rank;
	my_time = other.my_time;
	my_specialty = other.my_specialty;
}

Faculty::Faculty(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_start, int month_start, int year_start,
               School school, Rank professor_rank, bool is_full_time,
               std::string research_specialty)
			   :Person(urid, netid, lname, fname, dob_day, dob_mo,
               		   dob_yr, email, address, phone)
{	
	my_startday = day_start;
	my_startmo = month_start;
	my_startyr = year_start;
	my_school = school;
	my_rank = professor_rank;
	my_time = is_full_time;
	my_specialty = research_specialty;
}

Faculty::~Faculty() {}

std::list<std::string> Faculty::getCourses()
{
	return my_courses;
}

void Faculty::addCourse(std::string course)
{
	my_courses.push_back(course);
}

void Faculty::removeCourse(std::string course)
{
	my_courses.remove(course);
}

void Faculty::printCourses()
{
	for(std::list<std::string>::iterator i = my_courses.begin(); i != my_courses.end(); i++)
	{
		std::cout << *i << " ";
	}
}

void Faculty::setCourses(std::list<std::string> courses) 
{
	my_courses = courses;
}

void Faculty::clearCourses()
{
	my_courses.clear();
}

void Faculty::setResearchSpecialty(std::string specialty)
{
	my_specialty = specialty;
}

struct tm Faculty::getStartDate()
{
	struct tm startDate;
	startDate.tm_mday = my_startday;
	startDate.tm_mon = my_startmo;
	startDate.tm_year = my_startyr;

	return startDate;
}

Faculty::School Faculty::getSchool()
{
	return my_school;
}

bool Faculty::isFullTime()
{
	return my_time;
}

Faculty::Rank Faculty::getRank()
{
	return my_rank;
}

std::string Faculty::getResearchSpecialty()
{
	return my_specialty;
}

void Faculty::setStartDate(int day, int month, int year)
{
	my_startday = day;
	my_startmo = month;
	my_startyr = year;
}

void Faculty::setSchool(School school)
{
	my_school = school;
}

void Faculty::setFullTimeStatus(bool isFullTime)
{
	my_time = isFullTime;
}

void Faculty::setRank(Rank rank)
{
	my_rank = rank;
}

#endif