#include <cmath>
#include<iostream>
#include<stdio.h>
using namespace std;

double s,a,t,u,v,g,radius;

void func1findt(){
    cout << "(2*u*sin(radius))/g" << endl;
    cout << "u = "; cin >> u; 
    cout << "g = "; cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "t = "<< (2*u*sin(radius))/g;
}
void func2findsymax(){
    cout << "Symax=(u*usin^2(radius))/2g" << "\n";
    cout << "u = "; cin >> u; 
    cout << "g = "; cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "Symax = "<< ((u*u)*pow(sin(radius),2))/(2*g);
}
void func3findsxmax(){
    cout << "u = "; cin >> u; 
    cout << "g = "; cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "Sx = "<<(u*u*sin(2*radius))/g;
}
void func4findt2(){ //1
    cout << "s(y)=ut+((1/2)*g*t*t)" << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "t = "<< ((-u+sqrt((u*u)+(s*g*s)))/g) << " and " << ((-u-sqrt((u*u)+(s*g*s)))/g) << "\n";
}
void func5findt3(){ //2
    cout << "s(y)=vt-((1/2)*g*t*t)" << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "g = ";cin >> g; 
    cout << "t = " << ((v+sqrt((v*v)+(s*g*s)))/g) << " and " << ((v-sqrt((v*v)+(s*g*s)))/g) << "\n";
}
void func6findt4(){ //3
    cout << "v=u+(gt) " << "\n";
    cout << "v = ";cin >> v;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "t = "<< ((v-u)/g) << "\n";
}
void func7findt5(){ //4
    cout << "s(y)=((u+v)/2)t) " << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "v = ";cin >> v;
    cout << "t = "<< ((2*s)/(u+v)) << "\n";
}
void func9findsx1(){
    cout << "Sx=ucos(radius)t" << "\n";
    cout << "u = "; cin >> u;
    cout << "radius = ";cin >> radius;
    cout << "t = ";cin >> t;
    cout << "Sx = "<< u*cos(radius)*t;
}
void func10findsx2(){
    cout << "Sx=ut" << "\n";
    cout << "u = "; cin >> u;
    cout << "t = ";cin >> t;
    cout << "Sx = " << u*t;
}
void func11findsy1(){ //1
    cout << "s(y)=ut+((1/2)*g*t*t " << "\n";
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "s(y) = " << (u*t)+((1/2)*g*t*t);
}
void func12findsy2(){ //2
    cout << "s(y)=vt-((1/2)*g*t*t" << "\n";
    cout << "t = ";cin >> t;
    cout << "v = ";cin >> v;
    cout << "g = ";cin >> g; 
    cout << "s(y) = " << (v*t)-((1/2)*g*t*t);
}
void func13findsy3(){ //4
    cout << "s(y)=((u+v)/2)t " << "\n";
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "v = ";cin >> v;
    cout << "s(y) = " << ((u+v)/2)*t;
}
void func14findsy4(){ //5
    cout <<"v^2=u^2+2gs " << "\n";
    cout << "v = ";cin >> v;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << (pow(v,2)-pow(u,2))/(2*g);
}
void allfunc(){
              cout << "Which formula would you like?" << "\n";
              cout << "s(y) = ut  + ((1/2)gt^2    (Have s,u,t,g)           press 1" << "\n";
              cout << "s(y) = vt  - ((1/2)gt^2    (Have s,v,t,g)           press 2" << "\n";
              cout << "v    = u   + (gt)          (Have v,u,g,t)           press 3" << "\n";
              cout << "s(y) = ((u+v)/2) t         (Have s,u,v,t)           press 4" << "\n";
              cout << "v^2  = u^2 + 2gs           (Have v,u,g,s)           press 5" << "\n";
}
void allfunc1(){
              cout << "Which formula would you like?" << "\n";
              cout << "    s(y)          = ucos(radius)t  + ((1/2)gt^2           (Have s,u,t,g)         press 1" << "\n";
              cout << "    s(y)          = vcos(radius)t  - ((1/2)gt^2           (Have s,v,t,g)         press 2" << "\n";
              cout << "  vcos(radius)    = ucos(radius)   + (gt)                 (Have v,u,g,t)         press 3" << "\n";
              cout << "    s(y)          = ((ucos(radius) + vcos(radius))/2)t    (Have s,u,v,t)         press 4" << "\n";
              cout << "(vcos(radius)^2)  = (ucos(radius)^2)+2gs                  (Have v,u,g,s)         press 5" << "\n";
}
void func15findsyr(){ //1
    cout << "s(y)=ucos(radius)t+((1/2)*g*t*t) " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "u = ";cin >> u;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "S(y) = " << u*cos(radius)*t+((1/2)*g*t*t) ;
}
void func16findsyr(){ //2
    cout << "s(y)=vcos(radius)t-((1/2)*g*t*t) " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "t = ";cin >> t;
    cout << "v = ";cin >> v;
    cout << "g = ";cin >> g; 
    cout << "S(y) = " << v*cos(radius)*t-((1/2)*g*t*t);
}
void func17findsyr(){ //4
    cout << "s(y)=((ucos(radius)+vcos(radius))/2)t " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "v = ";cin >> v;
    cout << "S(y) = " << ((u*cos(radius)+v*cos(radius))/2)*t;
}
void func18findsyr(){ //5
    cout <<"(vcos(radius))^2=(ucos(radius))^2+2gs " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "v = ";cin >> v;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "S(y) = " << (((v*v)*cos(radius)*cos(radius))-((u*u)*cos(radius)*cos(radius)))-(2*g);
}
void func19findtr(){ //1
    cout << "s(y)=ucos(radius)t+((1/2)*g*t*t " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "s(y) = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "t = " << ((-u*cos(radius)+sqrt((u*(cos(radius))*u*(cos(radius)))+(s*g*s)))/g) << " and " << ((-u*cos(radius)-sqrt((u*(cos(radius))*u*(cos(radius)))+(s*g*s)))/g) << "\n";
}
void func20findtr(){ //2
    cout << "s(y)=vcos(radius)t-((1/2)*g*t*t" << "\n";
    cout << "radius = ";cin >> radius;
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "g = ";cin >> g; 
    cout << "t = " << ((v*(cos(radius))+sqrt((v*cos(radius)*v*cos(radius))+(s*g*s)))/g) << " and " << ((v*cos(radius)-sqrt((v*cos(radius)*v*cos(radius))+(s*g*s)))/g) << "\n";
}
void func21findtr(){ //3
    cout << "vcos(radius)=ucos(radius)+(gt) " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "v = ";cin >> v;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "t = "<< ((v*cos(radius)-u*cos(radius))/g) << "\n";
}
void func22findtr(){ //4
    cout << "s(y)=((ucos(radius)+vcos(radius))/2)t " << "\n";
    cout << "radius = ";cin >> radius;
    cout << "s(y) = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "v = ";cin >> v;
    cout << "t = "<< ((2*s)/(u*cos(radius)+v*cos(radius))) << "\n";
}
void func23findu(){ //1
    cout << "s(y)=ut+((1/2)*g*t*t) " << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "u(first speed) = " << (s-((0.5)*g*t*t))/t;
}
void func24findu(){ //4
    cout << "s(y)=((u+v)/2)t " << "\n";
    cout << "t = ";cin >> t;
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "u(first speed) = " <<  (2*s/t)-v;
}
void func25findu(){ //5
    cout <<"(v)^2=(u)^2+2gs " << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "g = ";cin >> g;
    cout << "u(first speed) = " << sqrt((v*v)-(2*g*s));
}
void func26findu(){ //3
    cout << "v=u+(gt) " << "\n";
    cout << "v = ";cin >> v;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "u(first speed) = " << v-g*t;
}
void func27findur(){ //1
    cout << "s(y)=ucos(radius)t+((1/2)*g*t*t) " << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "u(first speed) = " << (s-((0.5)*g*t*t))/(cos(radius)*t);
}
void func28findur(){ //4
    cout << "s(y)=((ucos(radius)+vcos(radius))/2)t " << "\n";
    cout << "t = ";cin >> t;
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "radius = ";cin >> radius;
    cout << "u(first speed) = " <<  (2*s/t*cos(radius))-v;
}
void func29findur(){ //5
    cout <<"(vcos(radius))^2=(ucos(radius))^2+2gs " << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "g = ";cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "u(first speed) = " << sqrt((v*v)-((2*g*s)/(cos(radius)*cos(radius))));
}
void func30findur(){ //3
    cout << "vcos(radius)=ucos(radius)+(gt) " << "\n";
    cout << "v = ";cin >> v;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "u(first speed) = " << v-((g*t)/cos(radius));
}
void func31findv(){ //2
    cout << "s(y)=vt-((1/2)*g*t*t)" << "\n";
    cout << "t = ";cin >> t;
    cout << "s(y) = ";cin >> s;
    cout << "g = ";cin >> g; 
    cout << "v = " << (s-((1/2)*g*t*t))/t;
}
void func32findv(){ //3
    cout << "v=u+(gt) " << "\n";
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "v = " << u+g*t;
}
void func33findv(){ //4
    cout << "s(y)=((u+v)/2)t " << "\n";
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "s(y) = ";cin >> s;
    cout << "v = " << ((2*s)/t)-u;
}
void func34findv(){ //5
    cout <<"v^2=u^2+2gs " << "\n";
    cout << "s = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "v = " << sqrt(u*u+2*g*s);
}
void func35findvr(){ //2
    cout << "s(y)=vcos(radius)t-((1/2)*g*t*t)" << "\n";
    cout << "t = ";cin >> t;
    cout << "s(y) = ";cin >> s;
    cout << "g = ";cin >> g; 
    cout << "radius = ";cin >> radius;
    cout << "v = " << (s-((1/2)*g*t*t))/(v*t);
}
void func36findvr(){ //3
    cout << "vcos(radius)=ucos(radius)+(gt) " << "\n";
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "v = " << ((u*cos(radius))+(g*t)/(cos(radius)));
}
void func37findvr(){ //4
    cout << "s(y)=((ucos(radius)+vcos(radius))/2)t " << "\n";
    cout << "t = ";cin >> t;
    cout << "u = ";cin >> u;
    cout << "s(y) = ";cin >> s;
    cout << "radius = ";cin >> radius;
    cout << "v = " << (s*2)/(t*cos(radius))-u;
}
void func38findvr(){ //5
    cout <<"(vcos(radius))^2=(ucos(radius))^2+2gs " << "\n";
    cout << "s = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "radius = ";cin >> radius;
    cout << "v = " << sqrt((u*u*cos(radius)*cos(radius)+(2*g*s))/(cos(radius)*cos(radius)));
}
void func39findr(){
    cout << "s(y)=ucos(radius)t+((1/2)*g*t*t) " << "\n";
    cout << "s(y) = ";cin >> s;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "u = ";cin >> u;
    cout << "radius = " << (s-((1/2)*g*t*t))/(u*t);
}
void func40findr(){
    cout << "s(y)=vcos(radius)t-((1/2)*g*t*t)" << "\n";
    cout << "t = ";cin >> t;
    cout << "s(y) = ";cin >> s;
    cout << "g = ";cin >> g; 
    cout << "v = ";cin >> v;
    cout << "radius = " << (s+((1/2)*g*t*t))/(v*t);
}
void func41findr(){
    cout << "vcos(radius)=ucos(radius)+(gt) " << "\n";
    cout << "v = ";cin >> v;
    cout << "t = ";cin >> t;
    cout << "g = ";cin >> g;
    cout << "u(first speed) = ";cin >> u;
    cout << "radius = " <<((g*t)/(v-u));
}
void func42findr(){
    cout << "s(y)=((ucos(radius)+vcos(radius))/2)t " << "\n";
    cout << "t = ";cin >> t;
    cout << "s(y) = ";cin >> s;
    cout << "v = ";cin >> v;
    cout << "u(first speed) = ";cin >> u;
    cout << "radius = " <<(2*s)/((u+v)*t);
}
void func43findr(){
    cout <<"(vcos(radius))^2=(ucos(radius))^2+2gs " << "\n";
    cout << "s = ";cin >> s;
    cout << "u = ";cin >> u;
    cout << "g = ";cin >> g;
    cout << "v = ";cin >> v;
    cout << "radius = " <<sqrt(abs((2*g*s)/((v*v)-(u*u))));
}
 void ask1(){
    int y;
    cout << "              PROJECTLIE" << "\n" << "\n";
    cout << "Find t(time) (t on ground)            press 1" << "\n"; //1
    cout << "Find Sy                               press 2" << "\n"; //8
    cout << "Find Sx                               press 3" << "\n"; //2      
    cout << "Find Sy max (You must know radius)    press 4" << "\n"; //1
    cout << "Find Sx max (You must know radius)    press 5" << "\n"; //1
    cout << "Find t(time)                          press 6" << "\n"; //8
    cout << "Find u(first speed)                   press 7" << "\n"; //8
    cout << "Find v(last speed)                    press 8" << "\n"; //8
    cout << "Find radius                           press 9" << "\n"; //5
    cout << "Please select number ";
    cin >> y;
    if(y==1){
        cout << "Find t(time) (t on ground)" << "\n";
            func1findt();
            }       
    else if(y==2){
        int x2;
        cout << "Find Sy" << "\n";
        cout << "cout << Know radius              press 1" << "\n";
        cout << "cout << Don't know radius        press 2" << "\n";
        cout << "Please select number ";
        cin >> x2;
        if(x2==1){
            int x21;
            allfunc1();
            cin >> x21;
            if(x21==1){
                func15findsyr();
            }
            else if(x21==2){
                func16findsyr();
            }
            else if(x21==3){
                func17findsyr();
            }
            else if(x21==4){
                func18findsyr();
            }
    }
    else if(x2==2){
        int x22;
        allfunc();
        cin >> x22;
        if(x22==1){
            func11findsy1();
        }
        else if(x22==2){
            func12findsy2();
        }
        else if(x22==4){
            func13findsy3();
        }
        else if(x22==5){
            func14findsy4();
        }
    }
    }

    else if(y==3){
        int x3;
        cout << "Find Sx" << "\n";
        cout << "Know radius              press 1" << "\n";
        cout << "Don't know radius        press 2" << "\n";
        cin >> x3;
        if(x3==1){
        func9findsx1();
        }
        else if(x3==2){
        func10findsx2();
        }
    }
    else if(y==4){
        cout << "Find Sy max" << "\n";
        func2findsymax();
        }
    else if(y==5){
    cout << "Find Sx max" << "\n";
    func3findsxmax();
        }
    else if(y==6){ //find t
        int x6;
        cout << "Know radius              press 1" << "\n";
        cout << "Don't know radius        press 2" << "\n";
        cout << "Please select number ";
        cin >> x6;
        int findt1;
        int findt2;
        if(x6==1){
            allfunc1();
            cin >> findt2;
            if(findt2 == 1){func19findtr;}
            else if(findt2 == 2){func20findtr;}
            else if(findt2 == 3){func21findtr;}
            else if(findt2 == 4){func22findtr;}
            else if(findt2 > 4){cout << "Can not solve ur number";}
        }
    else if (x6==2){
    allfunc();
    cin >> findt1;
    if (findt1 == 1){ func4findt2();}
    else if (findt1 == 2){ func5findt3();}  
    else if (findt1 == 3){ func6findt4();}   
    else if (findt1 == 4){ func7findt5();} 
    }
    }
    else if(y==7){ //find u
        int x7;
        cout << "Know radius              press 1" << "\n";
        cout << "Don't know radius        press 2" << "\n";
        cout << "Please select number ";
        cin >> x7;
        int findu1;
        int findu2;
        if (x7 == 1){
        allfunc1();
        cin >> findu1;
        if (findu1 ==1){func27findur();}
        else if (findu1 ==4){func28findur();}
        else if (findu1 ==5){func29findur();}
        else if (findu1 ==3){func30findur();}
        }
        else if (x7 ==2){
        allfunc();
        cin >> findu2;
        if (findu2 == 1){ func23findu();}
    else if (findu2 == 4){ func24findu();}  
    else if (findu2 == 5){ func25findu();}   
    else if (findu2 == 3){ func26findu();}
        }
    }
    else if(y==8) //find v 
    {
        int x8;
        cout << "Know radius              press 1" << "\n";
        cout << "Don't know radius        press 2" << "\n";
        cout << "Please select number ";
        cin >> x8;
        int findv1;
        int findv2;
        if (x8==1){
             allfunc1();
        cin >> findv1;
        if (findv1 ==2){func35findvr();}
        else if (findv1 ==3){func36findvr();}
        else if (findv1 ==4){func37findvr();}
        else if (findv1 ==5){func38findvr();}
        }
        else if(x8==2){
            allfunc();
                cin >> findv2;
                if (findv2 ==2){func31findv();}
        else if (findv2 ==3){func32findv();}
        else if (findv2 ==4){func33findv();}
        else if (findv2 ==5){func34findv();}
            }
        }
    else if(y==9)// find r
    {
        int y9;
        allfunc1();
        cin >> y9;
        if (y9 ==1){func39findr();}
        else if(y9 ==2){func40findr();}
        else if (y9 ==3){func41findr();}
        else if (y9 ==4){func42findr();}
        else if (y9 ==5){func43findr();}
    }
    }
    
    int main(){
    ask1();
    return 0;
}
   
