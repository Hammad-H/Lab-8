#ifndef __FACULTY_H__
#define __FACULTY_H__

#include <list>
#include "Person.h"

class Faculty : public Person
{
    public:
        // outside of this file, access type as Faculty::School,
        // and particular schools as Faculty::AS for example
        enum School {AS, JSLS, LAW, RSB, SPCS, UNDEFINED};
        enum Rank   {FULL, ASSOCIATE, ASSISTANT, DIRECTOR, ADJUNCT};

    protected:
        // instance variables here...
        int my_startday;
        int my_startmo;
        int my_startyr;
        School my_school;
        Rank my_rank;
        bool my_time;
        std::string my_specialty;
        std::list<std::string> my_courses;
        
    public:
        Faculty();                      // explicitly call Person() on implementation
        Faculty(const Faculty& other);  // call Person(other) on implementation
        Faculty(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_start, int month_start, int year_start,
               School school, Rank professor_rank, bool is_full_time,
               std::string research_specialty);
        ~Faculty();

        std::list<std::string> getCourses();
        void                   addCourse(std::string course);
        void                   removeCourse(std::string course);
        void                   printCourses();
        void                   setCourses(std::list<std::string> courses);
        void                   clearCourses();
        void                   setResearchSpecialty(std::string specialty);

        struct tm              getStartDate();
        School                 getSchool();
        bool                   isFullTime();
        Rank                   getRank();
        std::string            getResearchSpecialty();

        void setStartDate(int day, int month, int year);
        void setSchool(School school);
        void setFullTimeStatus(bool isFullTime);
        void setRank(Rank rank);
};

#endif
