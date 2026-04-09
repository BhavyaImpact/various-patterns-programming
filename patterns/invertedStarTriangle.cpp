#include<iostream>
using namespace std;

void invertedTriangle(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = i ; j <= number ; j++)
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

    invertedTriangle(number);
}