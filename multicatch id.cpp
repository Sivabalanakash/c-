#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        int x;
        cin>>x;
        if(x<1) 
		{
            throw "Accept only positive integer";
        }
        if (x<0.0001) {
            throw 0.0001;
        }
        cout<<"The number is: " << x << endl;
} 
catch (const char*msg) {
cerr<<msg<<endl;
} 
catch (const double d) {
cerr << "The number is too small: " << d << endl;
} 
catch (...) {
cerr << "Unknown exception caught." << endl;
    }
    return 0;
}