#include<iostream>
using namespace std;

int increasingTriangle(int number) 
{

    for(int i = 1 ; i <= number ; i++)
    {
        int num = 1;
        for(int j = i ; j >= 1 ; j--)
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

    increasingTriangle(number);
}