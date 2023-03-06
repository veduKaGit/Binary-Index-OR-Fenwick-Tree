use case example:
we are given an array

we can perfrom 2 types of operations:
1. find_sum(i) -> get sum from 0th to ith index
2. update(i,x) -> update value at index i to x

Naive approach:
time = O(N) ... for fund_sum
     = O(1) ... for update
     
Prefix sum approach:
time = O(1) ... for find_sum
     = O(N) ... for update
     
     
Thus both apporaches above are not optimized.

so, use segment tree or binary index tree
