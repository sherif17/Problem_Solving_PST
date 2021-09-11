#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr_Bef[100], arr_Aft[100];
    bool isRated = 0, mayBe = 0;
    string answer = "";

    for (int i = 0; i < n; i++)
    {
        cin >> arr_Bef[i] >> arr_Aft[i];
        /*if (arr_Bef[i] != arr_Aft[i])
        {
            isRated = 1;
            answer = "rated";
            break;
        }*/
    }
      for (int i = 0; i < n; i++)
    {
        if (arr_Bef[i] != arr_Aft[i])
        {
            isRated = 1;
            answer = "rated";
            break;
        }
    }
    if (answer == "")
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if ((arr_Bef[i])> (arr_Bef[j]))
                        answer = "unrated"; //mfe4 t8yerr fl befor anf after w m7toten f tarteb sa7
                }
            }
        }
    if (answer == "")
                answer = "maybe";

    cout << answer;
    return 0;
}