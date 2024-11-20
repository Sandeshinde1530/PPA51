
class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}
class Derived extends Base
{
     public Derived()
    {
        System.out.println("Inside Derived constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}
class SingleLevel
{
    public static void main(String A[])
    {
            System.out.println("Inside main Method");
            Derived dobj = new Derived();

            dobj.Fun();
            dobj.Gun();
    }
}