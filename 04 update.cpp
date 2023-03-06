// in this file, we are considering that the Binary Index Tree array is ALREADY constructed
// we just want to implement the update function
// update(i) updates the fenwick tree

// time complexity: O(log N)

// like the previous files=> here also => consider => operation of prefix sum (ie. fenwick tree ka getSum(i) returns sum of arr elements from range [0,i])

// fenwick tree can have some other operation as well(eg prefix xor, prefix or, etc).....we are just considering an example here (of prefix sum)



void updateBIT(int BITree[], int n, int index, int val)   // here val = new_val-old_val ... val is basically the difference
{ 
    
    index = index + 1;   //VVIMP -> since fenwick tree mei 1st element is dummy node -> so main array mei index => equivalent to BITree array mei (index+1)
     
    while (index <= n)   //update => all those nodes in fenwick tree => which had 'index' within their sum of elements range [a,b]
    { 
        BITree[index] += val; //update the sum in range [a,b] where a<=index<=b

        index = index + (index & (-index)); // update all these indices => ALMOST same as getSum wala => BUT here theres index + (), udhar -ive tha => RAT LO!
    } 
}
 
