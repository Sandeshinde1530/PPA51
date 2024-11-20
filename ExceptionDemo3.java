import java.util.Scanner;

class ExceptionDemo3
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0,Ans  = 0;
        Scanner sobj = new Scanner(System.in)l

        System.out.println("Enter second number:");
        No1 = sobj.nextInt();
       
        System.out.println("Enter second number:");
        No2 = sobj.nextInt();

        try
        {
            System.out.println("Inside try block");
            Ans = No1 / No2;
        }
        catch(ArithemeticException obj)
        {
            System.out.println("Inside catch block")
            System.out.println(obj);
        }
        finally
        {
            System.out.printl("Inside finally block");
        }

        System.out.println("Division is : "+Ans);
    }
}