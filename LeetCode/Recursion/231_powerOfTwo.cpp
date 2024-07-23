class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1){
            return true;
        } 
        
        isPowerOfTwo(n/2);

        return false;
    }
};