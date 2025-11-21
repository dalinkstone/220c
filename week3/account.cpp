#include "account.h"

#include <iostream>
#include <ostream>
#include <string>
#include <list>

using account::Account;

std::ostream& account::operator<<(std::ostream& out, const Account& a) {

  a.display(out);

  return out;
}

int Account::next_id = 0;

Account::Account() : id(0), name(""), balance(0.0) {}

void Account::set_id() { id = next_id++; }

void Account::set_name(std::string aName) { name = aName; }

void Account::set_balance(float aBalance) { balance = aBalance; }

void Account::deposit(float aDeposit) { balance += aDeposit; }

void Account::withdraw(float aWithdraw) { balance -= aWithdraw; }

int Account::get_id() const { return id; }

std::string Account::get_name() const { return name; }

float Account::get_balance() const { return balance; }

void Account::input_info() {
  std::string userName = "";
  float userBalance = 0.0;

  std::cout << "Enter the name: ";
  std::cin >> userName;

  std::cout << "Enter the balance: ";
  std::cin >> userBalance;

  this->set_id();
  this->set_name(userName);
  this->set_balance(userBalance);
}

void Account::display_info() {
  std::cout << "Account ID: " << this->get_id()
            << "  Name: " << this->get_name() << "  Balance: $"
            << this->get_balance() << std::endl;
}

Account &Account::operator+=(float deposit) {
  this->deposit(deposit);

  return *this;
}

Account &Account::operator-=(float withdraw) {
  this->withdraw(withdraw);

  return *this;
}

std::ostream &Account::display(std::ostream &out) const {
  out << "Account ID: " << this->get_id() << "  Name: " << this->get_name()
      << "  Balance: $" << this->get_balance() << "\n";

  return out;
}

