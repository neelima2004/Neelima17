#include<iostream>
using namespace std;
class Add2int
{
    public:
    void add(int a,int b)
    {
        cout<<"Sum of 2 Integers(int) : "<<a+b<<endl;
    }
};
class Add2float: public Add2int
{
    public:
    void add(float a,float b)
    {
        cout<<"Sum of 2 Integers(float) : "<<a+b<<endl;
    }
};

int main()
{
    Add2float obj;
    obj.add(3,6);
    obj.add(3.4,2.8);
    return 0;
}
