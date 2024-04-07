#include<iostream>
using namespace std;
class base
{
    private:
        virtual float area()=0;
    public:
        void displayMSG()
        {
            cout<<"This is a base class\n";
        }
};
class Triangle: public base
{
    public:
        float b,h;
        Triangle(float base,float height)
        {
            b=base;
            h=height;
        }
        float area()
        {
            return 0.5*b*h;
        }
};
class Circle: public base
{
    public:
        float r;
        Circle(float radius)
        {
            r=radius;
        }
        float area()
        {
            return 3.14*r*r;
        }
};
int main()
{
    Triangle tri(6,2);
    Circle cir(1.7);
    tri.displayMSG();
    cout<<"Area of the Triangle : "<<tri.area()<<endl;
    cir.displayMSG();
    cout<<"Area of the Circle: "<<cir.area()<<endl;
    return 0;
}
