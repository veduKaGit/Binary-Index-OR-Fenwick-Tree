//time complexity = O(N * logN) => because log(N) for update, which is called N times

//thus construction time is more than seg tree (it was O(N) there)


void updateBIT(int BITree[], int n, int index, int val)   //discussed earlier
{ 
    index = index + 1; 
     
    while (index <= n) 
    { 
	    BITree[index] += val; 

	    index += index & (-index); 
    } 
}
 

int *constructBITree(int arr[], int n) 
{
	int *BITree = new int[n+1];   //create new array => size n+1 => IMP
	
	for (int i=1; i<=n; i++)    //initialize all elements of BITree array = 0
		BITree[i] = 0; 

	 
	for (int i=0; i<n; i++)     //basically update operation se hi tree bana diya => loop runs [0,n-1] on arr[i] => thus update function will update [1,n] in BITree
		updateBIT(BITree, n, i, arr[i]);  //here val = new_val-old_val = arr[i]-0 = arr[i]

	return BITree; 
} 
