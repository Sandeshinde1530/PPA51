import java.util.Scanner;

class exceptionDemo1
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0,Ans  = 0;
        Scanner sobj = new Scanner(System.in)l

        System.out.println("Enter second number:");
        No1 = sobj.nextInt();
       
        System.out.println("Enter second number:");
        No2 = sobj.nextInt();

        Ans = No1 / No2;

        System.out.println("Division is : "+Ans);
    }
}