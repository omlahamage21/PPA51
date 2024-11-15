import java.util.*;

class collections2
{
    public static void main(String A[])
    {
        Stack <String> sobj = new Stack<String>();

        sobj.push("C programming");
        sobj.push("c++ programming");
        sobj.push("Java programming");
        sobj.push("python programming");

        System.out.println(sobj);

        String ret = sobj.pop();
        String rret = sobj.pop();

        System.out.println(ret);
        System.out.println(rret);

        

        System.out.println(sobj);

    }
}