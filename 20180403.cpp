#include<iostream>
using namespace std;
class circle
{
    public:
	double r;
	double pi=3.1415926;
	double area;
    public:
	int set_r(double input_r)
     	{
		r=input_r;
		return 0;
	}
    public:
	int calculate_area()
        {
		area=pi*r*r;
		return 0;
        }
};

int main()
{
    circle c1;
    double r;
    cout << "please input your r:" << endl;
    cin >> r;
    c1.set_r(r);
    c1.calculate_area();
    cout << "area counting outcome is:" << endl;
    cout << c1.area << endl;
    
    return 0; 
}
