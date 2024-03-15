#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0,d=0;
    cin>>a;
    for(; a!=0; a--)
    {
        cin>>b;
        if(b%2==0)
            c++;
        else
            d++;
    }
    cout <<abs(d-c);



    return 0;
}
