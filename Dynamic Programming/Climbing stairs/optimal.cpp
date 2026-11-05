class Solution {
public:
    int climbStairs(int n) {
        
       if (n<= 2) return n;

       int prev1, prev2, curr;

        prev2 = 1; // for 1 step , it is achieved in 1 way
        prev1 = 2;  // for 2 step, it is achieved in 2 ways, first way is 1 + 1 step, or direct 2 steo
       for(int i = 3; i<=n; i++){
        curr = prev1 + prev2; // Now calculate the next no. of ways for the next step
        // always carring the memory of previous two values
        prev2 = prev1;
        prev1 = curr;
       }
       return prev1;
    }
};
