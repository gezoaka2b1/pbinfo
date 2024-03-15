#include <iostream>
using namespace std;

int main()
{
    int a,c=0; cin>>a;
    double sum;
    int b[a];
    for(int i=0; i!=a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i!=a; i++)
    {
        if(b[i]%2==0)
        {
            sum+=b[i]; c++;
        }
    }
    cout<<sum/c;

}
