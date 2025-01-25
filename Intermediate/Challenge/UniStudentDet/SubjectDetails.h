#pragma once
#include <iostream>
#include <string>

class SubjectDetails {
  // attributes
 private:
  std::string subjectName{};
  std::string subjectCode{};
  float subjectCredit{0}, subjectCreditSet{0};
  float subjectMarks{0}, subjectMarksSet{0};
  float subjectAllMarks{0}, subjectAllMarksSet{0};
  float subjectPercentage{0}, subjectPercentageSet{0};
  // float totalPercentage{0}, totalPercentageSet{0};

 public:
  // constructor
  SubjectDetails(std::string subName, std::string subCode, float subCredit,
                 float subMarks, float subAllMarks, float subPer, float TotPer)
      : subjectName{subName},
        subjectCode{subCode},
        subjectCredit{subCredit},
        subjectMarks{subMarks},
        subjectAllMarks{subAllMarks},
        subjectPercentage{subPer},
        totalPercentage{TotPer} {}

  // methods implementation outside the class (set type)
  void setSubName(std::string subName);
  void setSubCode(std::string subCode);
  void setSubCreditGot(int creditGot);
  void setSubAllMarksGot(int subAllMarks);
  void setSubMarksGot(int subMarkGot);
  void setSubPercentGot(int subPer);
  void setTotPercent(int TotPer);

  // methods inline implementation (get type)
  std::string getSubName() const { return subjectName; };
  std::string getSubCode() const { return subjectCode; };
  float getSubCredit() const { return subjectCredit; };
  float getSubMarks() const { return subjectMarks; };
  float getSubAllMarks() const { return subjectAllMarks; };
  float getSubPercent() const { return subjectPercentage; };
  float getTotalPercent() const { return totalPercentage; };

  void display() const {
    std::cout << "\nSubject Name: " << subjectName
              << "\nSubject Code: " << subjectCode
              << "\nSubject Credit: " << subjectCredit
              << "\nTotal Marks all subject combined: " << subjectAllMarks
              << "\nThis Subject Marks got: " << subjectMarks
              << "\nThis subject percentage: " << subjectPercentage
              << "\nTotal percentage combined all subject: " << totalPercentage
              << std::endl;
  }
};