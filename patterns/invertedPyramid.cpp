#include<iostream>
using namespace std;

void invertedPyramid(int number)
{
    
      for(int i = 1 ; i <= number ; i++)
    {  for(int j = 1 ; j <= i ; j++)
        {
            cout<<" ";
        }
        for(int j = i ; j <= number ; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int number;
    cout<<"Enter numbers : ";
    cin>>number;

    invertedPyramid(number);
}