
#include <iostream>
#include <limits>
using namespace std;
 
int main()
{
   int a = 0;
   int b = 20;
   int c ;
 
   if ( a && b )
   {
      cout << "Line 1 - 条件为真"<< endl ;
   }
   else
   {
       cout << "line 1 - condition is false"<<endl;
   }
   if ( a || b )
   {
      cout << "Line 2 - 条件为真"<< endl ;
   }
   /* 改变 a 和 b 的值 */
   a = 0;
   b = 10;
   if ( a && b )
   {
      cout << "Line 3 - 条件为真"<< endl ;
   }
   else
   {
      cout << "Line 4 - 条件不为真"<< endl ;
   }
   if ( !(a && b) )
   {
      cout << "Line 5 - 条件为真"<< endl ;
   }
   
   if ((a==0) || (b==20))
   {
       cout<<"the condition is satisified"<<endl;
   }
   if ((a==0) && (b==20))
   {
       cout<<"yes"<<endl;
   }
   if ((a!=0)&&(b!=0))
   {
       cout<<"yes again"<<endl;
   }
   c=a+b;
   cout<<"c is"<<c<<endl;
   c=a-b;
   cout<<"c is"<<c<<endl;
   c=a*b;
   cout<<"c is"<<c<<endl;
   c=a/b;
   cout<<"c is"<<c<<endl;
   c=a%b;
   cout<<"c is"<<c<<endl;

   a=60;
   b=13;
   c=a&b;
   cout<<"c is"<<c<<endl;
   c=a|b;
   cout<<"c is"<<c<<endl;
   c=a^b;
   cout<<"c is"<<c<<endl;
   c&=2;
   cout<<"c is"<<c<<endl;
   c|=2;
   cout<<"c is"<<c<<endl;
   c=10;
   cout<<"c is"<<sizeof(c)<<endl;
   long d1;
   d1=10;
   short d2;
   d2=10;
   int d3;
   d3=10;
   cout<<"d1 is:"<<sizeof(d1)<<endl;
   cout<<"d2 is:"<<sizeof(d2)<<endl;
   cout<<"d3 is:"<<sizeof(d3)<<endl;
   
   typedef int size_t1;
   size_t1 a2;
   a2=10;
   a=10;
   do
   {
       cout<<"zy is ok!"<<endl;
       a=a-1;
   }
   while(a>0);


    while(a<10)
    {
        cout<<"zy is not ok!"<<endl;
        a=a+1;
    }

    for (a=1;a<10;a=a+1)
    {
        cout<<"a is:"<<a<<endl;
    }
    while(1)
    {
        cout<<"a is:"<<a<<endl;
        a=a-1;
        if (a<0)
        {
            break;
        }
    }
    a=10;
    if (a>0)
    {
        cout<<"a is smaller than 0"<<endl;
    }
    else
    {
        cout<<"a is bigger thatn 0"<<endl;
    }
    if (a>10)
    {
        cout<<"yes"<<endl;
    }
    else if (a==10)
    {
        cout<<"no"<<endl;
    }
    else 
    {
        cout<<"half"<<endl;
    }
    int grade=90;
    switch(grade)
    {
    case 90: 
        cout<<"great"<<endl;
        break;
    case 80:
        cout<<"half half"<<endl;
        break;
    case 70:
        cout<<"sb"<<endl;
        break;
    default:
        cout<<"not good"<<endl;
        break;
    }
   return 0;
}


