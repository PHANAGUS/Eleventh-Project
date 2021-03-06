#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double W, F, s, P, T, v, Ek, m, I, w, Ep, g = 9.81, h, k, x;

void findW();
void findP();
void findF();
void findv();
void findEk();
void findEp();
void findk();
void findx();
double Chapter5_1(string);
double Chapter5_2(string);
double Chapter5_3(string);
double Chapter5_4(string);
//double Chapter5_5(string);
double Chapter5_6(string);
double Chapter5_7(string);
double Chapter5_8(string);

int main()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find W (Work)                              Press 1" << endl;
    cout << "Find P (Power)                             Press 2" << endl;
    cout << "Find F (Force)                             Press 3" << endl;
    cout << "Find v (Velocity)                          Press 4" << endl;
    cout << "Find Ek (Kinetic Energy)                   Press 5" << endl;
    cout << "Find Ep (Potential Energy)                 Press 6" << endl;
    cout << "Find k (Spring's Constant)                 Press 7" << endl;
    cout << "Find x (Spring's Displacement)             Press 8" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2" || select == "3" || select == "4" || select == "5" || select == "6" || select == "7" || select == "8") break;
        else cout << "***Please Press 1-8." << endl;
    }while(true);

    if(select == "1") findW();
    else if(select == "2") findP();
    else if(select == "3") findF();
    else if(select == "4") findv();
    else if(select == "5") findEk();
    else if(select == "6") findEp();
    else if(select == "7") findk();
    else if(select == "8") findx();
}

void findW()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. F(Force) and s(Displacement)         Press 1" << endl;
    cout << "   2. P(Power) and T(Time)                 Press 2" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2") break;
        else cout << "***Please Press 1-2." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_1("W");
    else if(select == "2") Chapter5_2("W");

    cout << "#Result ----->  W = " << W  << " N.m" << endl;
    cout << "--------------------------------------------------";
}
void findP()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. W(Work) and T(Time)                  Press 1" << endl;
    cout << "   2. F(Force) and V(Velocity)             Press 2" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2") break;
        else cout << "***Please Press 1-2." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_2("P");
    else if(select == "2") Chapter5_3("P");

    cout << "#Result ----->  P = " << P << " W" << endl;
    cout << "--------------------------------------------------";
}
void findF()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. W(Work) and s(Displacement)          Press 1" << endl;
    cout << "   2. P(Power) and V(Velocity)             Press 2" << endl;
    cout << "   3. k and x (Spring's)                   Press 3" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2" || select == "3") break;
        else cout << "***Please Press 1-3." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_1("F");
    else if(select == "2") Chapter5_3("F");
    else if(select == "3") Chapter5_8("F");

    cout << "#Result ----->  F = " << F << " N" << endl;
    cout << "--------------------------------------------------";
}
void findv()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. P(Power) and F(Force)                Press 1" << endl;
    cout << "   2. Ek(Kinetic Energy) and m(Mass)       Press 2" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2") break;
        else cout << "***Please Press 1-2." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_3("v");
    else if(select == "2") Chapter5_4("v");

    cout << "#Result ----->  v = " << v << " m/s" << endl;
    cout << "--------------------------------------------------";
}
void findEk()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    /*cout << "Find by" << endl;
    cout << "   1. v(Velocity) and m(Mass)              Press 1" << endl;
    cout << "   2. I(Kinetic Energy) and m(Mass)       Press 2" << endl;
    for(;;)//ask for dicision.
    {
        cout << "Press : ";
        cin >> select;
        if(select == 1 || select == 2) break;
        else cout << "***Please Press 1-2." << endl;
    }
    cout << "--------------------------------------------------" << endl;
    switch(select)
    {
        case 1:
            Chapter5_4("Ek");
            break;
        case 2:
            Chapter5_5("Ek");
            break;
    }*/
    cout << "Find by v(Velocity) and m(Mass)" << endl;
    Chapter5_4("Ek");
    cout << "#Result ----->  Ek = " << Ek << " J" << endl;
    cout << "--------------------------------------------------";
}
void findEp()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. m(Mass), g(9.81) and h(Height)       Press 1" << endl;
    cout << "   2. k and x (Spring's)                   Press 2" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2") break;
        else cout << "***Please Press 1-2." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_6("Ep");
    else if(select == "2") Chapter5_7("Ep");

    cout << "#Result ----->  Ep = " << Ep << " J" << endl;
    cout << "--------------------------------------------------";
}
void findk()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. Ep(Potential Energy) and x           Press 1" << endl;
    cout << "   2. F(Force) and x                       Press 2" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2") break;
        else cout << "***Please Press 1-2." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_7("k");
    else if(select == "2") Chapter5_8("k");

    cout << "#Result ----->  k = " << k << " N/m" << endl;
    cout << "--------------------------------------------------";
}
void findx()
{
    string select;
    cout << "--------------------------------------------------" << endl;
    cout << "Find by" << endl;
    cout << "   1. Ep(Potential Energy) and k           Press 1" << endl;
    cout << "   2. F(Force) and k                       Press 2" << endl;
    do{
        cout << "Press : ";
        getline(cin,select);
        if(select == "1" || select == "2") break;
        else cout << "***Please Press 1-2." << endl;
    }while(true);
    cout << "--------------------------------------------------" << endl;

    if(select == "1") Chapter5_7("x");
    else if(select == "2") Chapter5_8("x");

    cout << "#Result ----->  x = " << x << " m" << endl;
    cout << "--------------------------------------------------";
}

double Chapter5_1(string tofind)
{
    double ans;
    if(tofind == "W")
    {
        cout << "F = "; cin >> F;
        cout << "s = "; cin >> s;
        W = F*s;
        ans = W;
    }
    else if(tofind == "F")
    {
        cout << "W = "; cin >> W;
        cout << "s = "; cin >> s;
        F = W/s;
        ans = F;
    }
    return ans;
}
double Chapter5_2(string tofind)
{
    double ans;
    if(tofind == "W")
    {
        cout << "P = "; cin >> P;
        cout << "T = "; cin >> T;
        W = P*T;
        ans = W;
    }
    else if(tofind == "P")
    {
        cout << "W = "; cin >> W;
        cout << "T = "; cin >> T;
        P = W/T;
        ans = P;
    }
    return ans;
}
double Chapter5_3(string tofind)
{
    double ans;
    if(tofind == "P")
    {
        cout << "F = "; cin >> F;
        cout << "V = "; cin >> v;
        P = F*v;
        ans = P;
    }
    else if(tofind == "F")
    {
        cout << "P = "; cin >> P;
        cout << "v = "; cin >> v;
        F = P/v;
        ans = F;
    }
    return ans;
}
double Chapter5_4(string tofind)
{
    double ans;
    if(tofind == "Ek")
    {
        cout << "m = "; cin >> m;
        cout << "v = "; cin >> v;
        Ek = (1/2)*m*v*v;
        ans = Ek;
    }
    else if(tofind == "v")
    {
        cout << "Ek = "; cin >> Ek;
        cout << "m = "; cin >> m;
        v = pow(2*Ek/m,1/2);
        ans = v;
    }
    return ans;
}
/*double Chapter5_5(string tofind)
{
    double ans;
    if(tofind == "Ek")
    {
        cout << "I = "; cin >> I;
        cout << "w = "; cin >> w;
        Ek = (1/2)*I*w*w;
        ans = Ek;
    }
    return ans;
}*/
double Chapter5_6(string tofind)
{
    double ans;
    if(tofind == "Ep")
    {
        cout << "m = "; cin >> m;
        cout << "h = "; cin >> h;
        Ep = m*g*h;
        ans = Ep;
    }
    return ans;
}
double Chapter5_7(string tofind)
{
    double ans;
    if(tofind == "Ep")
    {
        cout << "k = "; cin >> k;
        cout << "x = "; cin >> x;
        Ep = (1/2)*k*x*x;
        ans = Ep;
    }
    else if(tofind == "k")
    {
        cout << "Ep = "; cin >> Ep;
        cout << "x = "; cin >> x;
        k = (2*Ep)/(x*x);
        ans = k;
    }
    else if(tofind == "x")
    {
        cout << "Ep = "; cin >> Ep;
        cout << "k = "; cin >> k;
        x = pow(2*Ep/k,1/2);
        ans = x;
    }
    return ans;
}
double Chapter5_8(string tofind)
{
    double ans;
    if(tofind == "k")
    {
        cout << "F = "; cin >> F;
        cout << "x = "; cin >> x;
        k = F/x;
        ans = k;
    }
    else if(tofind == "F")
    {
        cout << "k = "; cin >> k;
        cout << "x = "; cin >> x;
        F = k*x;
        ans = F;
    }
    else if(tofind == "x")
    {
        cout << "F = "; cin >> F;
        cout << "k = "; cin >> k;
        x = F/k;
        ans = x;
    }
    return ans;
}