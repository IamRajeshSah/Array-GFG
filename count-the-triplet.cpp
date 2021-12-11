#include<iostream>
using namespace std;

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int count = 0;
	    sort(arr, arr + n);
	    
	    for(int i = n-1; i>=0; i--){
	        int left = 0;
	        int right = i-1;
	        
	        while (left < right){
	            if(arr[left] + arr[right] == arr[i]){
	                left++;
	                right--;
	                count++;
	            }
	            else if(arr[left] +arr[right] < arr[i]){
	                left++;
	            }
	            else{
	                right--;
	            }
	        }
	    }
	    return count;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }
    return 0;
}