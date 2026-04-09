#include<iostream>
using namespace std;

int hollowDiamond(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = i ; j < number ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            if(j == 1 || j == i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i = number ; i >= 1 ; i--)
    {
        for(int j = i ; j < number ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            if(j == 1 || j == i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
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

    hollowDiamond(number);
}