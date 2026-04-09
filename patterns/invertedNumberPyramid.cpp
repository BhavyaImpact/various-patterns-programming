#include<iostream>
using namespace std;

int invertedNumberPyramid(int number)
{
    for(int i = 1 ; i <= number ; i++)
     {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<" ";
        }

        int num = 1;
        for(int j = i ; j <= number ; j++)
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
    cout<<"Enter number : ";
    cin>>number;

    invertedNumberPyramid(number);
}