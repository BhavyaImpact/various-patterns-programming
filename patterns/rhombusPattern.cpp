#include<iostream>
using namespace std;

int rhombusPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= number ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    rhombusPattern(number);
}