/* Program to find the greatest common divisor
of two nonnegative integer values */
#include <iostream>
using namespace std;
int main (void)
{
int u, v, temp;
cout<<"Please type in two nonnegative integers."<<endl;
cin>>u>>v;
while ( v != 0 ) {
temp = u % v;
u = v;
v = temp;
}
cout<<"Their greatest common divisor is "<< u;
return 0;
}
