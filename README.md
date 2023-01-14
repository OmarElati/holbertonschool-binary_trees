# holbertonschool-binary_trees

Welcome to the binary trees repository for Holberton School! This repository contains projects and exercises that cover the fundamental concepts of binary trees, such as traversals, insertion, and deletion.

## Binary Tree

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

## Properties

    - Each node in the binary tree has at most two child nodes
    - The left child node is smaller than its parent node
    - The right child node is larger than its parent node
    - The left and right subtrees also must be binary search trees

## Applications

    - Representing hierarchical structures
    - Searching, sorting and insertion operations in data structures
    - Storing data in a sorted manner
    - Used in the implementation of various algorithms

## Terminologies

    - Root: The topmost node of the tree
    - Leaf: A node without any child node
    - Parent: The node that has child nodes
    - Child: A node that is connected to another node when moving away from the Root
    - Siblings: Nodes with the same parent
    - Subtree: A tree that is rooted at a node in another tree

## Traversal

    - Pre-order: Root, Left, Right
    - In-order: Left, Root, Right
    - Post-order: Left, Right, Root

## Operations

    - Insertion: Adding a new node to the tree
    - Deletion: Removing a node from the tree
    - Searching: Finding a specific node in the tree
    - Height: The length of the longest path from the root to a leaf
    - Depth: The distance of a node from the root

## More Info

### data structures

we use the following data structures and types for binary trees :

- Basic Binary Tree:

```bash
/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

- Binary Search Tree: A binary tree where the left child node is smaller than the parent node and the right child node is larger than the parent node

```bash
typedef struct binary_tree_s bst_t;
```

- AVL Tree: A self-balancing binary search tree

```bash
typedef struct binary_tree_s avl_t;
```

- A Max Binary Heap: Is a specific type of binary heap data structure in which the value of the parent node is always greater than or equal to its child nodes. In other words, the largest value in the heap is stored at the root of the binary tree.

```bash
typedef struct binary_tree_s heap_t;
```
