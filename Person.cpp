#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"
#include <iostream>

Person::Person() {}

Person::Person(const Person& other){}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone){}

Person::~Person(){}

std::string Person::getFirstName()
{
	return "Inside the getter method for getFirstName";
}


void Person::setFirstName(std::string fname){}

std::string Person::getLastName()
{
	return "Inside the getter method for getLastName";
}

void Person::setLastName(std::string lname){}


struct tm Person::getDateOfBirth()
{
	struct tm dateOfBirth;
	dateOfBirth.tm_mday = dobDay;
	dateOfBirth.tm_mon = dobMonth;
	dateOfBirth.tm_year = dobYear;	

	return dateOfBirth;
}


#endif