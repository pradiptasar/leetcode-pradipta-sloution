class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        bool dist =  true;
        int count =0;

        for(int i =0 ;i<arr1.size();i++){
            dist = true;
            for(int j=0; j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j]) <= d || abs(arr2[j]-arr1[i]) <=d){
                    dist = false;
                    break;
                }
            }
            if(dist){
                count++;
            }
        }

        return count;
        
    }
};