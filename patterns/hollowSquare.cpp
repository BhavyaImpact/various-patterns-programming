#include<iostream>
using namespace std;

void hollowSquare(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= number ; j++)
        {
            if(i == 1 || i == number || j == 1 || j == number)
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
}
int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    hollowSquare(number);
}