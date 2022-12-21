#include <iostream>
using namespace std;

int climbStairs(int n) {
        
        //base case
        if(n == 1) {
            return 1;
        }

        if(n == 2) {
            return 2;
        }

        // recursive call
        //either jump from n-1 stair or n-2 stair
        return climbStairs(n-1) + climbStairs(n-2);
    }

int main()
{
    int stairs = 8;
    int ans = climbStairs(stairs);
    cout << ans << endl;
    
    return 0;
}