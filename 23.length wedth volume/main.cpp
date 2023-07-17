#include <iostream>
using namespace std;
class Box {
public:
double length;
void setWidth(double w);
{
width = w;
}
double getWidth( void );
{
return width ;
}
private:
double width;
};
int main( ) {
Box box1;
// set box1 length without member function
box1.length = 10.0; // OK: because length is public
cout << "Length of box1 : " << box1.length <<endl;
// set box1 width without member function
box1.width = 10.0;
box1.setWidth(10.0); // Use member function to set
cout << "Width of box : " << box1.getWidth() <<endl;
}
