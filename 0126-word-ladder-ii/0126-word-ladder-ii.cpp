class Solution {
public:
    
      void possiblePaths(int level,const string& currWord,vector<string>& ds,unordered_map<string,vector<string>>& adj,vector<vector<string>>& res){
    if(level == 0){
        res.emplace_back(ds);
        return;
    }

    for(const auto& word: adj[currWord]){
        ds[level-1] = word;
        possiblePaths(level-1,word,ds,adj,res);
    }
}

vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> wordSet(wordList.begin(),wordList.end());

    if(wordSet.find(endWord) == wordSet.end())return {};

    queue<string> q;
    q.emplace(beginWord);
    wordSet.erase(beginWord);

    int level = 1;
    vector<vector<string>> res;
    unordered_map<string,vector<string>> adj;
    while(!q.empty()){
        int sz = q.size();

        unordered_set<string> visited;
        for(int i=0;i<sz;i++){
            string parentWord = q.front();
            q.pop();

            if(parentWord == endWord){
                vector<string> ds(level);
                ds[level-1] = endWord;
                possiblePaths(level-1,parentWord,ds,adj,res);
                return res;
            }

            string currWord = parentWord;
            for(auto& x: currWord){
                char original = x;
                for(char ch = 'a';ch <= 'z';ch++){
                    x = ch;
                    if(wordSet.find(currWord) != wordSet.end()){
                        if(visited.find(currWord) == visited.end()){
                            q.emplace(currWord);
                            visited.insert(currWord);
                        }

                        adj[currWord].emplace_back(parentWord);
                    }
                }
                x = original;
            }
        }
        level++;
        for(const auto& word: visited)wordSet.erase(word);
    }

    return res;
}
};