import java.util.*;

class collections
{
    public static void main(String A[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println(lobj);

        lobj.addFirst(5);

        System.out.println(lobj);

        Iterator iobj = lobj.iterator();
        while(lobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }
}