//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <bits/stdc++.h>
using namespace std;


int Kadanealgorithm(int arr[], int n){
    int max_current = arr[0];
    int max_global  = arr[0];
    
    for(int i=1; i<n; i++){
        max_current = max(arr[i], max_current+arr[i]);    
        if(max_current > max_global){
            max_global = max_current;
        }
    }
    return max_global;
}
int main() {
	//code
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int j=0; j<n; j++){
	        cin >> arr[j];
	    }
	    cout<<Kadanealgorithm(arr,n)<<endl;
	}
	return 0;
}