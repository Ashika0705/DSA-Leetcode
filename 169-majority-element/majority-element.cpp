class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int count=1;
        int a = arr[0];

        
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==a){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            a=arr[i];
            count=1;
        }
        
    }
    return a;
    }
};

 