#include <map>

#include "batchDetails.h"
#include "subjectDetails.h"

std::map<unsigned long long int, std::pair<BatchDetails, SubjectDetails>>
    studentMap;

void addStudentDetails(unsigned long long int rollNo, BatchDetails batchDetails,
                       SubjectDetails subjectDetails) {
  studentMap[rollNo] = std::make_pair(batchDetails, subjectDetails);
}
void accessStudentDetails(unsigned long long int rollNo) {
  if (studentMap.find(rollNo) != studentMap.end()) {
    BatchDetails batchDetails = studentMap[rollNo].first;
    SubjectDetails subjectDetails = studentMap[rollNo].second;

    // Access or modify the batch and subject details here
  }
}
void removeStudentDetails(unsigned long long int rollNo) {
  if (studentMap.find(rollNo) != studentMap.end()) {
    studentMap.erase(rollNo);
  }
}
void modifyStudentDetails(unsigned long long int rollNo,
                          BatchDetails newBatchDetails,
                          SubjectDetails newSubjectDetails) {
  if (studentMap.find(rollNo) != studentMap.end()) {
    studentMap[rollNo] = std::make_pair(newBatchDetails, newSubjectDetails);
  }
}