#include <iostream>
#include <vector>
#include <string>
#include "Account.h"

using namespace std;


int main(){
    Account job_account;
    Account alice_account;

    // job_account.name = "Job";
    // job_account.balance = 1000.0;

    job_account.deposit (500);  //存款
    // cout << job_account.balance <<endl;

    // (*alice_account).name = "Alice";
    // (*alice_account).balance = 2000.0;
    // alice_account->deposit(200);
    // cout << (*alice_account).balance << endl;

    cout << alice_account.get_name() << alice_account.get_balance() << endl;
    alice_account.deposit(1000.0);
    alice_account.withdraw(500);
    alice_account.withdraw(600);


}