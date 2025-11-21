#ifndef account_h
#define account_h

#include <iostream>
#include <iterator>
#include <list>
#include <string>

namespace account {
class Account;
std::ostream &operator<<(std::ostream &s, const Account &a);

class Account {
  static int next_id;
  friend std::ostream &operator<<(std::ostream &s, const Account &a);

private:
  int id;
  std::string name;
  float balance;

public:
  Account();
  void input_info();
  void display_info();
  void set_id();
  void set_name(std::string aName);
  void set_balance(float aBalance);
  void deposit(float aDeposit);
  void withdraw(float aWithdraw);
  int get_id() const;
  std::string get_name() const;
  float get_balance() const;
  Account &operator+=(float deposit);
  Account &operator-=(float withdraw);
  std::ostream &display(std::ostream &out) const;
};
} 

#endif
