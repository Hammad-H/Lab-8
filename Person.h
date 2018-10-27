#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
#include <ctime>

class Person
{
    protected:
        int my_urId;
        std::string my_netId;
        std::string my_firstName;
        std::string my_lastName;
        int my_dobDay;
        int my_dobMonth;
        int my_dobYear;
        std::string my_email;
        std::string my_address;
        long my_phone;

    public:
        Person();
        Person(const Person& other);
        Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone);
        ~Person();

        std::string  getFirstName();
        std::string  getLastName();
        struct tm    getDateOfBirth(); 
            // see http://www.cplusplus.com/reference/ctime/tm/
        std::string  getAddress();
        std::string  getNetID();
        int          getURID();
        std::string  getEmail();
        long         getPhone();

        void setFirstName(std::string fname);
        void setLastName(std::string lname);
        void setDateOfBirth(int day, int month, int year);
        void setAddress(std::string address);
        void setNetID(std::string netid);
        void setURID(int urid);
        void setEmail(std::string email);
        void setPhone(long number);
};

#endif