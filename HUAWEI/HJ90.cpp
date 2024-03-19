#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
IPV4地址可以用一个32位无符号整数来表示，一般用点分方式来显示
点将IP地址分成4个部分，每个部分为8位，表示成一个无符号整数（因此正号不需要出现）
如10.137.17.1，是我们非常熟悉的IP地址，一个IP地址串中没有空格出现（因为要表示成一个32数字）。

现在需要你用程序来判断IP是否合法。

输入描述：
输入一个ip地址，保证不包含空格

输出描述：
返回判断的结果YES or NO*/

int main()
{
    string s;
    while (cin>>s)
    {
        bool ip = true;
        int count=0;
        for (int i=0;i<s.size();i++)
        {
            int num = 0;
            string temp = "";
            while(s[i]!='.' && i<s.size())
            {
                temp = temp + s[i];
                i++;
            }
            count++;
            //判断是否出现0开头的数字（不是0），或者两个点连在一起的情况。
            if ((temp[0]=='0' && temp.size()>1) || temp.size()==0 
                || temp[0]=='+')
            {
                ip = false;
                break;
            }
            num = stoi(temp);
            if (num<0 || num>255)
            {
                ip = false;
                break;
            }
        }
        if (count!=4) ip = false;//判断是不是分隔为4个数字
        if (ip) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

