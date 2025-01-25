#include "SubjectDetails.h"

void SubjectDetails::setSubName(std::string subName) {
  subjectName = subName;
  std::cout << "Subject name changed" << std::endl;
}
void SubjectDetails::setSubCode(std::string subCode) {
  subjectCode = subCode;
  std::cout << "Subject code changed" << std::endl;
}

void SubjectDetails::setSubCreditGot(int creditGot) {
  subjectCredit = creditGot;
  std::cout << "Subject credit modified" << std::endl;
}

void SubjectDetails::setSubAllMarksGot(int subAllMarks) {
  subjectAllMarks = subAllMarks;
  std::cout << "Total marks Got , modified" << std::endl;
}
void SubjectDetails::setSubMarksGot(int subMarkGot) {
  subjectMarks = subMarkGot;
  std::cout << "This subject marks modified" << std::endl;
}

void SubjectDetails::setSubPercentGot(int subPer) {
  subjectPercentage = subPer;
  std::cout << "This subject percentage, modified" << std::endl;
}
void SubjectDetails::setTotPercent(int TotPer) {
  totalPercentage = TotPer;
  std::cout << "Total percentage modified" << std::endl;
}