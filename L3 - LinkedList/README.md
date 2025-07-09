
# 📚 Linked List - Full Notes

A comprehensive guide to **Linked Lists** in Data Structures and Algorithms, covering theory, implementation (C++, Java, Python), common problems, and visual explanations. Ideal for interview prep and competitive coding.

---

## 📌 Table of Contents

1. [Introduction](#introduction)
2. [Types of Linked Lists](#types-of-linked-lists)
3. [Basic Operations](#basic-operations)
4. [Singly Linked List Implementation](#singly-linked-list-implementation)
5. [Doubly Linked List Implementation](#doubly-linked-list-implementation)
6. [Circular Linked List](#circular-linked-list)
7. [Popular Interview Problems](#popular-interview-problems)
8. [Time & Space Complexity](#time--space-complexity)
9. [Visualization Tools](#visualization-tools)
10. [References & Resources](#references--resources)

---

## 📖 Introduction

A **Linked List** is a linear data structure where elements (nodes) are stored in non-contiguous memory locations and connected using pointers.

### 🧱 Node Structure

```cpp
struct Node {
  int data;
  Node* next;
};
```
````

## 🧬 Types of Linked Lists

- 🔹 Singly Linked List
- 🔸 Doubly Linked List
- 🔁 Circular Linked List
- 🔄 Doubly Circular Linked List

---

## 🛠️ Basic Operations

| Operation | Description                     |
| --------- | ------------------------------- |
| Insertion | At beginning, end, or position  |
| Deletion  | By value, index, or head/tail   |
| Traversal | Loop through all nodes          |
| Searching | Find a node with specific value |
| Reversal  | Reverse entire list             |

---

## 🧾 Singly Linked List Implementation

- `insertAtBeginning()`
- `insertAtEnd()`
- `deleteNode(value)`
- `search(value)`
- `reverseList()`

📂 Code: `singly_linked_list.cpp`

---

## 🧾 Doubly Linked List Implementation

- Two pointers: `prev` and `next`
- Easier deletion (bi-directional)

📂 Code: `doubly_linked_list.cpp`

---

## 🔁 Circular Linked List

- Last node points to the first
- Used in round-robin scheduling

📂 Code: `circular_linked_list.cpp`

---

## 🧠 Popular Interview Problems

- ✅ Detect Cycle in Linked List (Floyd’s Algorithm)
- ✅ Remove Nth Node from End
- ✅ Find Middle of Linked List
- ✅ Merge Two Sorted Linked Lists
- ✅ Reverse in Groups of K
- ✅ Intersection of Two Linked Lists
- ✅ Clone Linked List with Random Pointers

📂 Code: See `problems/` folder

---

## ⏱️ Time & Space Complexity

| Operation         | Singly LL | Doubly LL | Circular LL |
| ----------------- | --------- | --------- | ----------- |
| Insertion at Head | O(1)      | O(1)      | O(1)        |
| Insertion at End  | O(n)      | O(n)      | O(n)        |
| Deletion          | O(n)      | O(n)      | O(n)        |
| Search            | O(n)      | O(n)      | O(n)        |

---

## 🎨 Visualization Tools

- [visualgo.net](https://visualgo.net/en/list)
- [cs.usfca.edu/\~galles/visualization/](https://www.cs.usfca.edu/~galles/visualization/LinkedList.html)

---

## 📚 References & Resources

- GeeksforGeeks: [Linked List](https://www.geeksforgeeks.org/data-structures/linked-list/)
- LeetCode Linked List Tag: [Problems](https://leetcode.com/tag/linked-list/)
- Cracking the Coding Interview Book

---

## 🧠 Author

Maintained by Sane Aalam — Focused on clarity, performance, and interview prep.

Feel free to ⭐ the repo and contribute!

---
