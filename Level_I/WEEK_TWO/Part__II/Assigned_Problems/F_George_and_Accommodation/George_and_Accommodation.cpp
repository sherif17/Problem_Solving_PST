#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfRooms;
    cin>>numberOfRooms;
    int numberOfPepole,roomCapacity;
    int counter=0;
    
    for(int i=0; i<numberOfRooms;i++)
    {
        cin >>numberOfPepole>>roomCapacity;

        if(roomCapacity-numberOfPepole>=2)
            counter++;

    }
    cout<<counter;

    return 0;
}