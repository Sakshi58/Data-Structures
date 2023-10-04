import java.util.*;
import java.io.*;
public class SortStr
{
    public static void main(String[] args)
    {
        String s=" speciality";

        // converting string to char array
        char a[] = s.toCharArray();

        System.out.println("Before sorting: "+s);
        
        /// sorting the array using Arrays.sort function
        Arrays.sort(a);

        ////storing the sorted into string

        String s1= new String(a);

        System.out.println("After sorting: "+s1);
    }
}