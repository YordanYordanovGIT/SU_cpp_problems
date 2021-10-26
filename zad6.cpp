#include <iostream>
using namespace std;

bool isEqual(float a, float b);

int main(){
    float x,y,hSide;
    cin>>x>>y>>hSide;
    hSide = hSide / 2;
    
   if(abs(x) < hSide && abs(y) < hSide){
        cout<<"Point A("<<x<<", "<<y<<") is INSIDE the rectangle";
        return 0;
    }
    if((isEqual(abs(x), hSide) && abs(y) < hSide) || (isEqual(abs(y), hSide) && abs(x) < hSide)){
        cout<<"Point A("<<x<<", "<<y<<") is ON the rectangle";
        return 0;
    }
    cout<<"Point A("<<x<<", "<<y<<") is OUTSIDE the rectangle";
    return 0;
}

bool isEqual(float a, float b){
    float diff = 0.0001;
    return (abs(a - b) < diff);
}
