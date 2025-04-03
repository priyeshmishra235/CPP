#include <iostream>
#include <string>
int main() {
  // alphabet and key
  std::string charSet{" !#$%&'()*+,-./"
                      "0123456789:\";<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`"
                      "abcdefghijklmnopqrstuvwxyz{|}~"};
  std::string key{"W&h93q@Pa#->x8U]XI}s_fOH0wTm?<$=ZA7BEn,{/"
                  ";*~o%Yj`MD[plc 'dQgKu|\"RtiC)ze(:1k.V6NGL5ry+2bv!FS4^J"};

  // getting message input
  std::cout << "Enter the encrypted message you want to decrypt!: \n";
  std::string message{};
  std::getline(std::cin, message);

  // decrypting the message
  for (size_t i{0}; i < message.length(); i++) {
    size_t index{key.find(message.at(i))};
    message.at(i) = charSet.at(index);
  }
  std::cout << "\nDecrypted message: " << message;

  std::cout << "\nPress Enter to exit...";
  std::cin.get();

  return 0;
}
