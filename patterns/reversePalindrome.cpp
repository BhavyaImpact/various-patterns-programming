#include<iostream>
using namespace std;

int reversePalindromePattern(int number)
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
         for(int j = number - i ; j >= 1 ; j--)
        {
            cout<<j<<" ";
        }
        // for(int j = number - 1 ; j >= i ; j--)
        // {
        //     cout<<j<<" ";
        // }
        cout<<endl;
    }
    
    return 0;
} 
int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    reversePalindromePattern(number);
}