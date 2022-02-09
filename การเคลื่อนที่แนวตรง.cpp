#include<iostream>
#include<cmath>
using namespace std;

double a;
double s;
double u;
double t;
double v;

void findV();
void findS();
void findS1();
void findS2();
void findV2();
void findSS();

int main(){

    cout << "find v(speed) press 1" << '\n';
    cout << "find s(don't have a) press 2" << '\n';
    cout << "find s(displacement in case there is u) press 3" << '\n';
    cout << "find s(displacement in case there is v) press 4" << '\n';
    cout << "find v(square) press 5" << '\n';
    cout << "find s(if a = 0) press 6" << '\n';
    int x;
    cout << "please select number ";
    cin >> x;
    if(x == 1){
        findV();
    }
    else if(x == 2){
        findS();
    }
    else if(x == 3){
        findS1();
    }
    else if(x == 4){
        findS2();
    }
    if(x == 5){
        findV2();
    }
    else if(x == 6){
        findSS();
    }

    return 0;
}

void findV(){
    cout << "find v(speed)" << '\n';
    cout << "u = "; cin >> u; 
    cout << "a = "; cin >> a;
    cout << "t = "; cin >> t;
    cout << u + a*t;
}

void findS(){
    cout << "find s(don't have a)" << '\n';
    cout << "u = " ; cin >> u;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << (u+v)/2 * t;
}

void findS1(){
    cout << "find s(displacement in case there is u)" << '\n';
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << u*t + 0.5*a*pow(t,2);
}

void findS2(){
    cout << "find s(displacement in case there is v)" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << v*t - 0.5*a*pow(t,2);
}

void findV2(){
    cout << "find v(square)" << '\n';
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "s = " ; cin >> s;
    cout << pow(u,2) + 2*a*s;
}

void findSS(){
    cout << "find s(if a = 0)" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << v*t;
}