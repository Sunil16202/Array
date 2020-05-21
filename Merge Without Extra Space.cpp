//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/
#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n){
    for(int i=n-1; i>=0; i--){
        int j;
        int last = arr1[m-1];
        
        for(j=m-2; j >= 0 && arr1[j] > arr2[i]; j--){
            arr1[j+1] = arr1[j];
        }
        
        if(j != m-2 || last > arr2[i]){
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }	
        
    }
    //print
    for(int i=0; i<m; i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    
    
}
int main() {
	//code
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int m;
	    int n;
	    cin >> m;
	    cin >> n;
	    int arr1[m];
	    int arr2[n];
	    for(int j=0; j<m; j++){
	        cin >> arr1[j];
	    }
	    for(int j=0; j<n; j++){
	        cin >> arr2[j];
	    }
	    merge(arr1,m,arr2,n);
	    cout<<endl;
	}
	return 0;
}