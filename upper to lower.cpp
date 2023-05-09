#include <iostream>
#include <string>
using namespace std;
string toUpperCase(string str) 
{
for (int i = 0; i < str.length(); i++) 
{
if (str[i] >= 'a' && str[i] <= 'z') 
{
str[i] -= ('a' - 'A');
}
}
return str;
}
string toLowerCase(string str) 
{
for (int i = 0; i < str.length(); i++) 
{
if (str[i] >= 'A' && str[i] <= 'Z') 
{
str[i] += ('a' - 'A');
}
}
return str;
}
int main() 
{
string input;
cout << "Enter a string: ";
getline(cin, input);
string upperCase = toUpperCase(input);
string lowerCase = toLowerCase(input);
cout << "Upper case: " << upperCase << endl;
cout << "Lower case: " << lowerCase << endl;
int i;
cout<<"Reverse: ";
for(i=input.length()-1;i>=0;i--)
{
	cout<<input[i];
}
return 0;
}