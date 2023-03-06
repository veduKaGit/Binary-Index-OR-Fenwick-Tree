used for 2 types of operations:
1. PREFIX operations (sum, poroduct, xor, or, etc)
2. update a value


represented in form of an array


time complexity: O(N* logN)  .... operations take logN time, but pre-processing takes more time
space complexity: O(N)


its almost similar to segment tree, but:
1. here the tree (represented as an array) node can have more than 2 children
2. its FASTER than seg tree



example we want sum in range->

sum(l,r) = sum(0,r) - sum(0,l-1)
seg tree    fenwick    fenwick

so same example can be done by both types of trees
