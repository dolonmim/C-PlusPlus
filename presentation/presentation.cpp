#include <iostream>

using namespace std;
float circle(float a)
{
    return 3.1416*(a*a);
}
float rectangle(float a, float b)
{
    return a*b;
}
float triangle(float a, float b)
{
    return (a*b)/2;
}
float square(float a, float b)
{
    return a*a;
}

int main()
{
    float a,b,option;
    cout<<"                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;

    cout<<"                   @   prase 1 to Find the Areas of circle .     @"<<endl;

    cout<<"                   @   prase 2 to Find the Areas of rectangle .  @"<<endl;

    cout<<"                   @   prase 3 to Find the Areas of triangle .   @"<<endl;

    cout<<"                   @   prase 4 to Find the Areas of square .     @"<<endl;

    cout<<"                   @   prase 0 to exit .                         @"<<endl;

    cout<<"                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;




    cout<<"                                                                   "<<endl;

    while(option!=0)
    {


        cout<<"                            PRASE YOUR CHOICE = ";


        cin>>option;

        if(option==1)
        {
            cout<<"enter radius = ";
            cin>>a;
            cout<<"Areas of circle = "<<circle(a)<<endl;

        }
        else if(option==2)
        {
            cout<<"enter Width = ";
            cin>>a;
            cout<<"enter Length = ";
            cin>>b;
            cout<<"Area of rectangle = "<<rectangle(a,b)<<endl;
        }
        else if(option==3)
        {
            cout<<"enter Height = ";
            cin>>a;
            cout<<"enter Base = ";
            cin>>b;
            cout<<"Area of triangle = "<<triangle(a,b)<<endl;
        }
        else if(option==4)
        {
            cout<<"enter Side = ";
            cin>>a;
            cout<<"Area of square = "<<square(a,b)<<endl;
        }
        else if(option==0)
        {
            cout<<"                                                    "<<endl;
            cout<<"                          THANK   YOU   FOR   USING "<<endl;
                 }
        else
        {
            cout<<"NO OPTION  AVAILABLE "<<endl;
        }
    }

    return 0;
}
