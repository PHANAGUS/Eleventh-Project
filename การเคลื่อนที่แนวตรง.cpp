#include<iostream>
#include<cmath>
using namespace std;

double a;
double s;
double u;
double t;
double v;

void findV1();
void findU();
void findS();
void findS1();
void findS2();
void findV2();
void findSS();
void findA();
void findA1();
void findV0();

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
        findV1();
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

void findV1(){ //ไม่มีs
    cout << "v = u+at" << '\n';
    cout << "u = " ; cin >> u; 
    cout << "a = " ; cin >> a;
    cout << "t = " ; cin >> t;
    cout << "v = " << u + a*t;
}

void findU(){ //ไม่มีs
    cout << "u = v-at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "t = " ; cin >> t;
    cout << "u = " << v - a*t;
}

void findS(){ //ไม่มีa
    cout << "s = ((u+v)/2)*t" << '\n';
    cout << "u = " ; cin >> u;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "s = " << (u+v)/2 * t;
}

void findS1(){ //ไม่มีv
    cout << "s = (u*t)+(1/2)*a*t^2" << '\n';
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "s = " << u*t + 0.5*a*pow(t,2);
}

void findS2(){ //ไม่มีu
    cout << "s = (v*t)-(1/2)*a*t^2" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "s = " << v*t - 0.5*a*pow(t,2);
}

void findV2(){ //ไม่มีt
    cout << "v^2 = u^2+2*a*s" << '\n';
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "s = " ; cin >> s;
    cout << "v^2 = " << pow(u,2) + 2*a*s;
}

void findSS(){ //ระยะทาง
    cout << "s = v*t" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "s = " << v*t;
}

void findA(){ //ความเร่ง
    cout << "a = (v-u)/t" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " << (v-u)/t;
}

void findA1(){ // อัตราเร่ง
    cout << "a = s/t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "a = " << s/t;
}

void findV0(){ //ไม่มีความเร่ง,ความเร็วคงที่
    cout << "v = s/t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "v = " << s/t;
}

void findt(){ //หาเวลาในการเคลื่อนที่
    cout << "t = s/v" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "t = " << s/v;
}

