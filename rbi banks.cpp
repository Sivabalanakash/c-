#include <iostream>
#include <string>
using namespace std;
class Customer {
  public:
    string name;
    string address;
    string phone;

    Customer(string n, string addr, string ph) {
      name = n;
      address = addr;
      phone = ph;
    }
    
    string getName() {
      return name;
    }

    string getAddress() {
      return address;
    }

    string getPhone() {
      return phone;
    }
};

class Account {
  private:
    int accountNumber;
    string accountType;
    double accountBalance;
    double interestRate;

  public:
    
    Account(int acctNum, string acctType, double bal, double intRate) {
      accountNumber = acctNum;
      accountType = acctType;
      accountBalance = bal;
      interestRate = intRate;
    }

    int getAccountNumber() {
      return accountNumber;
    }

    string getAccountType() {
      return accountType;
    }

    double getAccountBalance() {
      return accountBalance;
    }

    double getInterestRate() {
      return interestRate;
    }
};

class RBI {
  protected:
    double minInterestRate;
    double minBalanceAllowance;
    double maxWithdrawalAmount;

  public:
    RBI(double minIntRate, double minBalAllow, double maxWDAmt) {
      minInterestRate = minIntRate;
      minBalanceAllowance = minBalAllow;
      maxWithdrawalAmount = maxWDAmt;
    }

    double getMinInterestRate() {
      return minInterestRate;
    }

    double getMinBalanceAllowance() {
      return minBalanceAllowance;
    }

    double getMaxWithdrawalAmount() {
      return maxWithdrawalAmount;
    }
};

class SBI : public RBI {
  public:
    SBI() : RBI(4.0, 5000.0, 50000.0) {}
};

class ICICI : public RBI {
  public:
    ICICI() : RBI(4.0, 10000.0, 75000.0) {}
};

class PNB : public RBI {
  public:
    PNB() : RBI(4.0, 7500.0, 60000.0) {}
};

int main() {
  Customer c("Akash kuamr", "vijay shanthi.", "8526702291");
  		c.getName();
  		c.getAddress();
  		c.getphone();
  		
  SBI.getMinIntrestrate();
  SBI.getMinBalanceAllowance();
  SBI.MaxWithdrawalAmount();
  
  ICICI.getMinIntrestrate();
  ICICI.getMinBalanceAllowance();
  ICICI.MaxWithdrawalAmount();
  
  PNB.getMinIntrestrate();
  PNB.getMinBalanceAllowance();
  PNB.MaxWithdrawalAmount();
}