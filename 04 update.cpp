// in this file, we are considering that the Binary Index Tree array is ALREADY constructed
// we just want to implement the update function
// update(i) updates the original array at index i, and also updates the fenwick tree

// time complexity: O(log N)

// like the previous files=> here also => consider => operation of prefix sum (ie. fenwick tree ka getSum(i) returns sum of arr elements from range [0,i])

// fenwick tree can have some other operation as well(eg prefix xor, prefix or, etc).....we are just considering an example here (of prefix sum)



void updateBIT(int BITree[], int n, int index, int val) 
{ 
    
    index = index + 1;   //
  
     
    while (index <= n) 
    { 
   
    BITree[index] += val; 
  
   
    index += index & (-index); 
    } 
}
 
