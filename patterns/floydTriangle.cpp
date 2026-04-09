#include<iostream>
using namespace std;

int floydTriangle(int number)
{
    int num = 1;
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;

    floydTriangle(number);
}