#include <fstream>
using namespace std;
ifstream cin("9lan.in");
ofstream cout("9lan.out");
int main()
{
    int n;
    cin>>n;
    if (n%2==1)
    {
        cout<<"9";
    }
    else if(n%2==0)
    {
        cout<<"1";
    }
    return 0;
}
