#include<iostream>
using namespace std;

int hollowRhombusPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= number ; j++)
        {
            if(i == 1 || i == number || j == 1 || j == number)
            {
                cout<<"*"<<" ";
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

    hollowRhombusPattern(number);
}