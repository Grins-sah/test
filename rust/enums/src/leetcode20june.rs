impl Solution {
    pub fn max_distance(s: String, k: i32) -> i32 {
        let n = s.len();
        let s_chars:Vec<char> = s.chars().collect();
        let mut a = 0;
        let mut b = 0;
        let mut N = 0;
        let mut S = 0;
        let mut E = 0;
        let mut W = 0;
        let mut ans = i32::MIN;
        for i in 0..n{
            match s_chars[i] {
                'N'=>{
                    b+=1;
                    N+=1;
                }
                'S'=>{
                    b-=1;
                    S+=1;
                }
                'E'=>{
                    a+=1;
                    E+=1;
                }
                'W'=>{
                    a-=1;
                    W+=1
                }
                _=>{}

            }
            let mut temp = a.abs()+b.abs();
            let mut kk = k;
            if N!=0 && S!=0 {
                temp+=2*kk.min(N.min(S));
                kk-=kk.min(N.min(S));
            }
            if W!=0 && E!=0 {
                temp+=2*kk.min(W.min(E));
                kk-=kk.min(W.min(E));
            }
            ans =  ans.max(temp);

        }
        
        return ans;
    }
}