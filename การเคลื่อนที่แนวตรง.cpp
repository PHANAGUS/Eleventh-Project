#include<iostream>
#include<cmath>
using namespace std;

double a;
double s;
double u;
double t;
double v;
int b;

void find1v();
void find1u();
void find1t();
void find1a();
void find2s();
void find2t();
void find2u();
void find2v();
void find3s();
void find3u();
void find3a();
void find3t();
void find4s();
void find4v();
void find4a();
void find4t();
void find5v();
void find5u();
void find5a();
void find5s();
void finds();
void finda();
void findaa();
void findv();
void findt();

void find1v(){ //ไม่มีsหาv //1 
    cout << "v = u+at" << '\n';
    cout << "u = " ; cin >> u; 
    cout << "a = " ; cin >> a;
    cout << "t = " ; cin >> t;
    cout << "v = " << u + a*t;
}

void find1u(){ //ไม่มีsหาu //2 
    cout << "v = u+at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "t = " ; cin >> t;
    cout << "u = " << v - a*t;
}

void find1t(){ //ไม่มีsหาt //3
    cout << "v = u+at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "t = " << (v-u)/a;
}

void find1a(){ //ไม่มีsหาa //4
    cout << "v = u+at" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " << (v-u)/t;
}

void find2s(){ //ไม่มีaหาs //5
    cout << "s = ((u+v)/2)t" << '\n';
    cout << "u = " ; cin >> u;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "s = " << ((u+v)/2)*t;
}

void find2t(){ //ไม่มีaหาt //6
    cout << "s = ((u+v)/2)t" << '\n';
    cout << "u = " ; cin >> u;
    cout << "v = " ; cin >> v;
    cout << "s = " ; cin >> s;
    cout << "t = " << ((2*s)/(u+v));
}

void find2u(){ //ไม่มีaหาu //7
    cout << "s = ((u+v)/2)t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "u = " << ((2*s/t)-v);
}

void find2v(){ //ไม่มีaหาv //8
    cout << "s = ((u+v)/2)t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "v = " << ((2*s)/t)-u;
}

void find3s(){ //ไม่มีvหาs //9
    cout << "s = (ut)+(1/2)at^2" << '\n';
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "s = " << (u*t)+(0.5*a*pow(t,2));
}

void find3u(){ //ไม่มีvหาu //10
    cout << "s = (ut)+(1/2)at^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "u = " << (s-((0.5)*a*t*t))/t;
}

void find3a(){ //ไม่มีvหาa //11
    cout << "s = (ut)+(1/2)at^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " << (s-(u*t)-(0.5))/pow(t,2);
}

void find3t(){ //ไม่มีvหาt //12
    cout << "s = (ut)+(1/2)at^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "t = " << ((-u+sqrt((u*u)+(s*a*s)))/a) << " and " << ((-u-sqrt((u*u)+(s*a*s)))/a);
}

void find4s(){ //ไม่มีuหาs //13
    cout << "s = (vt)-(1/2)at^2" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "s = " << (v*t)-(0.5*a*pow(t,2));
}

void find4v(){ //ไม่มีuหาv //14
    cout << "s = (vt)-(1/2)at^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "a = " ; cin >> a;
    cout << "v = " << (s-((1/2)*a*t*t))/t;
}

void find4a(){ //ไม่มีuหาa //15
    cout << "s = (vt)-(1/2)at^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "a = " << (s-(v*t)+(0.5))/pow(t,2);
}


void find4t(){ //ไม่มีuหาt //16
    cout << "s = (vt)-(1/2)at^2" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "t = " << ((v+sqrt((v*v)+(s*a*s)))/a) << " and " << ((v-sqrt((v*v)+(s*a*s)))/a);
}

void find5v(){ //ไม่มีtหาv^2 //17
    cout << "v^2 = u^2+2as" << '\n';
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "s = " ; cin >> s;
    cout << "v = " << sqrt((u*u)+(2*a*s));
}

void find5u(){ //ไม่มีtหาu^2 //18
    cout << "v^2 = u^2+2as" << '\n';
    cout << "v = " ; cin >> v;
    cout << "a = " ; cin >> a;
    cout << "s = " ; cin >> s;
    cout << "u = " << sqrt((v*v)-(2*a*s));
}

void find5a(){ //ไม่มีtหาa //19
    cout << "v^2 = u^2+2as" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "s = " ; cin >> s;
    cout << "a = " << (pow(v,2)-pow(u,2))/(2*s);
}

void find5s(){ //ไม่มีtหาs //20
    cout << "v^2 = u^2+2as" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "a = " ; cin >> a;
    cout << "s = " << (pow(v,2)-pow(u,2))/(2*a);
}

void finds(){ //ระยะทาง //21
    cout << "s = vt" << '\n';
    cout << "v = " ; cin >> v;
    cout << "t = " ; cin >> t;
    cout << "s = " << v*t;
}

void finda(){ //ความเร่ง //22
    cout << "a = (v-u)/t" << '\n';
    cout << "v = " ; cin >> v;
    cout << "u = " ; cin >> u;
    cout << "t = " ; cin >> t;
    cout << "a = " << (v-u)/t;
}

void findaa(){ //อัตราเร่ง //23
    cout << "a = s/t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "a = " << s/t;
}

void findv(){ //ไม่มีความเร่ง,ความเร็วคงที่ //24
    cout << "v = s/t" << '\n';
    cout << "s = " ; cin >> s;
    cout << "t = " ; cin >> t;
    cout << "v = " << s/t;
}

void findt(){ //หาเวลาในการเคลื่อนที่ //25
    cout << "t = s/v" << '\n';
    cout << "s = " ; cin >> s;
    cout << "v = " ; cin >> v;
    cout << "t = " << s/v;
}

void rectilinearmotion(){

    cout << "find v(last speed) (no s)                           press 1" << '\n';
    cout << "find s(displacement) (no a)                         press 2" << '\n';
    cout << "find s(displacement) (no v)                         press 3" << '\n';
    cout << "find s(displacement) (no u)                         press 4" << '\n';
    cout << "find v^2(last speed) (no t)                         press 5" << '\n';
    cout << "find s(vt),a((v-u)/t),a(s/t),v(s/t),t(s/v)          press 6" << '\n';
    cout << "Please select number ";
    cin >> b;
    if(b == 1){
        cout << "v = u+at              press 1" << '\n';
        cout << "u = v-at              press 2" << '\n';
        cout << "t = (v-u)/a           press 3" << '\n';
        cout << "a = (v-u)/t           press 4" << '\n';
        cout << "Please select number ";
        cin >> b;
        if(b == 1){
            find1v();
        }else if(b == 2){
            find1u();
        }else if(b == 3){
            find1t();
        }else if(b == 4){
            find1a();
        }
    }else if(b == 2){
        cout << "s = ((u+v)/2)t       press 1" << '\n';
        cout << "t = s/((u+v)/2)      press 2" << '\n';
        cout << "u = ((2s)-v)/t       press 3" << '\n';
        cout << "v = ((2s)-u)/t       press 4" << '\n';
        cout << "Please select number ";
        cin >> b;
        if(b == 1){
            find2s();
        }else if(b == 2){
            find2t();
        }else if(b == 3){
            find2u();
        }else if(b == 4){
            find2v();
        }
    }else if(b == 3){
        cout << "s = (ut)+(1/2)at^2                                                    press 1" << '\n';
        cout << "u = (s-(1/2))/at^3                                                    press 2" << '\n';
        cout << "a = (s-(ut)-(1/2))/t^2                                                press 3" << '\n';
        cout << "t = ((-u+sqrt((u^2)+(s*a*s)))/a) and ((-u-sqrt((u^2)+(s*a*s)))/a)     press 4" << '\n';
        cout << "Please select number ";
        cin >> b;
        if(b == 1){
            find3s();
        }else if(b == 2){
            find3u();
        }else if(b == 3){
            find3a();
        }else if(b == 4){
            find3t();
        }
    }else if(b == 4){
        cout << "s = (vt)-(1/2)at^2                                                  press 1" << '\n';
        cout << "v = (s-((1/2)at^2))/t                                               press 2" << '\n';
        cout << "a = (s-(vt)+(1/2))/t^2                                              press 3" << '\n';
        cout << "t = ((v+sqrt((v^2)+(s*a*s)))/a) and ((v-sqrt((v^2)+(s*a*s)))/a)     press 4" << '\n';
        cout << "Please select number ";
        cin >> b;
        if(b == 1){
            find4s();
        }else if(b == 2){
            find4v();
        }else if(b == 3){
            find4a();
        }else if(b == 4){
            find4t();
        }
    }else if(b == 5){
        cout << "v^2 = u^2+2as               press 1" << '\n';
        cout << "u^2 = sqrt(v^-2as)          press 2" << '\n';
        cout << "a = (v^2-u^2)/(2s)          press 3" << '\n';
        cout << "s = (v^2-u^2)/(2a)          press 4" << '\n';
        cout << "Please select number ";
        cin >> b;
        if(b == 1){
            find5v();
        }else if(b == 2){
            find5u();
        }else if(b == 3){
            find5a();
        }else if(b == 4){
            find5s();
        }
    }else if(b == 6){
        cout << "a = (v-u)/t                press 1" << '\n';
        cout << "a = s/t                    press 2" << '\n';
        cout << "s = vt                     press 3" << '\n';
        cout << "v = s/t                    press 4" << '\n';
        cout << "t = s/v                    press 5" << '\n';
        cout << "Please select number ";
        cin >> b;
        if(b == 1){
            finda();
        }else if(b == 2){
            findaa();
        }else if(b == 3){
            finds();
        }else if(b == 4){
            findv();
        }else if(b == 5){
            findt();
        }
    }
    
}

int main(){

    void rectilinearmotion();

    return 0;
}
