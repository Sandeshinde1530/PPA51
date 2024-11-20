import java.util.*;

class Collections2
{
    public static void main(String a[])
    {
       Stack <String> sobj = new Stack<String>();

       sobj.push("C programming");
       sobj.push("C++ programming");
       sobj.push("java programming");
       sobj.push("Python programming");


       System.out.println(sobj);

       String ret = sobj.pop();

       System.out.println(0);
       System.out.println(ret);

       System.out.println(sobj);

    }
}