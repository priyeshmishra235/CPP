#pragma once
#include <iostream>
#include <string>
class BatchDetails {
  // attributes
 private:
  std::string studentName{};
  unsigned long long int rollNo{0};
  std::string batch{};
  std::string department{};

 public:
  // constructor
  BatchDetails(std::string studName, unsigned long long int rollNum,
               std::string setBatch, std::string depart)
      : studentName{studName},
        rollNo{rollNum},
        batch{setBatch},
        department{depart} {}

  // method implementation outside class (set type)
  void setStudentName(std::string studName);
  void setBatch(std::string setBatch);
  void setDepartment(std::string depart);
  void setRollNo(unsigned long long int rollNum) { rollNo = rollNum; }

  // method inline implementation (get type)
  std::string getStudentName() const { return studentName; };
  std::string getBatch() const { return batch; };
  std::string getDepartment() const { return department; };
  unsigned long long int getRollNo() const { return rollNo; };

  void displayBatch() const {
    std::cout << "\nStudent Name: " << studentName << "\nRoll No: " << rollNo
              << "\nBatch: " << batch << "\nDepartment: " << department
              << std::endl;
  }
};