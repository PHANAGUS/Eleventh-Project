#include <cmath>
#include<iostream>
using namespace std;

double s;double a;double t;double u;double v;double g;double radius;
    void func1();
    void func2();
    void func3();
int main(){
    cout << "find t(time) press 1" << "\n" << "find Sy max press 2" << "\n" << "find Sx press 3" << "\n";
    int x;
    cout << "please select number ";
    cin >> x;
    if(x==1){
    func1();
    }
    else if(x==2){
        func2();
    }
    else if(x==3){
        func3();
    }

}
void func1(){
    cout << "find t(time)" << endl;
    cout << "u = "; cin >> u; 
    cout << "g = "; cin >> g;
    cout << "radius = ";cin >> radius;
    cout << (2*u*sin(radius))/g;
}

void func2(){
    cout << "find Sy max" << endl;
    cout << "u = "; cin >> u; 
    cout << "g = "; cin >> g;
    cout << "radius = ";cin >> radius;
    cout << ((u*u)*pow(sin(radius),2))/(2*g);
}

void func3(){
    cout << "find Sx" << endl;
    cout << "u = "; cin >> u; 
    cout << "g = "; cin >> g;
    cout << "radius = ";cin >> radius;
    cout << (u*u*sin(2*radius))/g;
}
