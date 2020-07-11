# include <iostream>
# include <limits>
using namespace std;
int main()
{
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl; 
    cout << (numeric_limits<int>::max)()<<endl;
    cout << (numeric_limits<int>::min)()<<endl;

    int x,y;
    y = 1;
    x = y;
    y = y+1;
    cout<<"y is:"<<y<<endl;
    cout<<"x is:"<<x<<endl;

    typedef int size_int;
    size_int eye;
    eye = 2;
    cout << "eye is:" << eye << endl;

    typedef float zy;
    zy jiba;
    jiba =13.01;
    cout << "jiba is: "<< jiba << endl;

    enum color { red, green=10, blue } s1,s2,s3;
    s1 = blue;
    cout<<"s1 is:"<< s1 << endl;
}