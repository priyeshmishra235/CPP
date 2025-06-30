#include <array>
#include <iostream>
#include <string>
#include <vector>

void display(std::vector<std::string> name, int i) {
  std::cout << "Name: " << name.at(i) << std::endl;
}
void display(std::vector<int> rollNos, int i) {
  std::cout << "Roll No.: " << rollNos.at(i) << std::endl;
}
void display(std::vector<float> totals, int i) {
  std::cout << "Total marks is: " << totals.at(i) << std::endl;
}
void display(std::vector<std::array<float, 3>> marks, int k) {
  for (size_t j{0}; j < 3; j++)
    std::cout << "Marks" << j + 1 << ": " << marks.at(k).at(j) << " ";
  std::cout << std::endl;
}
bool searchByName(std::vector<std::string> &names, std::vector<int> &rollNos,
                  std::vector<std::array<float, 3>> &marks,
                  std::vector<float> &totals) {
  std::string tempName;
  std::cout << "Enter the name to search: ";
  std::cin >> tempName;
  bool matchFound = false;
  for (size_t i{0}; i < names.size(); i++) {
    if (tempName == names.at(i)) {
      matchFound = true;
      std::cout << "Match found: Displaying info..." << std::endl;
      display(names, i);
      display(rollNos, i);
      display(marks, i);
      display(totals, i);
    }
  }
  return matchFound;
}
int searchByName(std::vector<std::string> &names) {
  std::string tempName;
  std::cout << "Enter the name to search: ";
  std::cin >> tempName;
  int matchFound = 1;
  size_t i{0};
  for (i; i < names.size(); i++) {
    if (tempName == names.at(i)) {
      matchFound = 0;
      std::cout << "Match found..." << std::endl;
      return i + matchFound;
    }
  }
}
int main() {
  std::cout << " 1. Add Student \n 2. Display All \n 3. Search by Name \n 4. "
               "Edit Marks\n 5. Delete Student\n 6. Show Topper\n 7. Exit\n "
               "Enter your choice :\n "
            << std::endl;
  std::vector<std::string> names;
  std::vector<int> rollNos;
  std::vector<std::array<float, 3>> marks;
  std::vector<float> totals;
  while (true) {
    std::cout << "Enter your choice: " << std::endl;
    int inputNum{};
    std::cin >> inputNum;
    switch (inputNum) {
    case 1: {
      std::cout << "----------Add student---------" << std::endl;

      std::string tempName;
      int tempRoll{};
      std::array<float, 3> tempMarks;
      float tempTotal{0};

      std::cout << "Enter the name of Student: " << std::endl;
      std::cin >> tempName;
      std::cout << "Enter the roll no.: " << std::endl;
      std::cin >> tempRoll;

      for (size_t i = 0; i < 3; i++) {
        std::cout << "Enter the Marks" << i + 1 << ": ";
        std::cin >> tempMarks.at(i);
        tempTotal = tempMarks.at(i) + tempTotal;
      }
      names.push_back(tempName);
      rollNos.push_back(tempRoll);
      marks.push_back(tempMarks);
      totals.push_back(tempTotal);
      break;
    }
    case 2: {
      std::cout << "----------display all student---------" << std::endl;
      for (size_t i{0}; i < names.size(); i++) {
        display(names, i);
        display(rollNos, i);
        display(marks, i);
        display(totals, i);
      }
      break;
    }
    case 3: {
      std::cout << "----------Search for a student by name----------"
                << std::endl;
      int *index{};
      bool check = searchByName(names, rollNos, marks, totals);
      if (check == false) {
        std::cout << "Match found nil" << std::endl;
        std::cout << index << std::endl;
      }
      break;
    }
    case 4: {
      std::cout << "----------Editing marks----------" << std::endl;
      size_t index = searchByName(names);
      float tempTotal{0};
      if (index != names.size()) {
        for (int i{0}; i < 3; i++) {
          std::cout << "Enter the new Marks" << index << ": " << std::endl;
          float tempMarks{0};
          std::cin >> tempMarks;
          marks.at(index).at(i) = tempMarks;
          tempTotal = tempMarks + tempTotal;
        }
        totals.at(index) = tempTotal;
      }
      break;
    }
    case 5: {
      std::cout << "----------Delete student---------" << std::endl;
      size_t index = searchByName(names);
      if (index != names.size()) {
        std::cout << "Deleted" << index << ": " << std::endl;
        names.at(index).clear();
        totals.at(index).clear();
        rollNos.at(index).clear();
      }
    }
    default: {
      std::cout << "default";
      break;
    }
    }
  }

  return 0;
}
