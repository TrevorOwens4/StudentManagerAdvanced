#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>

using namespace std;

class student
{
        private: 
                string lastName;
                string firstName;
                double grade;
                double score;
                int count;
        public:
                student();
                void setName (string, string);
                string fullName();
                double getScore ();
                void addGrade (double);







};
#endif
