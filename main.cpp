#include <bits/stdc++.h>

using namespace std;
ifstream input("nhan.INP");
ofstream output("nhan.OUT");
int main()
{
    int n;
    input >> n;
    string day[60000] = {};
    int e = 0;

    for(int i = 1; i <n; i++)
    {
        int x1, x2, x3;
        x1 = i;
        for(int j = 1; j <n; j++)
        {
            x2 = j;
            if(x1 + x2 >= n)
            {
                break;
            }
            for(int k =1; k <n;k++)
            {
                x3 = k;
                if(x1+x2+x3 ==n && x1 >= x2 && x2 >= x3)
                {
                    e++;
                    string ch;
                    ch=to_string(x1)+" "+to_string(x2)+" "+to_string(x3);
                    //cout << ch << endl;
                    day[e] = ch;

                }
                if(x1 + x2+x3 >= n)
                {
                    break;
                }
            }
        }
    }
    cout <<  "total:" << e;
    for(int i=e;i>=0;i--)
    {
        output << day[i] << endl;
    }
}
