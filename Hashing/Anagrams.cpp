vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int>> res;
    map<string, vector<int>> hash;
    
    for (auto i = 0; i < A.size(); ++i) {
        string temp = A[i];
        sort(temp.begin(), temp.end());
        hash[temp].emplace_back(i+1);
    }
    
    for (const auto& it : hash)
        res.emplace_back(move(it.second));
    return res;
}
