// in this file, we are considering that the Binary Index Tree array is ALREADY constructed
// we just want to implement the getSum function
// getSum(i) returns sum of array elements of index [0,i] (like prefix sum)

// fenwick tree can have some other operation as well(eg prefix xor, prefix or, etc).....we are just considering an example here (of prefix sum)




int getSum(int BITree[], int index)   //we want sum from [0, index] wala range
{
	int sum = 0; 
 
	index = index + 1;   //VVIMP -> since fenwick tree mei 1st element is dummy node -> so main array mei index => equivalent to BITree array mei (index+1)
	 
	while (index>0)  //what we do in this while loop => add BITree[index] to sum=> then add BITree[parent(index)] to sum=> then add BITree[parent(parent(index))] to sum ... so on till we reach the dummy node => this basically gives us the sum from range [0,index] in the main array
  	{ 		
		sum += BITree[index]; 

		index = index - (index & (-index));  // parent(index) = index - (index & (-index)) => basically parent(index) = index with its last set bit removed
	} 
  
	return sum; 
} 
