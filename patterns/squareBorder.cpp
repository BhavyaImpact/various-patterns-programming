#include<iostream>
using namespace std;

int squareBorderPattern(int number)
{
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= number ; j++)
        {
            int top = i;
            int left = j;
            int bottom = number - i + 1;
            int right = number - j + 1;

            int value = top;

            if(left < value)
                value = left;

            if(bottom < value)
                value = bottom;

            if(right < value)
                value = right;

            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    squareBorderPattern(number);
}