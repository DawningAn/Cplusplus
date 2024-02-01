#include <iostream>
#include <vector>

using namespace std;

class Account{
public:
    string name {"None"};
    double balance {0.0};

    //方法 
    bool deposit (double amount){  //存款
        balance += amount;
        cout << "Deposit successfully :" << amount << "$" << endl;
        return true;
    };
    bool withdraw (double amount){  //取款
        if(balance >= amount){
            balance -= amount;
            cout << "Withdraw successfully :" << amount << "$" << endl;
            return true;
        }else{
            cout << "Insufficient balance" << endl;
            return false;
        }
    };

    void set_name(string naem);

    string get_name();
};


void Account::set_name(string name){
    this->name = name;
}

string Account::get_name(){
    return this->name;
}

int main(){
    Account job_account;
    Account *alice_account = new Account();

    job_account.name = "Job";
    job_account.balance = 1000.0;

    job_account.deposit (500);  //存款
    cout << job_account.balance <<endl;

    (*alice_account).name = "Alice";
    (*alice_account).balance = 2000.0;
    alice_account->deposit(200);
    cout << (*alice_account).balance << endl;

    alice_account->withdraw(5000);

}