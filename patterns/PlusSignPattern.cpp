#include<iostream>
using namespace std;

int plusSignPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= number ; j++)
        {
            if( i == number/2 + 1 || j == number/2 + 1)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
        }
        cout<<"\n";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    plusSignPattern(number);
}
