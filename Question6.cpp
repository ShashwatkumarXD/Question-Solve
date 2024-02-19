#include <iostream>
#include <stdio.h>

using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int func1(rectangle r){
    int area=r.length*r.breadth;
    return area;

}
int func2(rectangle r){
    int perimeter=2*(r.length+r.breadth);
    return perimeter;
}
int main(){
    rectangle r;
    r.length=2;
    r.breadth=3;
    int a= func1(r);
    int b=func2(r);
    cout<<a<<endl<<b;
}