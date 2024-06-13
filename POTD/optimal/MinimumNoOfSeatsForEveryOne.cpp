class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans = 0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int i = 0;
        int j = seats.size() - 1;

        while(i<=j){
            ans += abs(students[i] - seats[i]);
            i++;
        }
      return ans;
    }
};