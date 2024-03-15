#include <iostream>
using namespace std;


int main()
{
    int a,b,c,d;
    cin>>a>>b;
    if(b==2)
    {
        d=a%100;
        if(d<50)
            cout<<a-d;
        else
        {
            cout<<(a-d)+100;
        }
    }
    else if(b==1)
    {
        d=a%10;
        if(d<5)
            cout<<a-d;
        else
            cout<<a-d+10;
    }
    return 0;
}
