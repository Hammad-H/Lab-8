#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>

using namespace std;


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
    std::cout << "Date of Birth: " << "\nDay: " << p.getDateOfBirth().tm_mday << " [Expected: 25]" << std::endl;


}
