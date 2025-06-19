#include "BatchDetails.h"

#include <iostream>
void BatchDetails::setStudentName(std::string studName) {
  studentName = studName;
  std::cout << "Student name changed" << std::endl;
}
void BatchDetails::setBatch(std::string setBatch) {
  batch = setBatch;
  std::cout << "Batch name changed" << std::endl;
}
void BatchDetails::setDepartment(std::string depart) {
  department = depart;
  std::cout << "Department name changed" << std::endl;
}
void BatchDetails::setRollNo(unsigned long long int rollNum) {
  rollNo = rollNum;
  std::cout << "Roll number changed" << std::endl;
}
