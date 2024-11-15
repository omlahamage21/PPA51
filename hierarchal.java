class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base      //class Derived : public Base in c++
{
    public int X,Y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class DerivedX extends Base
{
    public int P,Q;

    public DerivedX()
    {
        System.out.println("inside derivedx constructor");
    }
    public void Sun()
    {
        System.out.println("inside derivedx Sun ");
    }

}
class hierarchal
{
    public static void main(String A[])
    {
        System.out.println("Inside main method ");

        Derived dobj1 = new Derived();

        DerivedX dobj2 = new DerivedX();

        dobj1.Fun();
        dobj1.Gun();

        dobj2.Fun();
        dobj2.Sun();
    }
}