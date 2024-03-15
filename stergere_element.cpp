#include <iostream>

using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    int c[a];
    for(int i=0; i<a; i++)
    {
        cin>>c[i];
        if(i!=b-1) cout<<c[i]<<" ";
    }

    return 0;
}
