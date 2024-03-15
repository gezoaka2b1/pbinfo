
#include <fstream>
using namespace std;
ifstream cin("concurs.in");
ofstream cout("concurs.out");
int main()
{
    int a,b,c,e=0,max=-1,f=0;
    long long d;
    cin>>a;
    cin>>b;
    if(a==1)
    {
        for(; b!=0; b--)
        {
            cin>>c>>d;
            while(d!=0)
            {
                if(d%100==10)
                {
                    e+=10;
                    d/=100;
                }
                else
                {
                    e+=d%10;
                    d/=10;
                }
            }
            if(e>max)
            {
                max=e;
                f=1;
            }
            else if(max==e)
                f++;
            e=0;
        }
        cout<<max<<" "<<f;
    }
    int e1=0,e2=0,e3=0;
    if(a==2)
    {
        for(; b!=0; b--)
        {
            cin>>c>>d;
            while(d!=0)
            {
                if(d%100==10)
                {
                    e+=10;
                    d/=100;
                }
                else
                {
                    e+=d%10;
                    d/=10;
                }
            }
            if(c==1)
            {
                e1+=e;
            }
            else if(c==2)
            {
                e2+=e;
            }
            else if(c==3)
            {
                e3+=e;
            }
            e=0;
        }
         if(e1==e2 && e2==e3 && e1==0) 
             cout<<"FARA CAMPION";
        else
        {
            if(e1>max)
                max=e1;
            if(e2>max)
                max=e2;
            if(e3>max)
                max=e3;
            
            if(e1==max)
                cout<<1<<" ";
            if(e2==max)
                cout<<2<<" ";
            if(e3==max)
                cout<<3<<" ";
            cout<<max;
        }
        
    }
    return 0;
}
