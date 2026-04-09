#include<iostream>
using namespace std;

int zigzagPattern(int number)
{
    int num = 1;
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;

    zigzagPattern(number);
}