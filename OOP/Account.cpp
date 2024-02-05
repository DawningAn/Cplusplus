#include "Account.h"
#include <iostream>
void Account::set_name(std::string name){
    this->name = name;
}

bool Account::deposit(double amount){
    balance += amount;
    std::cout << "Deposit successfully :" << amount << "$" << std::cout;
    return true;
}

bool Account::withdraw(double amount){
    if(balance >= amount){
        balance -= amount;
        std::cout << "Withdraw successfully :" << amount << "$" << std::cout;
        return true;
    }else{
        std::cout << "Insufficient balance" << std::cout;
        return false;
    }
}


std::string Account::get_name(){
    return this->name;
}