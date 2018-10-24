#ifndef __FACULTY_CPP__
#define __FACULTY_CPP__

#include "Faculty.h"

Faculty::Faculty() {}

Faculty::Faculty(const Faculty& other) {}

Faculty::Faculty(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_start, int month_start, int year_start,
               School school, Rank professor_rank, bool is_full_time,
               std::string research_specialty) {}

Faculty::~Faculty() {}

std::list<std::string> Faculty::getCourses()
{
	std::list<std::string> courseList;

	return courseList;
}

void Faculty::addCourse(std::string course) {}

void Faculty::remveCourse() {}

void Faculty::printCourses() {}

void Faculty::setCourses(std::list<std::string> courses) {}

void Faculty::clearCourses() {}

void Faculty::setResearchSpecialty() {}

struct tm Faculty::getStartDate()
{
	struct tm retVal;

	retVal.tm_mday = 0;
	retVal.tm_mon = 0;
	retVal.tm_year = 00;

	return retVal;
}

School Faculty::getStartDate()
{
	return Faculty::UNDEFINED;
}

bool Faculty::isFullTime()
{
	return true;
}

Rank Faculty::getRank()
{
	return Faculty::FULL;
}

std::string Faculty::getResearchSpecialty()
{
	return "";
}

void Faculty::setStartDate(int date, int month, int year) {}

void Faculty::setSchool(School school) {}

void Faculty::setFullTimeStatus(bool isFullTime) {}

void Faculty::setRank(Rank rank) {}

#endif