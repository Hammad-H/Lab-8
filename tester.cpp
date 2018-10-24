#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>


int main() 
{
    std::cout << "---------------" << std::endl;
    std::cout << "Testing Person:" << std::endl;
    std::cout << "-------------- " << std::endl;

    std::cout << "Testing getters and setters" << std::endl;

    std::cout << "Person p;" << std::endl;
    Person p;

    std::cout << "p.setFirstName(\"Lilly\")" << std::endl;
    p.setFirstName("Lilly");
    std::cout << "First Name:	" << p.getFirstName() << "[Expected: Lilly]" << std::endl;

    std::cout << "p.setLastName(\"Luxury\")" << std::endl;
    p.setLastName("Luxury");
    std::cout << "Last Name:	" << p.getLastName() << "[Expected: Luxury]" << std::endl;


    std::cout << "p.setDateOfBirth(\"25, 10, 1998\")" << std::endl;
    p.setDateOfBirth(25, 10, 1998);
    std::cout << "Date of Birth: " << "\nDay: " << p.getDateOfBirth().tm_mday << " [Expected: 25]" 
    << "\nMonth: " << p.getDateOfBirth().tm_mon << " [Expected: 10]"
    << "\nYear: " << p.getDateOfBirth().tm_year << "[Expected: 1998"
    << std::endl; 

    std::cout << "p.setAddress(\"410 Westhampton Way Richmond VA\")" << std::endl;
    p.setAddress("410 Westhampton Way Richmond VA");
    std::cout << "Address: " << p.getAddress() <<" [Expected: 410 Westhampton Way Richmond VA]" << std::endl;

    std::cout << "p.setNetID(\"w7uj\")" << std::endl;
    p.setNetID("w7uj");
    std::cout << "NetID: " << p.getNetID() << " [Expected: w7uj]" << std::endl;

    std::cout << "p.setURID(23212)" << std::endl;
    p.setURID(23212);
    std::cout << "URID: " << p.getURID() << "[Expected: 23212]" << std::endl;

    std::cout << "p.setEmail(\"Lily.Luxury@gmail.com\")" << std::endl;
    p.setEmail("Lily.Luxury@gmail.com");
    std::cout << "Email: " << p.getEmail() << "[Expected: Lily.Luxury@gmail.com]" << std::endl;

    std::cout << "p.setPhone(8043417663)" << std::endl;
    p.setPhone(8043417663);
    std::cout << "Phone: " << p.getPhone() << "[Expected: 8043417633]" << std::endl;
}
