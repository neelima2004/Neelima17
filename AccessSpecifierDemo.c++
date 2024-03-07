/*Write a C++ class 'AccessSpecifierDemo' with the following members:
Member Variables :
1. private int priVar
2. protected int proVar
3. public int pubVar
Member Methods:
1. public void setVar(int priValue,int proValue, int pubValue)
2. public void getVar()
Assign values for each member variable(priVar,proVar,pubvar) and using methods(setVar(),getVar()) and disaply them.*/


#include<iostream>
using namespace std;
 
class AccessSpecifierDemo
{
    public:
        int pubVar;
    private:
        int priVar;
    protected:
        int proVar;
    
    public:
    void setVar(int priValue,int proValue, int pubValue)
    {
        priVar = priValue;
        proVar = proValue;
        pubVar = pubValue;
    }

    void getVar()
    {
        cout<<"Private Variable : "<<priVar<<endl;
        cout<<"Protected Variable : "<<proVar<<endl;
        cout<<"Public Variable : "<<pubVar<<endl;
    }
};

int main()
{
    AccessSpecifierDemo obj;
    obj.setVar(10,20,30);
    obj.getVar();
    return 0;
}