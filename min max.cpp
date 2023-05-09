#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 10, 3, 7, 1, 8};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int m,n ;
	cout<<"enter the mth max term ";
	cin>>m; 
	cout<<"enter the nth min term ";
	cin>>n;
    sort(arr, arr + array_size);
    cout << "The " << n << "th minimum term is: " << arr[n-1] << endl;
    cout << "The " << m << "th maximum term is: " << arr[array_size - m] << endl;

    return 0;
}