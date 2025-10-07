class Solution {
public:
    string convert(string s, int num) {
        vector<string> arr(num, "");
        
        int i=0;
        while(i<s.size()){
            for(int j=0;j<num && i<s.size();j++) arr[j]+= s[i++];
            for(int j=num-2;j>0 && i<s.size();j--) arr[j]+= s[i++];
        }
        
        string ans="";
        for(auto &x:arr) ans+= x;
        
        return ans;
    }
};
