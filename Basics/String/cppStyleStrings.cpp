#include <iomanip>
#include <iostream>
#include <string> // important!

using namespace std; // or use std::

int main() {
  string s0;
  string s1{"Apple"};
  string s2{"Banana"};
  string s3{"Kiwi"};
  string s4{"apple"};
  string s5{s1};       // Apple
  string s6{s1, 2, 4}; // ple
  string s7(10, 'X');  // XXXXXXXXXX
  string s8{s1, 3}; // will assume as {s1,start from 3, to last char of string}
  string s9{"Strawberry", 4}; // Stra

  // Initialization
  cout << "\nInitialization" << "\n------------------------------------------"
       << endl;
  cout << "s0 is initialized to: " << s0 << endl;     // No garbage
  cout << "length of s0 is: " << s0.length() << endl; // empty string
  cout << "s1 is initialized to: " << s1 << endl;
  cout << "s2 is initialized to: " << s2 << endl;
  cout << "s3 is initialized to: " << s3 << endl;
  cout << "s4 is initialized to: " << s4 << endl;
  cout << "s5 is initialized to: " << s5 << endl;
  cout << "s6 is initialized to: " << s6 << endl;
  cout << "s7 is initialized to: " << s7 << endl;
  cout << "s8 is initialized to: " << s8 << endl;
  cout << "s9 is initialized to: " << s9 << endl;

  // Comparison
  cout << "\nComparison: compares ascii value lexically"
       << "\n------------------------------------------" << endl;
  cout << boolalpha; // these comparison operator return 0 or 1. Using
  // boolalpha makes them return true or false instead
  cout << s1 << " == " << s5 << ": " << (s1 == s5)
       << endl; // True    Apple == Apple
  cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
  // False   Apple != Banana
  cout << s1 << " != " << s2 << ": " << (s1 != s2)
       << endl; // True    Apple != Banana
  cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
  // True         Apple < Banana
  cout << s1 << " <= " << s2 << ": " << (s1 <= s2) << endl;
  cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
  cout << s2 << " >= " << s1 << ": " << (s2 >= s1)
       << endl; // True         Banana > Apple
  cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
  // False        apple >Apple
  cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;
  // True Apple == Apple

  // Assignment
  cout << "\nAssignment" << "\n------------------------------------------"
       << endl;
  cout << "s1 before changing is: " << s1 << endl;
  s1 = "Watermelon";
  cout << "now s1 is: " << s1 << endl; // Watermelon
  cout << "s2 before changing is: " << s2 << endl;
  s2 = s1;
  cout << "s2 is now: " << s2 << endl; // Watermelon

  cout << "s3 before changing is: " << s3 << endl;
  s3 = "Frank";
  cout << "s3 is now: " << s3 << endl; // Frank

  s3[0] = 'C';                                             // Crank
  cout << "s3 change first letter to 'C': " << s3 << endl; // Crank
  // s3[5] = 'C'; // will not give any error
  // s3.at(5) = 'C'; // will give out of range error
  cout << "s3 change 5th index letter to 'C': " << s3 << endl; // Crank
  s3.at(0) = 'P';
  cout << "s3 change first letter to 'P': " << s3 << endl; // Prank

  // Concatenation
  s3 = "Watermelon";
  cout << "\nConcatenation" << "\n------------------------------------------"
       << endl;

  s3 = s5 + " and " + s2 + " juice";   // Apple and Watermelon juice
  cout << "s3 is now: " << s3 << endl; // Apple and Watermelon juice

  // s3 = "nice " + " cold " + s5 + "juice"; // Compiler error // error: invalid
  // operands to binary expression

  //  for loop
  cout << "\nfor Loop" << "\n------------------------------------------"
       << endl;
  s1 = "Apple";
  for (size_t i{0}; i < s1.length(); ++i)
    cout << s1.at(i); //  or s1[i]    Apple
  cout << endl;

  // Range-based for loop
  cout << "\nRange based for Loop"
       << "\n------------------------------------------" << endl;
  for (char c : s1)
    cout << c; // Apple
  cout << endl;

  // Substring
  cout << "\nSubstring" << "\n------------------------------------------"
       << endl;
  s1 = "This is a test";

  cout << s1.substr(0, 4) << endl;  // This
  cout << s1.substr(5, 2) << endl;  // is
  cout << s1.substr(10, 4) << endl; // test

  // Erase
  cout << "\nErase" << "\n------------------------------------------" << endl;

  s1 = "This is a test";
  s1.erase(0, 5); // Erase This from s1 results in "is a test"
  cout << "s1 is now: " << s1 << endl; // is a test

  // cin vs getline
  cout << "\ngetline" << "\n------------------------------------------" << endl;

  string string1{}, string2{}, string3{};
  cout << "Using cin, enter string1: "; // cin takes input upto space
  cin >> string1;
  cout << "string 1 is: " << string1 << endl;
  cout << "Using getline, enter string2: " << endl; // takes complete input
                                                    // until enter pressed
  getline(cin, string2); // previous cin buffer is not cleared
  cout << "string2 is: " << string2 << endl;
  cout << "Using getline delimiter, enter string3: " << endl;
  getline(cin, string3, 'x'); // takes input until x is typed
  cout << "string3 is: " << string3 << endl;

  // Find
  cout << "\nfind" << "\n------------------------------------------" << endl;
  s1 = "The secret word is Boo";
  string word{};

  cout << "Enter the word to find: ";
  cin >> word;

  size_t position = s1.find(word);
  if (position != string::npos)
    cout << "Found " << word << " at position: " << position << endl;
  else
    cout << "Sorry, " << word << " not found" << endl;

  cout << endl;
  // More functions here:
  // https://en.cppreference.com/w/cpp/string/basic_string.html
  return 0;
}
