

https://leetcode.com/problems/sort-characters-by-frequency/submissions/



class Solution {
  public:
  static bool cmp(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.second==b.second)
    return a.first<b.first;
                                               //--------------> tc=O(n) + O(m Log m) where n is total number of elements and m is total number of distinct elements
                                               ---------------->sc=O(n)
    return a.second>b.second;
}

    string frequencySort(string s) {
    unordered_map<char,int>mp;
     string ans;
    for(int i=0;i<s.length();i++){
      mp[s[i]]++;
    }

vector<pair<char,int>>v;
for(auto i:mp)
  v.push_back({i.first,i.second});


sort(v.begin(),v.end(),cmp);

for(int i=0;i<v.size();i++)
{
  while(v[i].second--)
  ans+=v[i].first;
}
return ans;


  }
};