import java.sql.*;          // 1

class Database
{
    public static void main(String arg[]) throws Exception
    {
        Class.forName("com.mysql.cj.jdbc.Driver");

        String URL = "jdbc:mysql://localhost:3306/ppa51";
        String Username = "root";
        String Password = "root";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URL,Username,Password);   // 2
        
        Statement sobj = cobj.createStatement();        // 3

        ResultSet robj = sobj.executeQuery(Query);      // 4

        while(robj.next())          // 5
        {
            System.out.print("RollNO : "+robj.getInt("RollNo")+"\t");
            System.out.print("Name : "+robj.getString("Name")+"\t");
            System.out.print("City : "+robj.getString("City")+"\t");
            System.out.println("Marks : "+robj.getInt("Marks"));                                    
        }
    }
}

// execute()            Create table
// executeQuery()       select
// executeUpdate()      delete / update / alter / insert











