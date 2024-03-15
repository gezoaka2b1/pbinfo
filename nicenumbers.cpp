#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    int c=0;
    for(; a!=0; a--)
    {
        cin>>b;
        while(b!=0)
        {
            if(b%100==69)
            {
                c++;
                break;
            }
            b/=10;
        }
    }
    cout<<c;

}
