#include<iostream>
using namespace std;

int butterflyPattern(int number)
{
    for(int i = 0 ; i < number ;i++)
    {
        for(int j = 0 ; j < i+1 ; j++)
        {
            cout<<"*";
        }
        for(int j = 0 ; j < number - i ; j++)
        {
            cout<<"  ";
        }
        for(int j = 0 ; j < i+1 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        for(int i = 0 ; i < number ;i++)
        {
        for(int j = 0 ; j < number - i ; j++)
        {
            cout<<"*";
        }
        for(int j = 0 ; j < i + 1 ; j++)
        {
            cout<<"  ";
        }
        for(int j = 0; j < number - i ; j++)
        {
            cout<<"*";
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

    butterflyPattern(number);
}