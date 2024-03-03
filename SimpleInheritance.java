class Animal 
{
    public void eat() 
    {
        System.out.println("I can eat!");
    }

    public void sleep() 
    {
        System.out.println("I can sleep!");
    }
}

class Dog extends Animal 
{
    public void bark() 
    {
        System.out.println("I can bark!!");
    }
}

public class SimpleInheritance 
{
    public static void main(String[] args) 
    {
        Dog d = new Dog();
        d.eat();
        d.sleep();
        d.bark();
    }
}
