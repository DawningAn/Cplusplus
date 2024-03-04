#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    对给定的一个字符串，把其中从a-y,A-Y的字母用其后继字母替代，把z和Z用a和A替代，则可得到一个简单的加密字符串。*/
    string S;
    while (getline(cin, S))
    {
        for (unsigned int i = 0; i < S.size(); i++)
        {

            if (S[i] >= 'a' && S[i] <= 'y')
            {
                S[i] = S[i] + 1;
            }else if (S[i] >= 'A' && S[i] <= 'Y')
            {
                S[i] = S[i] + 1;
            }else if (S[i] == 'z')
            {
                S[i] = 'a';
            }else if (S[i] == 'Z')
            {
                S[i] = 'A';
            }
        }
        cout << S << endl;
    }
    return 0;
}
