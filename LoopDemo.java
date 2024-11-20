class LoopDemo
{
    public static void main( String A[])
    {
        int i = 0;

        System.out.println("output By using for loop");
        for(i = 1;i <= 5; i++)
        {
            System.out.println(i);
        }

        System.out.println("output By using While loop");
        i = 1;
        while(i<=5)
        {
            System.out.println(i);
            i++;
        }
        System.out.println("output By using While loop");
        i = 1;
        do
        {
            System.out.println(i);
            i++;
        }while( i <= 5);
    }
}