#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "student.h"
#include "date.h"
#include "address.h"


//void testAddress();
//void testDate();
//void testStudent();

int main(){
  std::string currentLine;	
  //read in file 
  inFile.open("students.csv");
  
  
  
  inFile.close();//close file 
  return 0;
} // end main
/*
void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst() << std::endl;
  delete student;
} // end testStudent
*/
