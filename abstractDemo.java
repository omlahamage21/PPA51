abstract class Arithmatic
{
    abstract public int Addition(int A, int B);
    abstract public int Substraction(int A, int B);
    public int Multiplication(int A, int B)
    {
        return A * B;
    }
}

class Marvellous extends Arithmatic
{
    public int Addition(int A, int B)
    {
        return A+B;
    }
    public int Substraction(int A, int B)
    {
        return A-B;
    }
}

class abstractDemo
{
    public static void main(String Arg[] ) 
    {
        Marvellous mobj = new Marvellous();

        System.out.println(mobj.Addition(11, 10));
        System.out.println(mobj.Substraction(11, 10));
        System.out.println(mobj.Multiplication(11, 10));
    }
}