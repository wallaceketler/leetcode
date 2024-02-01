class Solution {
public:
    string interpret(string command) {
        string final;
        for(size_t i = 0; i < command.size(); ++i){
            if(command[i] == 'G'){final += 'G';}
            else if(command[i] == '(' && command[i+1] == ')'){final+='o';}
            else if(command[i] == '(' && command[i+1] == 'a'){final+="al";}
        }
        return final;
    }
};