import java.net.*;
import java.io.*;

class Client
{
    public static void main(String Arg[]) throws Exception
    {
            System.out.println("Client Application is running");




            Socket sobj = new Socket("localhost",2100);     //Request to server
            System.out.println("Connection Established with the Server");

            PrintStream ps = new PrintStream(sobj.getOutputStream());
            BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
            String str1,str2;
            System.out.println("Marvellous cht messange application started....");
            while(!(str1 = br2.readLine()).equals("end"))
            {
                ps.println(str1);
                str2 = br1.readLine();
                System.out.println("Enter the message for server : ");
                System.out.println("server Says : "+str2);
            }
            System.out.println("thank You for using the marcellous chat aplication...");


    }

}