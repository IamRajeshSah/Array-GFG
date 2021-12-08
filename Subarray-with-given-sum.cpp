#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>ans;
        int left=0;
        int right=0;
        int curr_sum = 0;
        bool flag = false;
        
        for(int i = 0; i < n; i++){
            curr_sum += arr[i];
            
            if(curr_sum >= s){
                right = i;
                
                while(curr_sum > s && left < right){
                    curr_sum -= arr[left];
                    left++;
                }
            }
            if(curr_sum == s){
                flag = true;
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }
        if(flag == false){
            ans.push_back(-1);
        }
        
        return ans;
    }
};

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}