#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0)return 0;
        int maxcount = 0;
        unordered_set<int>set;
        int l = 0;
        for(int r=0; r<n; r++){
            if(set.find(s[r]) != set.end()){
            while(l<r && set.find(s[r]) != set.end()){
                set.erase(s[l]);
                l++;
            }
            }
            set.insert(s[r]);
            maxcount = max(maxcount, r-l+1);
        }
        return maxcount;
    }

int main(){
    string s;
    cin >> s;
    cout<<lengthOfLongestSubstring(s)<<endl;

}