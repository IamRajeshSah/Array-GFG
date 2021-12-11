#include<iostream>
using namespace std;

class Solution
{
    public:
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int curr_sum = 0;
        int max_sum = INT_MIN;
        
        for(int i = 0; i < n; i++){
            curr_sum += arr[i];
            
            if(curr_sum >= max_sum){
                max_sum = curr_sum;
            }
            
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        
        return max_sum;
    }

};
int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}