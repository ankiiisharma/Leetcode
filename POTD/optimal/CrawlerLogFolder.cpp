class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        int n = logs.size();
        for(int i=0;i<n;i++){
            if(logs[i]== "../"){
                if(count > 0){
                count -= 1;
                }
            }
            else if(logs[i] == "./"){
                count += 0;
            }
            else{
                count += 1;
            }
        }
        return count;
    }
};
