#include <iostream>
#include <stdlib.h>

int main(void) {
  int id = 0;
  std::string name;
  float balance = 0.0;
  float deposit = 0;
  int withdraw = 0;

  std::cout << "Enter the name: ";
  std::cin >> name;

  std::cout << "Enter the balance: ";
  std::cin >> balance;

  int user_input = 9;

  while (user_input != 0) {
    std::cout << "\nAccount Menu:\n";
    std::cout << "0. Quit Program\n";
    std::cout << "1. Display Account Information\n";
    std::cout << "2. Add a deposit to an account\n";
    std::cout << "3. Withdraw from an account\n";

    std::cout << "Your choice: ";
    std::cin >> user_input;

    switch (user_input) {
    case 0:
      return EXIT_SUCCESS;
    case 1:
      std::cout << "Account ID: " << id << " Name: " << name << " Balance: $"
                << balance << "\n";
      break;
    case 2:
      std::cout << "Amount to deposit: ";
      std::cin >> deposit;

      balance += deposit;

      break;
    case 3:
      std::cout << "Amount to withdraw: ";
      std::cin >> withdraw;

      balance -= float(withdraw);

      break;
    default:
      std::cout << "That is not a valid option. Try again.\n";
      break;
    }
  }

  return 0;
}
