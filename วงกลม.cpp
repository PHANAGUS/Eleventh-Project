#include<iostream>
#include<cmath>
using namespace std;


void Frequency(){
    double c,f,n,T;
    cout << "f=n/T\n";
    cout << "find f (Frequency)   press 1\n";
    cout << "find T (Period)      press 2\n";
    cin >> c;
    if(c==1){
        cout << "f=n/T\n";
        cout << "n = "; cin >> n;
        cout << "T = "; cin >> T;
        cout << "f = "; cout << n/T;
    }else if(c==2){
        cout << "T=n/f\n";
        cout << "n = "; cin >> n;
        cout << "f = "; cin >> f;
        cout << "T = "; cout << n/f;
    }
}

void findv(){
    double v,f,T,R,c1,c2;
    cout << "v=(2*PI*R)/T\nv=2*PI*R*f\n";
    cout << "find v (speed)   press 1\n";
    cout << "find R (radius)  press 2\n";
    cin >> c1;
    if(c1==1){
        cout << "know T  press 1\n";
        cout << "know f  press 2\n";
        cin >> c2;
        if(c2==1){
            cout << "v=(2*PI*R)/T\n";
            cout << "R = "; cin >> R;
            cout << "T = "; cin >> T;
            cout << "v = "; cout << (2*M_PI*R)/T;
        }else if(c2==2){
            cout << "v=2*PI*R*f\n";
            cout << "R = "; cin >> R;
            cout << "f = "; cin >> f;
            cout << "v = "; cout << 2*M_PI*R*f;
        }
    }else if(c1==2){
        cout << "know T  press 1\n";
        cout << "know f  press 2\n";
        cin >> c2;
        if(c2==1){
            cout << "v=(2*PI*R)/T\n";
            cout << "v = "; cin >> v;
            cout << "T = "; cin >> T;
            cout << "R = "; cout << (v*T)/(2*M_PI);
        }else if(c2==2){
            cout << "v=2*PI*R*f\n";
            cout << "v = "; cin >> v;
            cout << "f = "; cin >> f;
            cout << "R = "; cout << v/(2*M_PI*f);
        }
    }
}

void CentripetalForce(){
    double Fc,m,v,R,c1;
    cout << "Fc=(mv^2)/R\n";
    cout << "find Fc (Centripetal Force)   press 1\n";
    cout << "find m (mass)                 press 2\n";
    cout << "find v (speed)                press 3\n";
    cout << "find R (radius)               press 4\n";
    cin >> c1;
    if(c1==1){
        cout << "Fc=(mv^2)/R\n";
        cout << "m = "; cin >> m;
        cout << "v = "; cin >> v;
        cout << "R = "; cin >> R;
        cout << "Fc = "; cout << (m*pow(v,2))/R;
    }else if(c1==2){
        cout << "Fc=(mv^2)/R\n";
        cout << "Fc = "; cin >> Fc;
        cout << "v = "; cin >> v;
        cout << "R = "; cin >> R;
        cout << "m = "; cout << (Fc*R)/pow(v,2);
    }else if(c1==3){
        cout << "Fc=(mv^2)/R\n";
        cout << "Fc = "; cin >> Fc;
        cout << "m = "; cin >> m;
        cout << "R = "; cin >> R;
        cout << "v = "; cout << sqrt((Fc*R)/m);
    }else if(c1==4){
        cout << "Fc=(mv^2)/R\n";
        cout << "Fc = "; cin >> Fc;
        cout << "m = "; cin >> m;
        cout << "v = "; cin >> v;
        cout << "R = "; cout << (m*pow(v,2))/Fc;
    }
}

void CentripetalAcceleration(){
    double ac,v,R,c1;
    cout << "ac=v^2/R\n";
    cout << "find ac (Centripetal Acceleration)   press 1\n";
    cout << "find v (speed)                       press 2\n";
    cout << "find R (radius)                      press 3\n";
    if(c1==1){
        cout << "ac=v^2/R\n";
        cout << "v = "; cin >> v;
        cout << "R = "; cin >> R;
        cout << "ac = "; cout << pow(v,2)/R;
    }else if(c1==2){
        cout << "ac=v^2/R\n";
        cout << "ac = "; cin >> ac;
        cout << "R = "; cin >> R;
        cout << "v = "; cout << sqrt(ac*R);
    }else if(c1==3){
        cout << "ac=v^2/R\n";
        cout << "ac = "; cin >> ac;
        cout << "v = "; cin >> v;
        cout << "R = "; cout << pow(v,2)/ac;
    }
}