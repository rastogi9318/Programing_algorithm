#include<bits/stdc++.h>
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
       int line=1,count=0;
        for(int i=0;i<s.length();i++){
            if(count+widths[s.at(i)-'a']<=100){
                count+=widths[s.at(i)-'a'];
            }
            else{
                line++;
                count=widths[s.at(i)-'a'];
            }
        }
        vector<int> res;
        res.push_back(line);
        res.push_back(count);
        return res;
    }
};
