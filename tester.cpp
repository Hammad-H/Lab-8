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

    std::cout << std::endl;

    std::cout << "p.setFirstName(\"Lilly\")" << std::endl;
    p.setFirstName("Lilly");
    std::cout << "First Name:	" << p.getFirstName() << "[Expected: Lilly]" << std::endl;

    std::cout << std::endl;

    std::cout << "p.setLastName(\"Luxury\")" << std::endl;
    p.setLastName("Luxury");
    std::cout << "Last Name:	" << p.getLastName() << "[Expected: Luxury]" << std::endl;

    std::cout << std::endl;

    std::cout << "p.setDateOfBirth(\"25, 10, 1998\")" << std::endl;
    p.setDateOfBirth(25, 10, 1998);
    std::cout << "Date of Birth: " << "\nDay: " << p.getDateOfBirth().tm_mday << " [Expected: 25]" 
    << "\nMonth: " << p.getDateOfBirth().tm_mon << " [Expected: 10]"
    << "\nYear: " << p.getDateOfBirth().tm_year << "[Expected: 1998"
    << std::endl; 

    std::cout << std::endl;

    std::cout << "p.setAddress(\"410 Westhampton Way Richmond VA\")" << std::endl;
    p.setAddress("410 Westhampton Way Richmond VA");
    std::cout << "Address: " << p.getAddress() << "[Expected: 410 Westhampton Way Richmond VA]" << std::endl;

    std::cout << std::endl;

    std::cout << "p.setNetID(\"w7uj\")" << std::endl;
    p.setNetID("w7uj");
    std::cout << "NetID: " << p.getNetID() << " [Expected: w7uj]" << std::endl;

    std::cout << std::endl;

    std::cout << "p.setURID(23212)" << std::endl;
    p.setURID(23212);
    std::cout << "URID: " << p.getURID() << "[Expected: 23212]" << std::endl;

    std::cout << std::endl;

    std::cout << "p.setEmail(\"Lily.Luxury@gmail.com\")" << std::endl;
    p.setEmail("Lily.Luxury@gmail.com");
    std::cout << "Email: " << p.getEmail() << "[Expected: Lily.Luxury@gmail.com]" << std::endl;

    std::cout << std::endl;

    std::cout << "p.setPhone(8043417663)" << std::endl;
    p.setPhone(8043417663);
    std::cout << "Phone: " << p.getPhone() << "[Expected: 8043417633]" << std::endl;

    std::cout << std::endl;

    std::cout << "Using the other constructor: " << 
                 "Person p2(23241, tju7, Esseker,Ana 13," << 
                 "05, 1976,Ana.Esseker@mirrors.com, " << 
                 "Number 12 Grimmauld Place London, 6667652321)" 
            << std::endl;
    Person p2(23241, "tju7", "Esseker", "Ana", 
               13, 05, 1976,
               "Ana.Esseker@mirrors.com", "Number 12 Grimmauld Place London", 6667652321);

    std::cout << "URID: " << p2.getURID() << "[Expected: 23241]"
              << "\nNetID: " << p2.getNetID() << "[Expected: t7uj]"
              << "\nLast Name: " << p2.getLastName() << "[Expected: Esseker]"
              << "\nFirst Name: " << p2.getFirstName() << "[Expected: Ana]"
              << "\nDay: " << p2.getDateOfBirth().tm_mday << "[Expected: 13]"
              << "\nMonth: " << p2.getDateOfBirth().tm_mon << "[Expected: 05]"
              << "\nYear: " << p2.getDateOfBirth().tm_mday << "[Expected: 1976]"
              << "\nEmail: " << p2.getEmail() << "[Expected: Ana.Esseker@mirrors.com]"
              << "\nAddress: " << p2.getAddress() << "[Expected: Number 12 Grimmauld Place London]"
              << "\nPhone: " << p2.getPhone() << "[Expected 6667652321]"
              << std::endl;

    std::cout << std::endl;

    std::cout << "Testing the copy constructor" << std::endl;
    std::cout << "Person p4(p2)" << std::endl;
    Person p4(p2);

    std::cout << "URID: " << p4.getURID() << "[Expected: 23241]"
              << "\nNetID: " << p4.getNetID() << "[Expected: t7uj]"
              << "\nLast Name: " << p4.getLastName() << "[Expected: Esseker]"
              << "\nFirst Name: " << p4.getFirstName() << "[Expected: Ana]"
              << "\nDay: " << p4.getDateOfBirth().tm_mday << "[Expected: 13]"
              << "\nMonth: " << p4.getDateOfBirth().tm_mon << "[Expected: 05]"
              << "\nYear: " << p4.getDateOfBirth().tm_mday << "[Expected: 1976]"
              << "\nEmail: " << p4.getEmail() << "[Expected: Ana.Esseker@mirrors.com]"
              << "\nAddress: " << p4.getAddress() << "[Expected: Number 12 Grimmauld Place London]"
              << "\nPhone: " << p4.getPhone() << "[Expected 6667652321]"
              << std::endl;


}
