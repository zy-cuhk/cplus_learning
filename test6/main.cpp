#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main ()
{
   int n[ 10 ]; 
   for ( int i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; 
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;            
   for ( int j = 0; j < 10; j++ )
   {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
   int a[3]={1,2,3};
   cout<<"a is:"<<a[0]<<endl;

   int a1[5][2]={{0,0},{1,1},{2,2},{3,3},{4,4}};
   for (int i=0;i<5;i=i+1)
   {
       for (int j=0;j<2;j=j+1)
       {
           cout<<"the element is"<<a1[i][j]<<endl;
       }
   }
 
   return 0;
}
