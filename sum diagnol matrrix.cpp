#include <iostream>
using namespace std;
int main()
{
   int n, sum = 0;
   cout << "Enter the size of the matrix: ";
   cin >> n;
   int a[n][n];
   cout << "Enter the matrix elements:\n";
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         cin>>a[i][j];
      }
   }
   for(int i=0;i<n;i++)
   {
      sum+=a[i][i];
   }
   cout<<"The sum of diagonal elements is "<< sum << endl;
   return 0;
}