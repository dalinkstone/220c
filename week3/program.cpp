#include "account.h"

#include <iostream>
#include <list>

int main() {
  int user_input = 9;
  float deposit = 0;
  float withdraw = 0;

  std::list<account::Account> accounts;

  while (user_input != 0) {
    std::cout << "\nAccount Menu:\n";
    std::cout << "0. Quit Program\n";
    std::cout << "1. Display Account Information\n";
    std::cout << "2. Add a deposit to an account\n";
    std::cout << "3. Withdraw from an account\n";
    std::cout << "4. Add new account\n";

    std::cout << "Your choice: ";
    std::cin >> user_input;

    account::Account new_account;

    switch (user_input) {
    case 0:
      return EXIT_SUCCESS;
    case 1:
      for(auto i = accounts.begin(); i != accounts.end(); i++) {
					std::cout << *i;
				}
      // std::cout << new_account;
      break;
    case 2:
      std::cout << "Amount to deposit: ";
      std::cin >> deposit;

      // new_account += deposit;

      break;
    case 3:
      std::cout << "Amount to withdraw: ";
      std::cin >> withdraw;

      // new_account -= withdraw;

      break;
    case 4:
      new_account.input_info();
      accounts.push_back(new_account);
      break;
    default:
      std::cout << "That is not a valid option. Try again.\n";
      break;
    }
  }
}
