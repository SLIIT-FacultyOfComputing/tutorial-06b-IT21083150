#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student:: assignDetails(int ID,char const NAME[]) {
   studentId = ID;
   strcpy(name,NAME);
  
}

// Display StudentId and Name
void Student:: display() {
  cout << "Student Id : " << studentId << endl;
  cout << "Student name : " << name << endl;
  
}
