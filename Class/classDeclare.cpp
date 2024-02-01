#include <iostream>
#include <vector>
using namespace std;
class Account{
    string name {"None"};
    double balance {0.0};

    //方法 
    bool deposit (double amount);
    bool withdraw (double amount);

};

int main(){
    Account job_account;
    Account alice_account;

    Account accounts[] = {job_account, alice_account};

    vector <Account> accounts_vec {job_account};
    accounts_vec.push_back(alice_account);

    Account* P_account = new Account();
    delete P_account;
    return 0;

}