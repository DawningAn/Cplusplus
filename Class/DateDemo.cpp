#include <iostream>
using namespace std;

class Date{
public:
    // 构造函数(无参)
    Date(){
        _year = 2024;
        _month = 1;
        _day = 1;
    }

    // 带参构造函数(全缺省)
    Date(int year = 2024, int month = 1, int day = 1){
        _year = year;
        _month = month;
        _day = day;
    }

    void Print(){
        cout<<"Year: "<<_year<<" ";
        cout<<"Month: "<<_month<<" ";
        cout<<"Day: "<<_day<<endl;
    }
private:
    int _year;
    int _month;
    int _day;

};

int main(){
    Date D1;
    Date D2(2024,1,1);

    D1.Print();
    D2.Print();
}