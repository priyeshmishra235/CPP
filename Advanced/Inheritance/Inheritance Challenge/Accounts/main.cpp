#include <iostream>
#include <vector>

#include "Account_Util.h"
#include "Savings_Account.h"

int main() {
  std::cout.precision(2);
  std::cout << std::fixed;
  goto start;
  // Accounts
  std::vector<Account> accounts;
  accounts.push_back(Account{});
  accounts.push_back(Account{"Larry"});
  accounts.push_back(Account{"Moe", 2000});
  accounts.push_back(Account{"Curly", 5000});

  display(accounts);
  deposit(accounts, 1000);
  withdraw(accounts, 2000);
start:
  // Savings

  std::vector<Savings_Account> sav_accounts;
  sav_accounts.push_back(Savings_Account{});
  sav_accounts.push_back(Savings_Account{"Superman"});
  sav_accounts.push_back(Savings_Account{"Batman", 2000});
  sav_accounts.push_back(Savings_Account{"WonderWoman", 5000, 5.0});

  display(sav_accounts);
  deposit(sav_accounts, 1000);
  withdraw(sav_accounts, 2000);

  return 0;
}
