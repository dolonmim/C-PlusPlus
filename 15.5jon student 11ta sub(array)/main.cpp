#include <iostream>
using namespace std;

struct student
{
    char name[5];

    float marks;
} s[5];

int main()
{
    cout << "Enter information of students: " << endl;


    for(int i = 0; i < 5; ++i)
    {

        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;


    for(int i = 0; i < 5; ++i)
    {

        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}

