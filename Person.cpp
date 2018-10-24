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

void Person::setDateOfBirth(int day, int month, int year)
{
	dobDay = 0;
	dobMonth = 0;
	dobYear = 0;
}

std::string Person::getAddress(){}

void Person::setAddress(std::string adr) {}

std::string  Person::getNetID(){}

int Person::getURID(){}

std::string  Person::getEmail(){}

long Person::getPhone(){}

void Person::setNetID(std::string netid){}
void Person::setURID(int urid){}
void Person::setEmail(std::string email){}
void Person::setPhone(long number){}

#endif