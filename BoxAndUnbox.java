public class BoxAndUnbox 
{
    public static void main(String[] args)
    {
        //Boxing
        Integer a=new Integer(70);
        Integer b=new Integer(25);
        //UnBoxing
        int c=b;
        System.out.println("Boxed Value : "+a);
        System.out.println("UnBoxed Value : "+c);
    }
}
