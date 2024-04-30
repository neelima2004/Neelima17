import java.util.HashMap;
import java.util.Map;
public class mapInterface 
{
    public static void main(String[] args) 
    {
        Map<String,Integer> obj=new HashMap<String,Integer>();
        obj.put("Rose", 1);
        obj.put("Jasmine", 2);
        obj.put("Lily", 3);
        obj.put("Tulip", 4);
        for(Map.Entry<String,Integer> m:obj.entrySet())
        {
            System.out.println(m.getKey()+" = "+m.getValue());
        }
    }
}
