public class Solution {
    
    public int numTrees(int n) {
     int c[] = new int[n + 1]; 
    Arrays.fill(c, 0); 

    c[0] = 1; 
    c[1] = 1; 
  

    for (int i = 2; i <= n; i++)  
    { 
        for (int j = 1; j <= i; j++)  
        { 

            c[i] = c[i] + (c[i - j] *  
                             c[j - 1]); 
        } 
    } 
  
    return c[n]; 
    } 
}
