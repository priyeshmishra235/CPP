#include <vector>

#include "BatchDetails.h"
#include "SubjectDetails.h"
int main() {
  std::vector<SubjectDetails> subjects;
  std::vector<BatchDetails> batchInfo;

  int choice;
  do {
    std::cout << "1. Add Subject\n2.Display batch details and subject "
                 "details of selected student\n3.remove a student "
                 "details \n4.  ";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cin.ignore();  // to ignore newline characters

    switch (choice) {
      case 1: {
        std::string subName, subCode, studName, batch, department;
        float subCredit, subMarks, subAllMarks, subPer, TotPer;
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, studName);
        std::cout << "Enter Batch: ";
        std::getline(std::cin, batch);
        std::cout << "Enter Department: ";
        std::getline(std::cin, department);
        std::cout << "Enter Subject Name: ";
        std::getline(std::cin, subName);
        std::cout << "Enter Subject Code: ";
        std::getline(std::cin, subCode);
        std::cout << "Enter Subject Credit: ";
        std::cin >> subCredit;
        std::cout << "Enter Total Marks: ";
        std::cin >> subAllMarks;
        std::cout << "Enter Marks Obtained: ";
        std::cin >> subMarks;
        std::cout << "Enter Percentage: ";
        std::cin >> subPer;
        std::cout << "Enter Total Percentage: ";
        std::cin >> TotPer;
        subjects.push_back(SubjectDetails(subName, subCode, subCredit, subMarks,
                                          subAllMarks, subPer, TotPer));
        batchInfo.push_back(BatchDetails(studName, batch, department));
        break;
      }
      case 2: {
        std::string studName;
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, studName);
        for (const auto& batch : batchInfo) {
          if (batch.getStudentName() == studName) {
            batch.displayBatch();
          }
        }
        for (const auto& subject : subjects) {
          if (subject.getSubName() == studName) {
            subject.display();
          }
        }
        break;
      }
      case 3: {
        std::string studName;
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, studName);
        for (auto it = batchInfo.begin(); it != batchInfo.end(); ++it) {
          if (it->getStudentName() == studName) {
            batchInfo.erase(it);
            break;
          }
        }
        for (auto it = subjects.begin(); it != subjects.end(); ++it) {
          if (it->getSubName() == studName) {
            subjects.erase(it);
            break;
          }
        }
        break;
      }
    }
  } while (choice != 4);
  return 0;
}