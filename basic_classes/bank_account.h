class bank_account{
private:
  int balance;
public:
  withdraw(int x){
    balance -= x;
    
  }
  deposit(int x){
    balance += x;
  }
}
