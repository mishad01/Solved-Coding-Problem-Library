#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[] = {1, 7, 9, 3, 5, 2, 4,5};
    int n = sizeof(a) / sizeof(a[0]);


    for(int i = 0;i<n;i++){
    	int j = i;
    	while(j>0 && a[j-1]>a[j]){
    		swap(a[j-1],a[j]);
    		j--;
    	}
    }

    for (auto x : a) {
        cout << x << " ";
    }
    return 0;
}

/*
#### **How Insertion Sort Works**
1. **Outer Loop (`for` loop):**
   - Iterates through each element of the array, starting from the first element (`i = 0`) to the last element (`i = n-1`).
   - At each step, the element at index `i` is treated as the "key" to be inserted into its correct position in the sorted portion of the array (left side of `i`).

2. **Inner Loop (`while` loop):**
   - Compares the "key" (`a[j]`) with the previous element (`a[j-1]`).
   - If the previous element is greater than the "key," they are swapped.
   - This process continues until the "key" is in its correct position in the sorted portion of the array.

---

### **Step-by-Step Execution**
Let's go through each iteration of the outer loop and see how the array changes.

#### **Initial Array:**
```
Index: 0 1 2 3 4 5 6
Value:1 7 9 3 5 2 4
```

---

#### **Iteration 1 (`i = 0`):**
- Key: `a[0] = 1`
- No elements to the left of `i = 0`, so nothing happens.
- **Array remains the same:**
  ```
  1 7 9 3 5 2 4
  ```

---

#### **Iteration 2 (`i = 1`):**
- Key: `a[1] = 7`
- Compare with `a[0] = 1`:
  - `1 < 7`, so no swap is needed.
- **Array remains the same:**
  ```
  1 7 9 3 5 2 4
  ```

---

#### **Iteration 3 (`i = 2`):**
- Key: `a[2] = 9`
- Compare with `a[1] = 7`:
  - `7 < 9`, so no swap is needed.
- **Array remains the same:**
  ```
  1 7 9 3 5 2 4
  ```

---

#### **Iteration 4 (`i = 3`):**
- Key: `a[3] = 3`
- Compare with `a[2] = 9`:
  - `9 > 3`, so swap them.
  - Array becomes: `1 7 3 9 5 2 4`
- Compare with `a[1] = 7`:
  - `7 > 3`, so swap them.
  - Array becomes: `1 3 7 9 5 2 4`
- Compare with `a[0] = 1`:
  - `1 < 3`, so no swap is needed.
- **Final array after this iteration:**
  ```
  1 3 7 9 5 2 4
  ```

---

#### **Iteration 5 (`i = 4`):**
- Key: `a[4] = 5`
- Compare with `a[3] = 9`:
  - `9 > 5`, so swap them.
  - Array becomes: `1 3 7 5 9 2 4`
- Compare with `a[2] = 7`:
  - `7 > 5`, so swap them.
  - Array becomes: `1 3 5 7 9 2 4`
- Compare with `a[1] = 3`:
  - `3 < 5`, so no swap is needed.
- **Final array after this iteration:**
  ```
  1 3 5 7 9 2 4
  ```

---

#### **Iteration 6 (`i = 5`):**
- Key: `a[5] = 2`
- Compare with `a[4] = 9`:
  - `9 > 2`, so swap them.
  - Array becomes: `1 3 5 7 2 9 4`
- Compare with `a[3] = 7`:
  - `7 > 2`, so swap them.
  - Array becomes: `1 3 5 2 7 9 4`
- Compare with `a[2] = 5`:
  - `5 > 2`, so swap them.
  - Array becomes: `1 3 2 5 7 9 4`
- Compare with `a[1] = 3`:
  - `3 > 2`, so swap them.
  - Array becomes: `1 2 3 5 7 9 4`
- Compare with `a[0] = 1`:
  - `1 < 2`, so no swap is needed.
- **Final array after this iteration:**
  ```
  1 2 3 5 7 9 4
  ```

---

#### **Iteration 7 (`i = 6`):**
- Key: `a[6] = 4`
- Compare with `a[5] = 9`:
  - `9 > 4`, so swap them.
  - Array becomes: `1 2 3 5 7 4 9`
- Compare with `a[4] = 7`:
  - `7 > 4`, so swap them.
  - Array becomes: `1 2 3 5 4 7 9`
- Compare with `a[3] = 5`:
  - `5 > 4`, so swap them.
  - Array becomes: `1 2 3 4 5 7 9`
- Compare with `a[2] = 3`:
  - `3 < 4`, so no swap is needed.
- **Final array after this iteration:**
  ```
  1 2 3 4 5 7 9
  ```

---

### **Final Sorted Array**
After all iterations, the array is fully sorted:
```
1 2 3 4 5 7 9
```

---

### **Key Takeaways**
- Insertion Sort works by building a sorted portion of the array one element at a time.
- It repeatedly takes the next element and inserts it into its correct position in the sorted portion.
- The time complexity of Insertion Sort is **O(n²)** in the worst case (when the array is in reverse order), but it performs well for small or nearly sorted arrays.

Let me know if you have further questions! 😊
*/