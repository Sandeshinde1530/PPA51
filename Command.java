
class Command
{
    public static void main(String Arg[])
    {
        System.out.println("Number of command line argument are : "+Arg.length);

        for(int i = 0; i<Arg.length ; i++)
        {
            System.out.println(Arg[i]);
        }
    }
}


// javac command.java
// java Command Hello 21 Marvellous