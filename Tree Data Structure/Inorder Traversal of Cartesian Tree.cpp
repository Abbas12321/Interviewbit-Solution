int maxVal(int i, int j, vector<int>& A)
{
    int maxi = i;
    for (auto p = i+1; p<=j; ++p)
        if (A[maxi]<A[p])
            maxi = p;
    return maxi;
}

TreeNode* makeTree(int i, int j, vector<int>& A)
{
    if (i>j)
        return NULL;
    auto r = maxVal(i, j, A);
    TreeNode* node = new TreeNode(A[r]);
    node->left = makeTree(i, r-1, A);
    node->right = makeTree(r+1, j, A);
    return node;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    if (A.empty())
        return NULL;
    return makeTree(0, A.size()-1, A);
}
