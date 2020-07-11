#include <iostream>
using namespace std;
// int list_average_computation(int list1[]);
int main()
{
    // string student[] = {"a","b","c"}
    // string course_name[] = {"math","english"}
    // row=3;
    // colown=2;
    // for (int i==0;i<row;i++)
    // {
    //     for (int j==0;j<colown;j++)
    //     {
            
    //     }
    // }
    const int N=7;
    int list1[]={8,4,2,1,23,344,12};
    // while(1)
    // {
    //     for(int i=0;i<N;i++)
    //     {
    //         cout<<list1[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    int min_element,max_element,min_index,max_index;
    int odd_num=0;
    int even_num=0;
    int target_num=2;
    int index[]={0,0,0,0,0,0,0};
    min_element=list1[0];
    max_element=list1[0];
    for (int i=0;i<N;i++)
    {
        if (list1[i]<min_element)
        {
            min_index=i;
            min_element=list1[i];
        }
        if (list1[i]>max_element)
        {
            max_index=i;
            max_element=list1[i];
        }
        if (list1[i]%2==0)
        {
            odd_num+=1;
        }
        else
        {
            even_num+=1;
        }
        if (list1[i]==target_num)
        {
            index[i]=target_num;
        }
        else
        {
            index[i]=-1;
        }
    }
    min_element=list1[min_index];
    max_element=list1[max_index];
    cout<<"min element is "<<min_element<<endl;
    cout<<"max element is "<<max_element<<endl;
    cout<<"the odd number is: "<<odd_num<<endl;
    cout<<"the even number is: "<<even_num<<endl;
    for (int i=0;i<N;i++)
    {
        cout<<"the index list is: "<<index[i]<<endl;
    }

    
    // int aver;
    // aver=list_average_computation(list1);
    // cout<<"the average is:"<<aver<<endl;
}
// int list_average_computation(int list1)
// {
//     int list_length;
//     list_length = sizeof(list1)/sizeof(int);
//     int sum;
//     float aver;
//     for (int i=0;i<list_length;i++)
//     {
//         sum+=list1[i];
//     }
//     aver=sum/list_length;
//     return aver;
// }

