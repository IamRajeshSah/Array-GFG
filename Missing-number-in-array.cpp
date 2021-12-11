#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) {
        // Your code goes here
        int totalsum = n*(n+1)/2;
        
        for(int i = 0; i < arr.size(); i++){
            totalsum -= arr[i]; 
        }
        
        return totalsum;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> arr[i];
        Solution obj;
        cout << obj.MissingNumber(arr, n) << "\n";
    }
    return 0;
}