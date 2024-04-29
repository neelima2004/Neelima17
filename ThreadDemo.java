class DemoTh extends Thread
{
    String name;
    DemoTh(String name)
    {
        this.name=name;
    }
    public void run()
    {
        System.out.println("My name is "+name);
    }
}
public class ThreadDemo
{
    public static void main(String[] args)
    {
        DemoTh obj=new DemoTh("Neelima");
        obj.start();
    }
}
