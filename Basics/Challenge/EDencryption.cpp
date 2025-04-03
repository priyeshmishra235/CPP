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
  std::cout << "Enter the message you want to encrypt!: \n";
  std::string message{};
  std::getline(std::cin, message);

  // encrypting the message
  for (size_t i{0}; i < message.length(); i++) {
    size_t index{charSet.find(message.at(i))};
    message.at(i) = key.at(index);
  }
  std::cout << "\nEncrypted message: " << message;

  std::cout << "\nPress Enter to exit...";
  std::cin.get();

  return 0;
}
