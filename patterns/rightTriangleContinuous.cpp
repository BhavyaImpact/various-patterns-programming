#include<iostream>
using namespace std;

int rightTriangleNumber(int number)
{
    int num = 1;

    for(int i = 0 ; i < number ; i++)
    {
        for(int j = 0 ; j < i+1 ; j++)
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
    cout<<"Enter the number : ";
    cin>>number;

    rightTriangleNumber(number);
}