#include<iostream>
using namespace std;
//template function
template <typename Digit> Digit add(Digit num1,Digit num2)
{
    return num1+num2;
}
//template class
template <typename TempData>
class Report
{
    TempData value;
    public:
        Report(TempData num1)
        {
            value=num1;
        }
        void displayValue()
        {
            cout<<"The value is "<<value<<endl;
        }
};
int main()
{
    int intResult=add(7,2);
    float floatResult=add(6.4,2.3);
    cout<<"The sum of the values : "<<intResult<<endl;
    cout<<"The sum of the values : "<<floatResult<<endl;
    Report <int>obj(2);
    Report <double>obj2(7.74303938376373);
    obj.displayValue();
    obj2.displayValue();
    return 0;
}
