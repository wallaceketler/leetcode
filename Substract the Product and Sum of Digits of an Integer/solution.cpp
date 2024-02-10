class Solution {
public:
    int subtractProductAndSum(int n) {
        string number = to_string(n);
        int product = 1;
        int sum = 0;
        for(size_t i = 0; i < number.size(); ++i){
            int digit = number[i] - '0'; //isso converte char p/ int em c++
            product*=digit;
            sum+=digit;
        }
        return product - sum;
    }
};