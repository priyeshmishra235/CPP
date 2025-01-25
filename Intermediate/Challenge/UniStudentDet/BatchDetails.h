#pragma once
#include <iostream>
#include <string>
class BatchDetails {
  // attributes
 private:
  std::string studentName{};
  std::string batch{};
  std::string department{};

 public:
  // constructor
  BatchDetails(std::string studName, std::string setBatch, std::string depart)
      : studentName{studName}, batch{setBatch}, department{depart} {}
  // method implementation outside class (set type)
  void setStudentName(std::string studName);
  void setBatch(std::string setBatch);
  void setDepartment(std::string depart);

  // method inline implementation (get type)
  std::string getStudentName() const { return studentName; };
  std::string getBatch() const { return batch; };
  std::string getDepartment() const { return department; };

  void displayBatch() const {
    std::cout << "\nStudent Name: " << studentName << "\nBatch: " << batch
              << "\nDepartment: " << department << std::endl;
  }
};