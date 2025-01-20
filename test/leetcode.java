package test;


public class leetcode {
    static int minimumLength(String s) {
        int n=s.length();
        //abaacbcbb
        //aaabbbbcc
        // 3  4   2
        // 1  2   2 
        // 1+2+2=
        // 5    2   <3
        // 1    2   freq
        int count=0;
        if(n<=2){
            
        }
        return n;

    }
    public static void main(String[] args) {
       int n =  minimumLength("abaacbcbb");
        System.out.println(n);
        
    }
    
}
