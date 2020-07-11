#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int sum(int a, int b);
int main()
{
    cout<<"hello world"<<endl;
    int a,b,c;
    a=-1;
    b=2;
    c=sum(a,b);
    cout<<"c is: "<<c<<endl;
    cout<<sin(a)<<endl;
    cout<<abs(a)<<endl;
    float d=200.09;
    cout<<floor(d)<<endl;
    short c1=9;
    cout<<pow(c1,2)<<endl;
    a=-1;
    cout<<sin(a)<<" "<<cos(a)<<" "<<tan(a)<<" "<<floor(a)<<" "<<ceil(a)<<endl;
    
       int i,j;
 
   srand((unsigned)time(NULL));
   for( i = 0; i < 10; i++ )
    {
      j= rand();
      cout <<"随机数： " << j << endl;
    }
 
 
    return 0;
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}