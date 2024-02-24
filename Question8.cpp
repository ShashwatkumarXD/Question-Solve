// WROMG CODE

#include <stdio.h>
#include <iostream>

using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    void initialize(int l , int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    void changelength(int a)
    {
        length=a;
        std::cout<<length;
    }

};
int main ()
{
    rectangle r;
    r.initialize(10, 5);
    int z=r.area();

    return 0;


}
