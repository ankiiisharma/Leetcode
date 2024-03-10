class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>answer;

        map<int,int>nums1Map;
        map<int,int>nums2Map;

        for(int i=0;i<nums1.size();i++){
            nums1Map[nums1[i]]++;
        }

        for(int j=0;j<nums2.size();j++){
            nums2Map[nums2[j]]++;
        }

      for(auto it1=nums1Map.begin();it1!=nums1Map.end();it1++){
          for(auto it2=nums2Map.begin();it2!=nums2Map.end();it2++){
              if(it1->first == it2->first){
                  answer.push_back(it1->first);
              }
          }
      }
        
    return answer;
    }
};
