#include<iostream>
using namespace std;

int hollowNumberPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        int num = 1;
        for(int j = 1 ; j <= number ; j++)
        {
            if(i == 1 || i == number || j == 1 || j == number)
            {
                cout<<num<<" ";
            }
            else{
                cout<<"  ";
            }
            num++;
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

    hollowNumberPattern(number);
}