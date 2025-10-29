class Solution {
public:
    string defangIPaddr(string address) {
        string add;
        for(int i=0;i<address.size();i++){
            if(address[i]!='.'){
                add.push_back(address[i]);
            }
            else{
                add.push_back('[');
                add.push_back('.');
                add.push_back(']');
            }
        }
        return add;
    }
};