#include<iostream>
using namespace std;

void hollowPyramid(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = i ; j < number ; j++)
        {
            cout << " ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            if(j == 1 || j == i || i == number)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int number;
    cout<<"Enter the number :";
    cin>>number;

    hollowPyramid(number);
}