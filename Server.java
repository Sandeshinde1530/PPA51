import java.net.*;
import java.io.*;

class Server
{
    public static void main(String Arg[]) throws Exception
    {
            System.out.println("Server Application is running");

            ServerSocket ssobj = new ServerSocket(2100);
            System.out.println("Server is waiting for a client at port no 2100");

            Socket sobj = ssobj.accept();//Accept the request form the client
            System.out.println("Connection Established with the client");

            PrintStream ps = new PrintStream(sobj.getOutputStream());
            BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
            String str1,str2;
            System.out.println("Marvellous cht messange application started....");
            while((str1 = br1.readLine())!=null)
            {
                
                System.out.println("Client Says : "+str1);
                System.out.println("Enter message for client:");
                str2 = br2.readLine();
                ps.println(str2);
            }
            System.out.println("thank You for using the marcellous chat aplication...");



    }

}
//sandesh sangram shinde sandesh sangram shinde sandesh sangram shinde sandesh sangram shinde