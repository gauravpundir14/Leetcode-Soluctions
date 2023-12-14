class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int, int>m1, m2;
        vector<int>v1(mat.size(), 0), v2(mat[0].size(), 0);
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                m1[mat[i][j]]=i;
                m2[mat[i][j]]=j;
            }
        }
        for(int i=0; i<arr.size(); i++){
            v1[m1[arr[i]]]++;
            v2[m2[arr[i]]]++;
            if(v1[m1[arr[i]]]==mat[0].size() || v2[m2[arr[i]]]==mat.size()){return i;}
        }
        return -1;
    }
};