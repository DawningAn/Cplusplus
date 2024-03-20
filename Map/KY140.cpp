#include <iostream>
#include <map>

using namespace std;

/*
 每天第一个到机房的人要把门打开，最后一个离开的人要把门关好。现有一堆杂乱的机房签到、签离记录，请根据记录找出当天开门和关门的人。
输入描述：
    每天的记录在第一行给出记录的条目数M (M > 0 )，下面是M行，
    每行的格式为
     证件号码 签到时间 签离时间
     其中时间按“小时:分钟:秒钟”（各占2位）给出，证件号码是长度不超过15的字符串。
输出描述：
    对每一天的记录输出1行，即当天开门和关门人的证件号码，中间用1空格分隔。
    注意：在裁判的标准测试输入中，所有记录保证完整，每个人的签到时间在签离时间之前，且没有多人同时签到或者签离的情况。*/

int main()
{
    int M;
    

    while (cin >> M)
    {
        map<string, string> In;
        map<string, string> Out;
        for (int i = 0; i < M; i++)
        {
            string id;
            string intime;
            string outtime;

            cin >> id >> intime >> outtime;
            In[intime] = id;
            Out[outtime] = id;
        }

        cout << (In.begin()->second) << " " << (--Out.end())->second << endl;
    }
}