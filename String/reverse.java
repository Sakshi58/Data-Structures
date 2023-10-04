///---------String reverse function------///////


import java.util.*;

class reverse
{
    //method 1 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s= "sakshi";
        //s= sc.nextLine();
        char a[] ={'s', 'a', 'k','s', 'h','i'};

        int n= a.length;
        System.out.println(n);
        for(int i=n-1; i>=0; i--)
        {
            System.out.print(a[i]);
        }
    }
}