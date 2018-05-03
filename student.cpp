//Trevor Owens
#include "student.h"

// Function definitions

student::student()
{
        lastName = "";
        firstName = "";
        grade = 0;
        score = 0;
        count = 0;
}


void student::setName(string fName,string lName)
{
        lastName = lName;
        firstName = fName;

}

string student::fullName()
{
        string fullName;

        fullName.append(firstName);
        fullName.append(" ");
        fullName.append(lastName);

        return fullName;
}


double student::getScore ()
{
        return score /count;

}


void student::addGrade (double myGrade)
{
        score = score + myGrade;
        count ++;

}
