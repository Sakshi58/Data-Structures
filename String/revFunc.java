import java.util.*;
import java.io.*;

public class revFunc {
    public static void main(String [] args)
    {
        String s= "HelloWorld";
        StringBuilder rev= new StringBuilder();
        rev.append(s);
        rev.reverse();
        System.out.println(rev);
    }
}
