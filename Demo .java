class Marvellous
{
    public int A;
    protected float B;
    private int C;

    public Marvellous()
    {
        A = 10;
        B = 10.20f;
        C = 20;
    }

    void Display()
    {
        int i = 11;
        System.out.println("Value of 1 is : "+i);
    }
}

class Demo
{
    public static void main(String Abc[])
    {
        Marvellous mobj = new Marvellous();

        mobj.Display();
    }
}