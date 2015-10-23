# include <iostream>
# include <string>
using namespace std;

class bankAccount
{private:
  string depositorName;
  string accountNumber;
  double balance;
  
public:

     bankAccount() {
		depositorName = "karim";
		accountNumber = "211";
		balance = 100000;
	}
  void display() {
	  cout << depositorName;
	  cout << accountNumber;
	  cout << balance;
  }
  void depose(double moneyAmount) {
	  balance += moneyAmount;
  }
  void withdraw(double moneyAmount) {
	  balance -= moneyAmount;
  }
}; 

