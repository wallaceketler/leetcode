class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(size_t i = 0; i < s.size(); ++i){
            if(s[i] == 'I' && 
                (s[i+1] == 'V' ||
                 s[i+1] == 'X' ||
                 s[i+1] == 'L' ||
                 s[i+1] == 'C' ||
                 s[i+1] == 'D' ||
                 s[i+1] == 'M'))
                {
                    sum -= decimalNumber(s[i]);
                }
            else if(
                s[i] == 'V' && 
                (s[i+1] == 'X' ||
                 s[i+1] == 'L' ||
                 s[i+1] == 'C' ||
                 s[i+1] == 'D' ||
                 s[i+1] == 'M')) 
                {
                    sum -= decimalNumber(s[i]);
                }
            else if(
                s[i] == 'X' && 
                (s[i+1] == 'L' ||
                 s[i+1] == 'C' ||
                 s[i+1] == 'D' ||
                 s[i+1] == 'M')) 
                {
                    sum -= decimalNumber(s[i]);
                }
            else if(
                s[i] == 'L' && 
                (s[i+1] == 'C' ||
                 s[i+1] == 'D' ||
                 s[i+1] == 'M')) 
                {
                    sum -= decimalNumber(s[i]);
                }
            else if(s[i] == 'C' && 
                (s[i+1] == 'D' ||
                 s[i+1] == 'M'))]
                {
                    sum -= decimalNumber(s[i]);
                }
            else if(s[i] == 'D' && 
                s[i+1] == 'M')
                {
                    sum -= decimalNumber(s[i]);
                }
            else{sum += decimalNumber(s[i]);}
        }
        return sum;
    };

    int decimalNumber(char s) {
        if(s == 'I'){ return 1;}
        else if(s == 'V'){ return 5; }
        else if(s == 'X'){ return 10; }
        else if(s == 'L'){ return 50; }
        else if(s == 'C'){ return 100; }
        else if(s == 'D'){ return 500; }
        else if(s == 'M'){ return 1000; }
        return 0;
    }
};