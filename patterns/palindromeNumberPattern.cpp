#include<iostream>
using namespace std;

int palindromeNumberPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<j<<" ";
        }
         for(int j = i - 1 ; j >= 1 ; j--)
        {
            cout<<j<<" ";
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

    palindromeNumberPattern(number);
}