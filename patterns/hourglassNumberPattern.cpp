#include<iostream>
using namespace std;

int hourglassNumberPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {  for(int j = 1 ; j < i ; j++)
        {
            cout<<" ";
        }
        for(int j = i ; j <= number ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
   
    for(int i = number - 1 ; i >= 1 ; i--)
    {
        for(int j = 1 ; j < i ; j++)
        {
            cout << " ";
        }
        for(int j = i ; j <= number ; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    hourglassNumberPattern(number);
}