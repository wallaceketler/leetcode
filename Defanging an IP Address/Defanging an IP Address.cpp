class Solution {
public:
    string defangIPaddr(string address) {
        for(size_t i = 0; i < address.size(); ++i){
            if(address[i] == '.'){
                address.insert(i,1,'[');
                address.insert(i+2,1,']');
                i = i + 2;
            }
        }
        return address;
    }
};