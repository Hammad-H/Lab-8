#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"
#include <iostream>

Person::Person() {}

Person::Person(const Person& other)
{
	my_urId = other.my_urId;
    my_netId = other.my_netId;
    my_firstName = other.my_firstName;
    my_lastName = other.my_lastName;
    my_dobDay = other.my_dobDay;
    my_dobMonth = other.my_dobMonth;
    my_dobYear = other.my_dobYear;
    my_email = other.my_email;
    my_address = other.my_address;
    my_phone = other.my_phone;

}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone)
{
	my_urId = urid;
	my_netId = netid;
	my_lastName = lname;
	my_firstName = fname;
	my_dobDay = dob_day;
	my_dobMonth = dob_month;
	my_email = email;
	my_address = address;
	my_phone = phone;
}

Person::~Person(){}

std::string Person::getFirstName()
{
	return my_firstName;
}


void Person::setFirstName(std::string fname)
{
	my_firstName = fname;
}

std::string Person::getLastName()
{
	return my_lastName;
}

void Person::setLastName(std::string lname)
{
	my_lastName = lname;
}


struct tm Person::getDateOfBirth()
{
	struct tm dateOfBirth;
	dateOfBirth.tm_mday = my_dobDay;
	dateOfBirth.tm_mon = my_dobMonth;
	dateOfBirth.tm_year = my_dobYear;	

	return dateOfBirth;
}

void Person::setDateOfBirth(int day, int month, int year)
{
	my_dobDay = day;
	my_dobMonth = month;
	my_dobYear = year;
}

std::string Person::getAddress()
{
	return my_address;
}

void Person::setAddress(std::string adr) 
{
	my_address = adr;
}

std::string  Person::getNetID()
{
	return my_netId;
}

int Person::getURID()
{
	return my_urId;
}

std::string  Person::getEmail()
{
	return my_email;
}

long Person::getPhone()
{
	return my_phone;
}

void Person::setNetID(std::string netid)
{
	my_netId = netid;
}
void Person::setURID(int urid)
{
	my_urId = urid;
}
void Person::setEmail(std::string email)
{
	my_email = email;
}
void Person::setPhone(long number)
{
	my_phone = number;
}

#endif