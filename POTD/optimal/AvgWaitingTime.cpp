class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long int time = 0;
        long long int arrivalTime = 0;
        long long int finishTime = 0;
        int count = 0;
        for(int arr=0;arr<customers.size();arr++){
          long long int orderTime = customers[arr][0];
          arrivalTime = max(orderTime,arrivalTime);
          finishTime =  arrivalTime + customers[arr][1];
          time += finishTime - orderTime;
          count+=1;
          arrivalTime = finishTime;            
        }
        double ans = static_cast<double>(time) / count;
        return ans;
    }
}
