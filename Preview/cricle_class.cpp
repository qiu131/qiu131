#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

class CCricle{
public:
    virtual double Area() = 0;
    virtual void PrintInfo() = 0;
    double r;
}

class CCylindrical : public CCricle{
    CCylindrical(double a, double b) : r(a), h(b) {} 
    double Area(){
        return 2*3.14*(h + r);
    }
    double volume(){
        return 3.14*r*r*h;
    }
    double PrintInfo(){
        cout << "CCylindrical's Area is " << Area() << endl;
        cout << "CCylindrical's volume is " << volume() << endl;
    }

private:
    double h;
}

class CConical : public CCricle{
    CConical(double a, double b) : r(a), h(b) {}
    double Area(){
        double l = sqrt(h*h + r*r);
        return 3.14*r*(l+r);
    }
    double volume(){
        return 1/3*3.14*r*r*h;
    }
    double PrintInfo(){
        cout << "CConical's Area is " << Area() << endl;
        cout << "CConical's volume is " << volume() << endl;
    }

private:
    double h;
}

class CBALL : public CCricle{
    CConical(double a) : r(a){}
    double Area(){
        return 4*3.14*r*r;
    }
    double volume(){
        return 4/3*3.14*r*r*r;
    }
    double PrintInfo(){
        cout << "CBall's Area is " << Area() << endl;
        cout << "CBall's volume is " << volume() << endl;
    }
}

int main(){
    char ch;
    cin >> ch;
    switch(ch){
        case 'a':
            int h, r;
            cin >> r >> h;
            CCylindrical *a = new CCylindrical(r, h);
        case 'b':
            int h, r;
            cin >> r >> h;
            CConical *b = new CConical(r, h);
        case 'c':
            
        
        CConical *b;
        CBall *c;
    }

    

}
