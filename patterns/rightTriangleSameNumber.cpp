#include<iostream> 
using namespace std;

int sameNumberTriangle(int number)
{
    int num = 1;

    for(int i = 0 ; i < number ; i++)
    {
        for(int j = 0 ; j < i + 1 ; j++)
        {
            cout<<num<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}

//second way 
/*for(int i = 1 ; i <= number ; i++)
{
    for(int j = 1 ; j <= i ; j++)
    {
        cout << i << " ";
    }
    cout << endl;
}*/

int main()
{
    int number;
    cout<<"Enter number :";
    cin>>number;

    sameNumberTriangle(number);
}