#include <iostream>

using namespace std;

int main()
{
    float p,c,e,m,b,sum,per,pp,pc,pe,pm,pb;
    cout<<"Enter the number of Physics"<<endl;
    cin>>p;
    cout<<"Enter the number of Chemistry"<<endl;
    cin>>c;
    cout<<"Enter the number of English"<<endl;
    cin>>e;
    cout<<"Enter the number of math"<<endl;
    cin>>m;
    cout<<"Enter the number of biology"<<endl;
    cin>>b;
    sum=p+c+e+m+b;
    per=sum/500*100;
    pp=p/sum*100;
    pc=c/sum*100;
    pe=e/sum*100;
    pm=m/sum*100;
    pb=b/sum*100;
    cout<<"The percentage of Physics is="<<pp<<"%"<<endl;
    if(p>=95 && p<=100)
    {
        cout<<"Extra ordinary in physics."<<endl;
    }
    else if  (p>=80 && p<95)
    {
        cout<<"Distinction in physics."<<endl;
    }
    else if (p>=65 && p<80)
    {
        cout<<"First in physics. "<<endl;
    }
    else if (p>=55 && p<65)
    {
        cout<<"Second in physics. "<<endl;
    }
    else if(p>=40 && p<55)
    {
        cout<<"Pass & third division in physics."<<endl;
    }
    else if(p<40 && p>0)
    {
        cout<<"Fail in Physics"<<endl;
    }


    cout<<"The percentage of  Chemistry is="<<pc<<"%"<<endl;
    if(c>=95 && c<=100)
    {
        cout<<"Extra ordinary in Chemistry."<<endl;
    }
    else if  (c>=80 && c<95)
    {
        cout<<"Distinction in Chemistry."<<endl;
    }
    else if (c>=65 && c<80)
    {
        cout<<"First in Chemistry."<<endl;
    }
    else if (c>=55 && c<65)
    {
        cout<<"Second in Chemistry. "<<endl;
    }
    else if(c>=40 && c<55)
    {
        cout<<"Pass & third division in Chemistry."<<endl;
    }
    else if(c<40 && c>0)
    {
        cout<<"Fail in chemistry."<<endl;
    }


    cout<<"The percentage of English is="<<pe<<"%"<<endl;
    if(e>=95 && e<=100)
    {
        cout<<"Extra ordinary in English."<<endl;
    }
    else if  (e>=80 && e<95)
    {
        cout<<"Distinction in English."<<endl;
    }
    else if (e>=65 && e<80)
    {
        cout<<"First in English. "<<endl;
    }
    else if (e>=55 && e<65)
    {
        cout<<"Second in English. "<<endl;
    }
    else if(e>=40 && e<55)
    {
        cout<<"Pass & third division in English."<<endl;
    }
    else if(e<40 && e>0)
    {
        cout<<"Fail in English."<<endl;
    }



    cout<<"The percentage of Math is="<<pm<<"%"<<endl;
    if(m>=95 && m<=100)
    {
        cout<<"Extra ordinary in  Math."<<endl;
    }
    else if  (m>=80 && m<95)
    {
        cout<<"Distinction in  Math."<<endl;
    }
    else if (m>=65 && m<80)
    {
        cout<<"First in Math. "<<endl;
    }
    else if (m>=55 && m<65)
    {
        cout<<"Second in  Math. "<<endl;
    }
    else if(m>=40 && m<55)
    {
        cout<<"Pass & third division in  Math."<<endl;
    }
    else if(m<40 && m>0)
    {
        cout<<"Fail in  Math."<<endl;
    }


    cout<<"The total percentage is="<<per<<"%"<<endl;
    cout<<"The total marks is="<<sum<<endl;


    if(per>=95 && per<=100)
    {
        cout<<"You get  extra ordinary"<<endl;
    }
    else if  (per>=80 && per<95)
    {
        cout<<"You get  Distinction"<<endl;
    }
    else if (per>=65 && per<80)
    {
        cout<<"You get  First "<<endl;
    }
    else if (per>=55 && per<65)
    {
        cout<<"You get second  "<<endl;
    }
    else if(per>=40 && per<55)
    {
        cout<<"You get  pass & third division "<<endl;
    }
    else if(per<40 && per>0)
    {
        cout<<"You get fail"<<endl;
    }
    return 0;
}
