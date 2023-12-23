class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        s.insert({0,0});
        int x=0,y=0;
        for(char i: path){
            if(i == 'E') x++;
            else if(i == 'N')y++;
            else if(i == 'W') x--;
            else y--;
            
            if(s.find({x,y}) != s.end()) return true;
            else s.insert({x,y});
        }
        return false;
        
            
    }
};

