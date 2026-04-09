#include<iostream>
using namespace std;

int arrowPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= number - i ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
 for(int i = 0 ; i <= number / 2 ; i++)
{
    for(int j = 1 ; j <= number - 1 ; j++)
    {
        cout << " ";
    }
    cout << "*" << endl;
}
    return 0;
}
int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    arrowPattern(number);
}