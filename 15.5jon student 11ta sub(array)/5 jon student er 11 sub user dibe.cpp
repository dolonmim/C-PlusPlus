#include <iostream>

using namespace std;
float totalmarks(float[]);
int main()
{float marks[5][11]={0};
cout<<"enter marks of the student:"<<endl;
for(int i=0;i<5;i++)
{
    cout<<"enter marks obtain by the student"<<i+1<<endl;
    cout<<"bangla-1=";
    cin>>marks[i][0];
    cout<<"bangla-2=";
    cin>>marks[i][1];
    cout<<"english-1=";
    cin>>marks[i][2];
}

    return 0;
}
