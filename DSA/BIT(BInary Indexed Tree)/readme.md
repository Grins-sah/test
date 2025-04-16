# 📘 Understanding Binary Indexed Tree (Fenwick Tree)

## 🤔 Problem It Solves

Given an array `a[]`, we often want to:
1. **Update** values at an index.
2. **Query** the **sum of elements from index `0` to `i`** (prefix sum).

### Using a normal array:
- Update: `O(1)`
- Query: `O(n)`

### Using a **Binary Indexed Tree (BIT)**:
- Update: `O(log n)`
- Query: `O(log n)`

---

## 🧠 Core Idea

A BIT is a clever array that stores **partial sums** to support fast prefix sum queries and updates.

It is usually 1-indexed, and index `i` in the BIT stores the sum of a **range of elements** in the original array `a[]`.

To determine what range each `bit[i]` stores, we use the **last set bit** of `i`:

```cpp
i & -i
```

---

## ⚙️ Structure of BIT

Let original array be: `a[1..n]`

We build: `bit[1..n+1]`

Each `bit[i]` contains:
- The sum of some range ending at index `i`
- Range size is `i & -i`

### Example:
- `i = 6` → binary `110`
- `i & -i = 10` → covers 2 elements → `a[5] + a[6]`

---

## 🚀 Operations

### 1. Query Prefix Sum

```cpp
int query(int i) {
    int sum = 0;
    while (i > 0) {
        sum += bit[i];
        i -= (i & -i);
    }
    return sum;
}
```

Go backward and add the values of responsible ranges.

---

### 2. Update Element

```cpp
void update(int i, int delta) {
    while (i < bit.size()) {
        bit[i] += delta;
        i += (i & -i);
    }
}
```

Move forward and update all ranges that include index `i`.

---

## 📦 Simple Example

Given:
```cpp
a = [1, 2, 3, 4, 5]  // 1-indexed
```

Steps:
1. Initialize BIT of size `n+1` with zeros
2. For each index `i`, call `update(i, a[i])`
3. Now you can:
   - Query prefix sum using `query(i)`
   - Update values using `update(i, delta)`

---

## 💡 Why "Binary Indexed"?

- Operates based on binary representation of index
- Each index covers ranges determined by the binary structure

---

## 🛠️ Summary

| Operation       | Time Complexity |
|----------------|-----------------|
| Update value    | O(log n)        |
| Query prefix sum| O(log n)        |

---

## ✅ Useful For

- Count of smaller elements
- Range frequency queries
- Inversion count
- Competitive programming!

---

Let me know if you want a visual animation or step-by-step example!
