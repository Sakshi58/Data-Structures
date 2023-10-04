public class Pallindrome {
    public static void main(String[] args)
    {
        String s1= "abcba";
      

        char a[]= s1.toCharArray();
        char b[]= new char[a.length];

        int n = a.length;
        for(int i=n-1, j=0; i>=0 && j<n;  i--, j++)
        {
            b[j] =a[i]; 
        }

        // converting char array to string
        
        String revs= new String(b);

        //comparing the strings
        if (s1.equals(revs)) {
            System.out.println("Yes, it's a palindrome");
        } else {
            System.out.println("No, it's not a palindrome");
        }

        //comparing the char arrays 
        // for(int i=0; i<n ; i++)
        // {
        // if(a[i]==b[i])
        // {
        //     System.out.println("yes");
        // }
        // else{
        //     System.out.println("no");
        // }
        // }    
        

    }
}
