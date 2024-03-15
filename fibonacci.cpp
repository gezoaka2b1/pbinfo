#include <iostream>

using namespace std;

int main()
{
    int nr1=1,nr2=1,nr3=1,n,i;
    cin>>n;
    if(n==1)
        cout<<"1";
    else
        cout<<"1 1 ";
    for(i=3; i<=n; i++)
    {
        nr3=nr2+nr1;
        nr1=nr2;
        nr2=nr3;
        cout<<nr3<<" ";
    }

    return 0;
}
