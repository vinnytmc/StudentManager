#include "student.h"
#include <string>

using namespace std;

void student::setName(string firstName, string lastName)
{
  //Set first to firstName Value

  firstname = firstName;
  lastname = lastName;
  //Set last to lastname value
}
string student::fullName()
{
  //declare a string called full
  string full;
  //append first to full
  full.append(firstname);
  //append a space to full
  full.append(" ");
  //append last to full
  full.append(lastname);
  //return full
  return full;
  
  }
