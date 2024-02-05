#ifndef ACCOUNT_H
#define ACCOUNT_H

#incldue <string>

class Account{
private:
    std::string name {"None"};
    double balance {0.0};

public:
    //方法 
    bool deposit (double amount);
    bool withdraw (double amount);

    void set_balance(double amount){
        balance = amount;
    }

    double get_balance(){
        return balance;
    }

    void set_name(std::string naem);

    std::string get_name();
};


#endif // ACCOUNT_H