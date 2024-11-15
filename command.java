class command
{
    public static void main(String Arg[])
    {
        System.out.println("Number of command line arguments are : "+Arg.length);

        for(int i = 0; i< Arg.length; i++)
        {
            System.out.println(Arg[i]);
        }
    }
}

// javac coomad.java
// java coomand hello 21 marvellous