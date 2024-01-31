class Solution {
public:
    int smallestEvenMultiple(int n) {
        int x;
        int i=0;
        while(true){
            i++;
            if(i%2 == 0 && i%n == 0){
                x = i;
                break;
            } 
        }
        return x;
    }
};