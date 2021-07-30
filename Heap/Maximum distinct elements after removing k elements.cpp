// CPP implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

// function to find maximum distinct elements
// after removing k elements
int maxDistinctNum(int a[], int n, int k)
{
int i;
multiset<int> s;
// making multiset from given array
		for(i=0;i<n;i++){
			if(s.find(a[i])==s.end()||k==0)
			s.insert(a[i]);
			else
			{
				k--;
			}
		}

		if(k!=0)
		return s.size()-k;
		else{
			set<int> st;
			for(auto it:s){
				st.insert(it);
			}
			return st.size();
		}
}

// Driver Code
int main()
{
	int arr[] = { 5, 7, 5, 5, 1, 2, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;

	// Function Call
	cout << "Maximum distinct elements = "
		<< maxDistinctNum(arr, n, k);
	return 0;
}
