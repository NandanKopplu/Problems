class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>row(numRows, "");
        bool flag = true;
        int index = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(index == numRows-1)
            {
                flag = 0;
            }
            if(index == 0) 
            {
                flag = 1;
            }
            row[index] += s[i];
            index = flag ? index+1 : index-1;
        }
        string ans = "";
        for(string k : row)
        ans += k;
        return ans;
    }
};