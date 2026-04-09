#include<iostream>
using namespace std;

int binaryNumberPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        int value;

        if(i % 2 == 0)
            value = 0;
        else
            value = 1;

        for(int j = 1 ; j <= i ; j++)
        {
            cout << value << " ";
            value = 1 - value; 
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

    binaryNumberPattern(number);
}