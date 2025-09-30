# Sorting_in_cpp


## Aim
To implement and understand various sorting algorithms using C++, analyze their time and space complexities, and compare their performance based on different input sizes.

---

## Objectives
- Understand the working of popular sorting algorithms:
  - Bubble Sort  
  - Selection Sort  
  - Insertion Sort  
  - Merge Sort  
  - Quick Sort  
- Implement these algorithms in C++.  
- Analyze and compare their **time and space complexity**.  
- Visualize sorting mechanisms using **flowcharts**.  
- Construct tables for performance comparison.  

---

## Theory
**Sorting** is the process of arranging data in a particular order (ascending or descending).  
Efficient sorting is crucial because it directly affects the performance of other algorithms like **searching** and **merging**.

Sorting algorithms can be classified based on:  
- **Time Complexity:** Best, Average, Worst case  
- **Space Complexity**  
- **Stability:** Whether relative order of equal elements is maintained  
- **Method:** Comparison-based or Non-comparison-based  

---

## Sorting Algorithms Overview

| Algorithm       | Time Complexity (Worst) | Stability  | Method             |
|-----------------|--------------------------|------------|--------------------|
| **Bubble Sort** | O(n²)                   | Stable     | Comparison-based   |
| **Selection Sort** | O(n²)                | Unstable   | Comparison-based   |
| **Insertion Sort** | O(n²)                | Stable     | Comparison-based   |
| **Merge Sort**  | O(n log n)              | Stable     | Divide & Conquer   |
| **Quick Sort**  | O(n²) (Avg O(n log n))  | Unstable   | Divide & Conquer   |

---

## Descriptions

### 1. Bubble Sort (Stable, O(n²))
- Repeatedly compares adjacent elements.  
- Swaps them if they are in the wrong order.  
- Continues until the array is sorted.  
---

### 2. Selection Sort (Unstable, O(n²))
- Finds the minimum element from the unsorted portion.  
- Places it at the beginning.  

---

### 3. Quick Sort (Unstable, O(n²), Avg O(n log n))
- Divide-and-conquer approach.  
- Selects a pivot and partitions the array.  
- Recursively sorts partitions.  

---


## Time & Space Complexity Table (Quick Sort Example)

| Case        | Time Complexity | Space Complexity |
|-------------|-----------------|------------------|
| **Best**    | O(n log n)      | O(log n)         |
| **Average** | O(n log n)      | O(log n)         |
| **Worst**   | O(n²)           | O(log n)         |

---


## Algorithms

## Sorting Algorithms  

### 1. Quick Sort Algorithm  
- **Choose a pivot element** (commonly the last element).  
- **Partition the array**:  
  1. Initialize index `i = low - 1`.  
  2. Traverse from `low` to `high - 1`:  
     - If `arr[j] < pivot`, increment `i` and swap `arr[i]` with `arr[j]`.  
  3. Place the pivot in its correct position by swapping `arr[i+1]` with `arr[high]`.  
- **Recursive step**:  
  - Apply Quick Sort on the left sub-array (`low` to `pi - 1`).  
  - Apply Quick Sort on the right sub-array (`pi + 1` to `high`).  
- **Base case**: Stop when `low >= high`.  

---

### 2. Selection Sort Algorithm  
- Start from the first element of the array.  
- For each position `i` (`0` to `size-2`):  
  1. Assume `arr[i]` is the smallest (`minIdx = i`).  
  2. Traverse the unsorted portion (`j = i+1` to `size-1`).  
  3. If a smaller element is found, update `minIdx`.  
  4. Swap `arr[i]` with `arr[minIdx]`.  
- Continue until all elements are sorted.  

---

### 3. Bubble Sort Algorithm  
- Repeat for `i = 0` to `size-2`:  
  1. Compare adjacent elements `arr[j]` and `arr[j+1]`.  
  2. If `arr[j] > arr[j+1]`, swap them.  
- After each pass, the largest element moves to the end.  
- Continue passes, ignoring the sorted portion at the end.  
- Stop after `size-1` passes (or earlier if no swaps occur).  


## Conclusion  

Through this project, we have successfully implemented and compared multiple sorting algorithms in C++. From the experiments and analysis, the following observations were made:  

1. **Simple algorithms (Bubble Sort, Selection Sort, Insertion Sort)**  
   - Easy to implement and understand.  
   - Inefficient for large datasets due to their **O(n²) time complexity**.  

2. **Efficient algorithms (Merge Sort, Quick Sort)**  
   - Perform significantly better on large datasets, achieving **O(n log n)** in average/best cases.  

3. **Quick Sort**  
   - Often outperforms Merge Sort in practice due to **in-place sorting** and lower constant factors.  
   - Suffers from a **worst-case complexity of O(n²)**.  

4. **Merge Sort**  
   - Guarantees **O(n log n)** performance regardless of input.  
   - Stable and well-suited for cases where element order matters or when sorting linked lists.  

### Final Remark  
The choice of sorting algorithm depends on the dataset size, stability requirements, and memory constraints.  
- For **small datasets**, simpler algorithms may suffice.  
- For **large datasets**, Merge Sort or Quick Sort is preferable.  
