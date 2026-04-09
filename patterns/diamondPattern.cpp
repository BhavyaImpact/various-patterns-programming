#include<iostream>
using namespace std;

void diamondPattern(int number)
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
    for(int i = 1 ; i <= number ; i++)
    {
    for(int j = 0 ; j < i ; j++)
        {
            cout<<" ";
        }
        for(int j = i ; j < number ; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;

    diamondPattern(number);

}