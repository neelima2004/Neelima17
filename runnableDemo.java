class RDemo implements Runnable
{
    int num;
    RDemo(int num)
    {
        this.num=num;
    }
    public void run()
    {
        for(int i=1;i<=num;i++)
        {
            System.out.println(i);
        }
    }
}
public class runnableDemo
{
    public static void main(String[] args)
    {
        RDemo obj=new RDemo(3);
        obj.run();
    }
}
