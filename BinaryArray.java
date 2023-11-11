public class binaryA {
    public static void main(String[] args)
    {
        int arr[]= {1,1,1,0,0,1,1,0,0,0};
        int count=0, res=0;
        int n = arr.length;

        //using the math.max function 
        // for(int i=0; i<n; i++)
        // {
        //     if(arr[i]==0)
        //     {
        //         count=0;
        //     }
        //     else{
        //         count++;
        //         res = Math.max(res, count);
        //     }
        // }


        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1] && arr[i]==1)
            {
                count++;
            }
            
        }
        System.out.println(count);
    }
}
