#include <iostream>

using namespace std;

int main() {

    const float pi = 3.14315926536;
    float r;
    float area;
    int h=15;

//วงกลม
    cout << "Please enter radius : ";
    cin >> r;
    area = pi*r*r;
    cout << "Area of Circle :" << area << endl;
//เส้นรอย
    cout << "Formula for circular circumference"<< endl;
    cout << "Area of Circle : " << 2*pi*r<< endl;
//ทรงกระบอก
    cout << "15 high cylinder formula"<< endl;
    cout << "Area of Circle :" << pi*(r*r)*h<< endl;








  return 0;
}
