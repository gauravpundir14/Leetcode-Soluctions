class Solution {
public:
    int minMaxDifference(int num) {
        char c;
        string str=to_string(num);
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]!='9'){
                c=str[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(str[i]==c){
                str[i]='9';
            }
        }
        string st=to_string(num);
        char d=st[0];
        for(int i=0;i<n;i++){
            if(st[i]==d){
                st[i]='0';
            }
        }
        int a=stoi(str);
        int b=stoi(st);
        return a-b;
    }
};