#include<iostream>
using namespace std;

int invertedNumberTriangle(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
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

    invertedNumberTriangle(number);
}