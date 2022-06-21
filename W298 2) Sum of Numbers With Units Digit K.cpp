class Solution {
public:
    int minimumNumbers(int sum, int k) {
        // let n no.s be A1, A2, ......An
        // A1+ A2 +........An= k+10*a1 + k+10*a2 + ........+ k+10*an
        // A1 + A2 + .... + An= n*k + 10(a1+ a2 + .... + an)
        // Asum = n*k + 10*asum
        // unit digit of Asum == n*k --> since n*k is added to 10*something.
        
        if(sum==0) return 0;
        for(int i=1; i<=10; i++){
            if(sum%10 == (i*k)%10 &&  i*k <= sum) return i;
        }
        return -1;
    }
};
