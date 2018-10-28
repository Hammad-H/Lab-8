#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include "Student.h"
#include <iostream>

Student::Student() 
		:Person()
{}

Student::Student(const Student& other) 
		:Person(other)

{

	my_admitday = other.my_admitday;
	my_admitmo = other.my_admitmo;
	my_admityr = other.my_admityr;
	my_GPA = other.my_GPA;
	my_school = other.my_school;
	my_time = other.my_time;
	my_units = other.my_units;
}

Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, double gpa, bool is_full_time,
               double units_completed)
               :Person(urid, netid, lname, fname, dob_day, dob_mo,
               		   dob_yr, email, address, phone)
{
	
	my_admitday = day_admit;
	my_admitmo = month_admit;
	my_admityr = year_admit;
	my_school = school;
	my_GPA = gpa; 
	my_time = is_full_time;
	my_units = units_completed;
}

Student::~Student() {}

std::list<std::string> Student::getCourses()
{
	return my_courses;
}

void Student::addCourse(std::string course)
{
	my_courses.push_back(course);
}

void Student::removeCourse(std::string course)
{
	my_courses.remove(course);
}

void Student::printCourses()
{
	for(std::list<std::string>::iterator i = my_courses.begin(); i != my_courses.end(); i++)
	{
		std::cout << *i << " ";
	}
}

void Student::setCourses(std::list<std::string> courses) 
{
	my_courses = courses;
}

void Student::clearCourses()
{
	my_courses.clear();
}

struct tm Student::getAdmitDate()
{
	struct tm admitDate;
	admitDate.tm_mday = my_admitday;
	admitDate.tm_mon = my_admitmo;
	admitDate.tm_year = my_admityr;

	return admitDate;
}

Student::School Student::getSchool()
{
	return my_school;
}

double Student::getGPA()
{
	return my_GPA;
}

double Student::getUnitsCompleted()
{
	return my_units;
}

bool Student::isFullTime()
{
	return my_time;
}

void Student::setAdmitDate(int day, int month, int year)
{
	my_admitday = day;
	my_admitmo = month;
	my_admityr = year;
}

void Student::setSchool(School school)
{
	my_school = school;
}

void Student::setGPA(double gpa) 
{
	my_GPA = gpa;
}

void Student::setUnitsCompleted(double units)
{
	my_units = units;
}

void Student::setFullTimeStatus(bool isFullTime)
{
	my_time = isFullTime;
}

#endif