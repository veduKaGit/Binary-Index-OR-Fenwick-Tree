used for 2 types of operations:
1. PREFIX operations (sum, poroduct, xor, or, etc)  -> from 0th to ith index
2. update a value


represented in form of an array


time complexity: O(N* logN)  .... for construction
               : O(log N) .... for prefix operation OR update operation
space complexity: Theta(1 + N) //precisely this value


its almost similar to segment tree, but:
1. here the tree (represented as an array) node can have more than 2 children
2. construction is SLOWER, but its FASTER than seg tree in range/update operations 



example we want sum in range->

sum(l,r) = sum(0,r) - sum(0,l-1)
seg tree    fenwick    fenwick

so same example can be done by both types of trees
