/*
Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted
message. Then decrypted the encrypted message back to the original message.

You may use the 2 strings below for  your substitution.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits,
punctuation, whitespace and so forth. Also, currently the cipher always
substitutes a lowercase letter with an uppercase letter and vice-versa. This
could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <vector>
// #include <string>
int main() {
  // string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  std::cout << "Enter the message you want to encrypt!";
  std::string message{}, decrypted{};
  std::getline(std::cin, message);

  std::vector<int> encrypted;
  // encryption
  for (size_t i{0}; i < message.length(); i++) {
    encrypted.push_back(toascii(message.at(i)) - 30);
  }
  for (int i : encrypted) {
    std::cout << i << " ";
  }
  for (size_t i{0}; i < message.length(); i++) {
    decrypted.push_back(static_cast<char>(encrypted.at(i) + 30));
  }
  std::cout << decrypted;
  return 0;
}
