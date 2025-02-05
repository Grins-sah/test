#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
    int dp[505][505];
    int helper(string& s,string& t,int i,int j){
        int n = s.length();
        int m = t.length();
        if(i >= n && j>= m) return INT_MAX;
        else if(i >= n) return INT_MAX;
        else if(j>=m) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int res = helper(s,t,i+1,j);
        char temp = s[i];
        int k = -1;
        for(int idx = j;idx<m;idx++){
            if(temp==t[idx]){
                k = idx;
                break;
            }
        }
        if(k==-1) return dp[i][j] = 1;
        int ans = helper(s,t,i+1,k+1);
        if(ans!=INT_MAX){
            res = min(res,ans+1);
        }
        return dp[i][j]= res;
    }
    int shortestUnSub(string S, string T) {
        return helper(S,T,0,0);
    }
    int main(){
        memset(dp,-1,sizeof(dp));
        cout<<shortestUnSub("euzuiiocdznexxcionjgynatrsieiiexsyxdawnqndxnqdrialwwzcqccozoojwefnjoyvttmreonpqpdyowqtgjgrvsggjllwmdkngbyynnarwvescpagleusaxfpmdsxqfdfhlcfmieazzevfjroggoxxhmyyqkcslmnywaaforajughirbqaodcvwzuildonxznowgvwcdkhezhgkyigvtrywlhwpwjaiiqhtehopouigfixlskbzfzofljnokbmlhvbuomxqecvztdcalyiezisfoapdtxiyechisopvfllvrkyjdwrtoemehjfvirpqkxcyakocnhalltadkajlwspqoanajlvguzszkswerfgxbrdfhkdzkiirufhywwlgumnbogiirzvixiangoslcpuodqbkrfbtlysgznuwspulfkqcoapxjnaazxehcqrdvzbvpulvfazabokvuopfrwhikfgkfhojoilxwggwmeg","wpausimrzktaecfahrwvcqnvkynejxdnrdhpcketnqoyyjafnkhgorcedzpyjlijsmvjybdefjmpjnwhhzdhgxcntjuzfrluiugmgieinpnuumjgdbffaxgpseouhxkftnxllhaspgbwhfooashybvwhilawkiauudqluhbuirnihuhncordomubmcwfxucyqaxejovlvqfjnckouqqdjjdewvsiwdaybwtdwcfqzltgcaiamtkbletoyeurblkrarfmcdqjymyosptcbhjkhjezclfqzmmeimooanfhjhytxwwywjyrdpckfksqjicuflopduueyybkchjtlxllivokjzrgsroygyzimlrgtfqlcvwwppckjtdblgqscosehjxunwayysmiatogdravwylpejdebnrxzsyfqmfwuynysd");
    }
 