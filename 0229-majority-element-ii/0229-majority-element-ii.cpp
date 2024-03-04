class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0, cnt2=0;
        int el1=-1e9,el2=-1e9;
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2!=nums[i]){
                cnt1=1;
                el1=nums[i];
                
            }
            else if(cnt2==0 && el1!=nums[i]){
                cnt2=1;
                el2=nums[i];
                
            }
                
            else if(nums[i]==el1){
                cnt1++;
                
            }
            else if(nums[i]==el2){
                cnt2++;
                
            }
                
            else{
                cnt1--;
                cnt2--;
                
            }
                
        }
         vector<int> result;
        int cn1=0,cn2=0;
        for(int i=0;i<n;i++){
            
            if(nums[i]==el1){
                cn1++;
            }
          if(nums[i]==el2){
                cn2++;
            }
        }
            int mini=(n/3)+1;
            if(cn1>=mini){
                result.push_back(el1);
                
            }
            if(cn2>=mini){
                result.push_back(el2);
                
            }
            
        return result;
    }
};