# Implementation-of-searching-in-cpp
## Objective
Explain and implement two core searching strategies in C++—Binary Search and Linear Search—highlighting when to use each and how they work step by step.

Software:
- MinGW C/C++ compiler
- Visual Studio Code
- Online C++ compiler

***

## 1. Binary search
### Explanation and theory
Binary search is a divide-and-conquer method that works only on a sorted array. It repeatedly checks the middle element of the current range and narrows the search to either the left or right half based on comparison with the target. Iterative versions run in $$\mathcal{O}(\log n)$$ time and use $$\mathcal{O}(1)$$ extra space. The array must be sorted before searching; when it is, binary search deterministically finds the item if present.[1][2][4]

### Algorithm
- Start
- Read the number of elements; input values into an array/vector
- Sort the array in nondecreasing order
- Display the sorted array
- Ask for the target value to locate
- Initialize pointers: start = 0, end = n − 1
- While start ≤ end:
  - mid = start + (end − start)/2
  - If arr[mid] == target: return mid
  - If target < arr[mid]: set end = mid − 1
  - Else: set start = mid + 1
- If loop ends without a match: return −1
- Optionally ask to repeat for another target
- End

***

## 2. Linear search
### Explanation and theory
Linear search scans elements from the beginning to the end, comparing each with the target until a match is found or the list ends. It works on both sorted and unsorted data. Time cost is $$\mathcal{O}(n)$$ in average and worst cases, with a best case of $$\mathcal{O}(1)$$ if the first element matches. Extra space is $$\mathcal{O}(1)$$. It’s simple, reliable for small arrays, and useful when sorting is unnecessary or too expensive.[1]

### Algorithm
- Start
- Define or read the array
- Read the target value
- For i from 0 to n − 1:
  - If arr[i] == target: return i
- If no match after the loop: return −1
- Print whether the element was found
- Repeat if needed
- End

***

## Conclusion
Binary search provides fast lookups on sorted arrays with $$\mathcal{O}(\log n)$$ time, while linear search offers simplicity and works on any dataset without preprocessing. Choosing between them depends on whether sorting is available or justified for the workload, balancing speed against setup cost and flexibility.
