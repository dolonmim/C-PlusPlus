#include <iostream>
using namespace std;

int main()
{
    int numbers[10], sum = 0;
    cout << "Enter 10 numbers: ";

    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i < 10; ++i)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
