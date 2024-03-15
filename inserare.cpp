#include <iostream>
using namespace std;

int main()
{
    int a,c,d; cin>>a>>c>>d;
    int b[a];
    for(int i=0; i!=a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i!=a; i++)
    {
        if(i==d-1) cout<<c<<" ";
        cout<<b[i]<<" ";
    }
    return 0;

}
