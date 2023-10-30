import java.util.*;

public class Subarrs 
{ 
    static int arr[] = new int[]{1, 2, 1}; 
      
    // Prints all subarrays in arr[0..n-1] 
    static void subArray(List<Integer> nums) 
    { 
        int sum=0;
        HashSet<Integer> hs = new HashSet<Integer>();
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                for(int k=i;k<j;k++){
                    hs.add(nums.get(k));
                }
                sum = sum+hs.size()*hs.size();
                hs.clear();
            }
        }
        System.out.println(sum);
    } 
      
    // Driver method to test the above function 
    public static void main(String[] args)  
    { 
        List<Integer> list = new ArrayList<Integer>();
        list.add(1);
        list.add(2);
        list.add(1);
        subArray(list);      
    } 
} 
