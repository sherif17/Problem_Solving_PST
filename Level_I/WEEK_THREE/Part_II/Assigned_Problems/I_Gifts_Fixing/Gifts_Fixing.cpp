#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, arr_cand[55], arr_org[55], min_cand = INT_MAX, min_org = INT_MAX, counter = 0;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> arr_cand[i];
            if (arr_cand[i] < min_cand)
                min_cand = arr_cand[i];
        }

        for (int i = 0; i < x; i++)
        {
            cin >> arr_org[i];
            if (arr_org[i] < min_org)
                min_org = arr_org[i];
        }

        for (int i = 0; i < x; i++)
        {
            //while (arr_cand[i] > min_cand || arr_org[i] > min_org){

            if (arr_cand[i] > min_cand && arr_org[i] > min_org)
            {
                if ((arr_cand[i] - min_cand) > (arr_org[i] - min_org))
                {
                    counter += arr_cand[i] - min_cand;
                }
                else
                {
                    counter += arr_org[i] - min_org;
                }
                //arr_cand[i]--;
                //arr_org[i]--;
                //counter+=arr_cand[i]-min_cand;
                //counter+=arr_org[i]-min_org;
            }
            else if (arr_cand[i] > min_cand)
            {
                //arr_cand[i]--;
                counter += arr_cand[i] - min_cand;
            }
            else if (arr_org[i] > min_org)
            {
                //arr_org[i]--;
                counter += arr_org[i] - min_org;
            }
            //}
        }
        cout << counter << endl;
    }

    return 0;
}