#include <iostream>
#include <assert.h>
using namespace std;

class Date
{
public:
    // 构造函数(无参)
    // Date(){
    //     _year = 2024;
    //     _month = 1;
    //     _day = 1;
    // }

    // 带参构造函数(全缺省)
    Date(int year = 2024, int month = 1, int day = 1)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    // 拷贝构造函数
    // Date(Date d){   // 会引发无穷递归
    Date(const Date &d)
    { // 正确写法
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }

    void Print()
    {
        cout << "Year: " << _year << " ";
        cout << "Month: " << _month << " ";
        cout << "Day: " << _day << endl;
    }

    ~Date()
    {
        cout << "~Date()" << endl;
    }

    // 获取多少天后的日期

    int GetMonthDay(int year, int month)
    {
        assert(month > 0 && month < 13);
        int MonthDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        {
            return 29;
        }
        else
        {
            return MonthDay[month];
        }
    }
    // Date GetAfterXDay(int x){

    // +
    Date Add(int x)
    {
        Date tmp = *this;
        tmp._day += x;
        while (tmp._day > GetMonthDay(tmp._year, tmp._month))
        {
            // 进位
            tmp._day -= GetMonthDay(tmp._year, tmp._month);
            tmp._month++;
            if (tmp._month > 12)
            {
                tmp._month = 1;
                tmp._year++;
            }
        }
        return tmp;
    }

    // +=
    Date AddEqual(int x)
    {
        _day += x;
        while (_day > GetMonthDay(_year, _month))
        {
            // 进位
            _day -= GetMonthDay(_year, _month);
            _month++;
            if (_month > 12)
            {
                _month = 1;
                _year++;
            }
        }
        return *this;
    }

private:
    int _year;
    int _month;
    int _day;
};

int main()
{
    Date D1(2024, 1, 1); // 调用无参构造函数
    Date D3 = D1.AddEqual(100);

    D3.Print();
    D1.Print();   
}
