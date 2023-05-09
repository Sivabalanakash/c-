#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    int result;
	cout<<"enter the first number :";
	cin>>n1;
	cout<<"enter the second number :";
	cin>>n2;
    try
    {
        if (n2 == 0)
        {
            throw "Division by zero error!";
        }
        result = n1 / n2;
        cout << "The result of division is: " << result << endl;
    }
    catch (const char* error)
    {
        cerr << "Error: " << error << endl;
    }
    return 0;
}