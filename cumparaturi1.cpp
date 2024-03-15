#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a%b==0 && a%c==0)
    {
        cout<<"CN";
    }
    else if(a%c==0)
        cout<<"N";
    else if(a%b==0)
        cout<<"C";
    else
    {
        cout<<"nimic";
    }
}
