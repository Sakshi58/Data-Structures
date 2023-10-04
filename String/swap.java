import java.util.*;

public class swap {
    public static void main(String[] args)
    {
        String s1 = "Hello";
        String s2 = "People";
        String temp;
        System.out.println("Before swaping : \ns1 = "+s1+" \n s2= "+s2);

        ///swap
        temp = s1;
        s1= s2;
        s2 = temp;
        System.out.println("After swaping : \n s1= "+s1+" \n s2= "+s2);
    }
}
