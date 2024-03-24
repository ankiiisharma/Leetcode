class Solution {
public:
    bool halvesAreAlike(string s) {
        int n= s.length();
        int i=0;
        int j=ceil(n/2);

        int countFirst = 0;
        int countSecond = 0;

        for(int i=0;i<j;i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                countFirst += 1;
            }
        }
        for(int i=j;i<n;i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                countSecond += 1;
            }
        }

      if(countFirst == countSecond){
        return true;
      }
    return false;
    }
};