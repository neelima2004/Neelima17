import java.util.*;

class MethodOverloading
{
    public
        void Multiplication(float a,float b)
        {
            float result = a*b;
            System.out.println("Multiplication of "+a+" and "+b+" is "+result);
        }
        void Multiplication(float a,float b,float c)
        {
            float result = a*b*c;
            System.out.println("Multiplication of "+a+","+b+" and "+c+" is "+result);
        }

        public static void main(String[] args)
        {
            MethodOverloading obj = new MethodOverloading();
            obj.Multiplication(2,3);
            obj.Multiplication(2,3,5);
        }
}
