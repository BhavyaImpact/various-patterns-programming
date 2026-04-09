#include<iostream>
using namespace std;

void pyramidTriangle(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= number - i ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int number;
    cout<<"Enter number of rows :";
    cin>>number;

    pyramidTriangle(number);
}