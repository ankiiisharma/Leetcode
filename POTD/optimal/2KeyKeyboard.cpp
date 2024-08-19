
class Solution {
public:
    int t[1001][1001];
    int Solve(int currA, int copyA, int n){
        if(currA == n){
            return 0;
        }


        if(currA > n){
            return 10100110;
        }

        if(t[currA][copyA] != -1){
            return t[currA][copyA];
        }

        int copypasteAll = 1 + 1 + Solve(currA + currA, currA, n);
        int pasteonly = 1 + Solve(currA + copyA, copyA, n);

        return t[currA][copyA] = min(copypasteAll, pasteonly);
    }

    int minSteps(int n) {
       if( n == 1) return 0;
        memset(t,-1,sizeof(t));
       return 1 + Solve(1,1,n);
    }
};
