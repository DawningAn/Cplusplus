#include <iostream>

using namespace std;
class Date
{
public:
    Date(int year = 2024, int month = 1, int day = 1)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    //
    void Print(){
        cout <<_year<<"/"<<_month<<"/"<<_day<<endl;
    }

    bool operator==(const Date &d){
        return _year == d._year 
            && _month == d._month 
            && _day == d._day;
}
    bool operator<(const Date& d){
        return _year < d._year
        || (_year == d._year && _month < d._month)  // 年相等时月小才小
        || (_year == d._year && _month == d._month && _day < d._day);
    }

    // 可以考虑实现小于等于
    // bool operator>(const Date& d){
    bool operator<=(const Date & d){
        return *this < d || *this == d;
       
    }

    // 大于
    bool operator>(const Date& d){
        return !(*this <= d);
    }

    // 等于
    bool operator!=(const Date& d){
        return !(*this == d);
    }

    // = 赋值重载
    // 返回值是为了支持连续赋值，保持运算符的特性
    Date& operator=(const Date& d){
        if(this != &d){
            _year = d._year;
            _month = d._month;
            _day = d._day;
        }
        
        return  *this;
    }

private:
    int _year;
    int _month;
    int _day;
};



int main(){
    Date d1(2024,10,1);
    Date d2(2024,1,1);

    cout<<d1.operator==(d2)<<endl;
    cout <<(d1 == d2)<<endl;

    cout <<(d1 < d2)<<endl;

    d1 = d2;  // d1.operator=(d2);
    d1.Print();  // 打印发现已经成功完成

    return 0;
}