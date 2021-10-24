#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    //int start_Index = 0, end_Index = 0;
    int res = 0, cnt = -1;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' && cnt == -1)
        {
            //start_Index = i;
            cnt = 0;
            //break;
        }
        if (cnt != -1)
            cnt++;
        if (input[i] == 'Z')
            res = max(res, cnt);
    }
    /*for (int i = input.size(); i > 0; i--)
    {
        if (input[i] == 'Z')
        {
            end_Index = i;
            break;
        }
    }
    end_Index -= input.size() + 1;

    cout << (end_Index - start_Index) + 1;*/
    cout<<res;
    return 0;
}