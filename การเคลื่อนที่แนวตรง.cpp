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
void findt0();
void finda();

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

void findV1(){ //ไม่มีsหาv
    cout << "v = u+at" << '\n';
    cout << "u = " ; cin >> u; 
    cout << "a = " ; cin >> a;
    cout << "t = " ; cin >> t;
    cout << "v = " << u + a*t;
}

void findU(){ //ไม่มีsหาu
    cout << "v = u+at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "t = " ; cin >> t;
    cout << "u = " << v - a*t;
}

void findt0(){ //ไม่มีsหาt
    cout << "v = u+at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "t = " << (v-u)/a;
}

void finda(){ //ไม่มีsหาa
    cout << "v = u+at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " << (v-u)/t;
}

void findS(){ //ไม่มีaหาs
    cout << "s = ((u+v)/2)*t" << '\n';
    cout << "u = " ; cin >> u;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "s = " << (u+v)/2 * t;
}

void findS0(){ //ไม่มีaหาt
    cout << "s = ((u+v)/2)*t" << '\n';
    cout << "u = " ; cin >> u;
    cout << "v = " ; cin >> v;
    cout << "s = " ; cin >> s;
    cout << "t = " << s/((u+v)/2);
}

void findS00(){ //ไม่มีaหาu
    cout << "s = ((u+v)/2)*t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "u = " << ((2*s)-v)/t;
}

void findS000(){ //ไม่มีaหาv
    cout << "s = ((u+v)/2)*t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "v = " << ((2*s)-u)/t;
}

void findS1(){ //ไม่มีvหาs
    cout << "s = (u*t)+(1/2)*a*t^2" << '\n';
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "s = " << u*t + 0.5*a*pow(t,2);
}

void findS11(){ //ไม่มีvหาu
    cout << "s = (u*t)+(1/2)*a*t^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "u = " << (s-0.5)/a*pow(t,3);
}

void find111(){ //ไม่มีvหาa
    cout << "s = (u*t)+(1/2)*a*t^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " << (s-(u*t)-(0.5))/pow(t,2);
}

void find1111(){ //ไม่มีvหาt
    cout << "s = (u*t)+(1/2)*a*t^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "t = " << (s-0.5)/u*a;
}

void findS2(){ //ไม่มีuหาs
    cout << "s = (v*t)-(1/2)*a*t^2" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "s = " << v*t - 0.5*a*pow(t,2);
}

void findS22(){ //ไม่มีuหาv
    cout << "s = (v*t)-(1/2)*a*t^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "v = " << (s+0.5)/a*pow(t,3);
}

void findS222(){ //ไม่มีuหาa
    cout << "s = (v*t)-(1/2)*a*t^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "a = " << (s-(v*t)+(0.5))/pow(t,2);
}


void findS2222(){ //ไม่มีuหาt
    cout << "s = (v*t)-(1/2)*a*t^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "t = " << (s+0.5)/v*a;
}

void findV2(){ //ไม่มีtหาv^2
    cout << "v^2 = u^2+2*a*s" << '\n';
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "s = " ; cin >> s;
    cout << "v^2 = " << pow(u,2) + 2*a*s;
}

void findV22(){ //ไม่มีtหาu^2
    cout << "v^2 = u^2+2*a*s" << '\n';
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "s = " ; cin >> s;
    cout << "u^2 = " << (pow(v,2)-2)/a*s;
}

void findV222(){ //ไม่มีtหาa
    cout << "v^2 = u^2+2*a*s" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "s = " ; cin >> s;
    cout << "a = " << (pow(v,2)-pow(u,2)-2)/s;
}

void findV2222(){ //ไม่มีtหาs
    cout << "v^2 = u^2+2*a*s" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "s = " << (pow(v,2)-pow(u,2)-2)/a;
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

