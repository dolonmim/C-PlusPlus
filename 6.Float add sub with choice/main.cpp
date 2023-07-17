
#include <iostream>
using namespace std;
float floatadd(float a,float b);

float floatminus(float a,float b);




int main()
{
    float num1,num2;
char S,A,n;
cout<<"enter first num:"<<endl;
cin>>num1;
cout<<"enter second num:"<<endl;
cin>>num2;
cout<<"enter choice"<<endl;
cin>>n;
floatadd(num1,num2);
floatminus(num1,num2);
cin>>n;
if(n=='A')
    cout<<"Addition is "<<floatadd(num1,num2)<<endl;
else if (n=='S')
    cout<<"Subtraction is "<<floatminus(num1,num2)<<endl;
return 0;

}
float floatadd(float a,float b)
{
return a+b;
}
float floatminus(float a,float b)
{
return a-b;
}

