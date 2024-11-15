class Arithmatic
{
    public int No1;
    public int No2;

    public Arithmatic()
    {
        System.out.println("Inside default constructor");
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithmatic(int A, int B)
    {
        System.out.println("Inside parametarised constructor");
        this.No1 = A;
        this.No2 = B;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }

    public int Substaction()
    {
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }
}

class Encapsulation
{
    public static void main(String Arg[])
    {
        System.out.println("Inside Main Function");

        Arithmatic aobj1 = new Arithmatic();
        Arithmatic aobj2 = new Arithmatic(11,10);

        int Ret = 0;

        Ret = aobj2.Addition();
        System.out.println("Addition is : "+Ret);

        Ret = aobj2.Substaction();
        System.out.println("Substration is  : "+Ret);

    }
}