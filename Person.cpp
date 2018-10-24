#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

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

#endif