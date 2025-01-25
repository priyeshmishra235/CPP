#include <vector>

#include "BatchDetails.h"
#include "SubjectDetails.h"
std::vector<SubjectDetails> subjects;
std::vector<BatchDetails> batchInfo;

void choiceInfo() {
  std::cout << "1. Add student details\n"
            << "2. Add subject details\n"
            << "3. Display student details\n"
            << "4. Display subject details\n"
            << "5. Delete student details\n"
            << "6. Delete subject details\n"
            << "7. Search student details\n"
            << "8. Search subject details\n"
            << "9. Modify student details\n"
            << "10. Modify subject details\n"
            << "11. Student performance\n"
            << "12. Sort subjects by marks\n"
            << "13. Sort subjects by credits\n"
            << "14. Sort subjects by percentage\n"
            << "15. Sort students by marks\n"
            << "16. Sort students by credits\n"
            << "17. Sort students by percentage\n"
            << "18. Department performance\n"
            << "19. Batch performance\n"
            << "20. Top 5 students of batch\n"
            << "21. Top 5 students of department\n"
            << "22. Exit\n"
            << std::endl;
}
void addStudentDetails() {
  std::string studName, batch, department;
  int rollNum;

  std::cout << "Enter Student Name: ";
  std::getline(std::cin, studName);
  std::cout << "Enter roll number: ";
  std::cin >> rollNum;
  std::cin.ignore();
  std::cout << "Enter Batch: ";
  std::getline(std::cin, batch);
  std::cout << "Enter Department: ";
  std::getline(std::cin, department);

  batchInfo.push_back(BatchDetails(studName, rollNum, batch, department));
}
void addSubjectDetails() {
  std::string subName, subCode;
  float subCredit, subMarks, subPer;

  std::cout << "Enter Subject Name: ";
  std::getline(std::cin, subName);
  std::cout << "Enter Subject Code: ";
  std::getline(std::cin, subCode);
  std::cout << "Enter Subject Credits: ";
  std::cin >> subCredit;
  std::cout << "Enter Subject Marks: ";
  std::cin >> subMarks;
  std::cout << "Enter Subject Percentage: ";
  std::cin >> subPer;

  subjects.push_back(
      SubjectDetails(subName, subCode, subCredit, subMarks, subPer));
}

void displayStudentDetails() {
  for (const auto &stud : batchInfo) {
    stud.displayBatch();
  }
}

void displaySubjectDetails() {
  for (const auto &sub : subjects) {
    sub.display();
  }
}

void deleteStudentDetails() {}
int main() {
  int choice;
  do {
    //
    // TESTING AREA FOR DELETE STUDENT DETAILS
    batchInfo.push_back(BatchDetails("John Doe", 101, "A1", "CSE"));
    batchInfo.push_back(BatchDetails("Jane Smith", 102, "B2", "IT"));
    batchInfo.push_back(BatchDetails("Emily Davis", 103, "C3", "ECE"));
    batchInfo.push_back(BatchDetails("Michael Brown", 104, "D4", "ME"));
    batchInfo.push_back(BatchDetails("Sarah Wilson", 105, "E5", "EEE"));
    //
    choiceInfo();
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cin.ignore();  // to ignore newline characters

    switch (choice) {
      case 1: {
        addStudentDetails();
        break;
      }
      case 2: {
        addSubjectDetails();
        break;
      }
      case 3: {
        displayStudentDetails();
        break;
      }
      case 4: {
        break;
      }
      case 5: {
        break;
      }
      case 6: {
        break;
      }
      case 7: {
        break;
      }
      case 8: {
        break;
      }
      case 9: {
        break;
      }
      case 10: {
        break;
      }
      case 11: {
        break;
      }
      case 12: {
        break;
      }
      case 13: {
        break;
      }
      case 14: {
        break;
      }
      case 15: {
        break;
      }
      case 16: {
        break;
      }
      case 17: {
        break;
      }
      case 18: {
        break;
      }
      case 19: {
        break;
      }
      case 20: {
        break;
      }
      case 21: {
        break;
      }
      case 22: {
        break;
      }
    }
  } while (choice != 22);
  return 0;
}
