class Solution {
public:
    int climbStairs(int n) {
        if (n==0 || n==1) return n;
        int* steps = new int[n+1];
        for (int i=0; i<=n; i++) steps[i] = 0;
        steps[0] = 1; steps[1] = 1;
        for (int i=2; i<=n; i++){
            steps[i] = steps[i-1]+ steps[i-2];
        }
        
        
        int res = steps[n];
        delete steps;
        return res;
    }
    
    int max(int a, int b){
        if (a>b) return a;
        return b;
    }
};