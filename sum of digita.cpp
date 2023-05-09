#include <iostream>

using namespace std;

int main()
{
    int num ;
    cout<<"enter a number :";
    cin>>num
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    cout << "The sum of digits is: " << sum << endl;

    return 0;
}