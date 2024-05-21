# holbertonschool-binary_trees

Welcome to the binary trees repository for Holberton School! This repository contains projects and exercises that cover the fundamental concepts of binary trees, such as traversals, insertion, and deletion.

## Binary Tree

Foundations > Low-level programming & Algorithm > Data structures and Algorithms

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

### Requirements
Files containing big O notations will use this format:

* `O(1)`
* `O(n)`
* `O(n!)`
* n*m -> `O(nm)`
* n squared -> `O(n^2)`
* sqrt n -> `O(sqrt(n))`
* log(n) -> `O(log(n))`
* n * log(n) -> `O(nlog(n))`

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

### Provided file(s)
* definitions of `binary_tree_t`, `bst_t`, `avl_t`, and `heap_t` for [`binary_trees.h`](./binary_trees.h)
* [`binary_tree_print.c`](./binary_tree_print.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c) [`9-main.c`](./tests/9-main.c) [`10-main.c`](./tests/10-main.c) [`11-main.c`](./tests/11-main.c) [`12-main.c`](./tests/12-main.c) [`13-main.c`](./tests/13-main.c) [`14-main.c`](./tests/14-main.c) [`15-main.c`](./tests/15-main.c) [`16-main.c`](./tests/16-main.c) [`17-main.c`](./tests/17-main.c) [`18-main.c`](./tests/18-main.c)
* [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c) [`102-main.c`](./tests/102-main.c) [`103-main.c`](./tests/103-main.c) [`104-main.c`](./tests/104-main.c)
* [`110-main.c`](./tests/110-main.c) [`111-main.c`](./tests/111-main.c) [`112-main.c`](./tests/112-main.c) [`113-main.c`](./tests/113-main.c) [`114-main.c`](./tests/114-main.c)
* [`120-main.c`](./tests/120-main.c) [`121-main.c`](./tests/121-main.c) [`122-main.c`](./tests/122-main.c) [`123-main.c`](./tests/123-main.c) [`124-main.c`](./tests/124-main.c)
* [`130-main.c`](./tests/130-main.c) [`131-main.c`](./tests/131-main.c) [`132-main.c`](./tests/132-main.c) [`133-main.c`](./tests/133-main.c) [`134-main.c`](./tests/134-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. New node
Write a function that creates a binary tree node

* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
* Where `parent` is a pointer to the parent node of the node to create
* And `value` is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or `NULL` on failure

File(s): [`0-binary_tree_node.c`](./0-binary_tree_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node`

### :white_check_mark: 1. Insert left
Write a function that inserts a node as the left-child of another node

* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
* Where `parent` is a pointer to the node to insert the left-child in
* And `value` is the value to store in the new node
* Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
* If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

File(s): [`1-binary_tree_insert_left.c`](./1-binary_tree_insert_left.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left`

### :white_check_mark: 2. Insert right
Write a function that inserts a node as the right-child of another node

* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
* Where `parent` is a pointer to the node to insert the right-child in
* And `value` is the value to store in the new node
* Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
* If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

File(s): [`2-binary_tree_insert_right.c`](./2-binary_tree_insert_right.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right`

### :white_check_mark: 3. Delete
Write a function that deletes an entire binary tree

* Prototype: `void binary_tree_delete(binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to delete
* If tree is `NULL`, do nothing

File(s): [`3-binary_tree_delete.c`](./3-binary_tree_delete.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del`

### :white_check_mark: 4. Is leaf
Write a function that checks if a node is a leaf

* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
* Where `node` is a pointer to the node to check
* Your function must return 1 if `node` is a leaf, otherwise 0
* If `node` is `NULL`, return 0

File(s): [`4-binary_tree_is_leaf.c`](./4-binary_tree_is_leaf.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf`

### :white_check_mark: 5. Is root
Write a function that checks if a given node is a root

* Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
* Where `node` is a pointer to the node to check
* Your function must return 1 if `node` is a root, otherwise 0
* If `node` is `NULL`, return 0

File(s): [`5-binary_tree_is_root.c`](./5-binary_tree_is_root.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root`

### :white_check_mark: 6. Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal

* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
* Where `tree` is a pointer to the root node of the tree to traverse
* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing

File(s): [`6-binary_tree_preorder.c`](./6-binary_tree_preorder.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre`

### :white_check_mark: 7. In-order traversal
Write a function that goes through a binary tree using in-order traversal

* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
* Where `tree` is a pointer to the root node of the tree to traverse
* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing

File(s): [`7-binary_tree_inorder.c`](./7-binary_tree_inorder.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in`

### :white_check_mark: 8. Post-order traversal
Write a function that goes through a binary tree using post-order traversal

* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
* Where `tree` is a pointer to the root node of the tree to traverse
* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing

File(s): [`8-binary_tree_postorder.c`](./8-binary_tree_postorder.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post`

### :white_check_mark: 9. Height
Write a function that measures the height of a binary tree

* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to measure the height.
* If `tree` is `NULL`, your function must return 0

File(s): [`9-binary_tree_height.c`](./9-binary_tree_height.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height`

### :white_check_mark: 10. Depth
Write a function that measures the depth of a node in a binary tree

* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
* Where `tree` is a pointer to the node to measure the depth
* If `tree` is `NULL`, your function must return 0

File(s): [`10-binary_tree_depth.c`](./10-binary_tree_depth.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth`

### :white_check_mark: 11. Size
Write a function that measures the size of a binary tree

* Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to measure the size
* If `tree` is `NULL`, the function must return 0

File(s): [`11-binary_tree_size.c`](./11-binary_tree_size.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size`

### :white_check_mark: 12. Leaves
Write a function that counts the leaves in a binary tree

* Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to count the number of leaves
* If `tree` is `NULL`, the function must return 0
* A `NULL` pointer is not a leaf

File(s): [`12-binary_tree_leaves.c`](./12-binary_tree_leaves.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves`

### :white_check_mark: 13. Nodes
Write a function that counts the nodes with at least 1 child in a binary tree

* Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to count the number of nodes
* If `tree` is `NULL`, the function must return 0
* A `NULL` pointer is not a node

File(s): [`13-binary_tree_nodes.c`](./13-binary_tree_nodes.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes`

### :white_check_mark: 14. Balance factor
Write a function that measures the balance factor of a binary tree

* Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to measure the balance factor
* If `tree` is `NULL`, return 0

File(s): [`14-binary_tree_balance.c`](./14-binary_tree_balance.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance`

### :white_check_mark: 15. Is full
Write a function that checks if a binary tree is full

* Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to check
* If `tree` is `NULL`, your function must return 0

File(s): [`15-binary_tree_is_full.c`](./15-binary_tree_is_full.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full`

### :white_check_mark: 16. Is perfect
Write a function that checks if a binary tree is perfect

* Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to check
* If `tree` is `NULL`, your function must return 0

File(s): [`16-binary_tree_is_perfect.c`](./16-binary_tree_is_perfect.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect`

### :white_check_mark: 17. Sibling
Write a function that finds the sibling of a node

* Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
* Where `node` is a pointer to the node to find the sibling
* Your function must return a pointer to the sibling node
* If `node` is `NULL` or the parent is `NULL`, return `NULL`
* If `node` has no sibling, return `NULL`

File(s): [`17-binary_tree_sibling.c`](./17-binary_tree_sibling.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling`

### :white_check_mark: 18. Uncle
Write a function that finds the uncle of a node

* Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
* Where `node` is a pointer to the node to find the uncle
* Your function must return a pointer to the uncle node
* If `node` is `NULL`, return `NULL`
* If `node` has no uncle, return `NULL`

File(s): [`18-binary_tree_uncle.c`](./18-binary_tree_uncle.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle`

## Advanced Tasks

### :white_check_mark: 19. Lowest common ancestor
Write a function that finds the lowest common ancestor of two nodes

* Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`
* Where `first` is a pointer to the first node
* And `second` is a pointer to the second node
* Your function must return a pointer to the lowest common ancestor node of the two given nodes
* If no common ancestor was found, your function must return `NULL`

File(s): [`100-binary_trees_ancestor.c`](./100-binary_trees_ancestor.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor`

### :white_check_mark: 20. Level-order traversal
Write a function that goes through a binary tree using level-order traversal

* Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`
* Where `tree` is a pointer to the root node of the tree to traverse
* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing

File(s): [`101-binary_tree_levelorder.c`](./101-binary_tree_levelorder.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 101-main.c 101-binary_tree_levelorder.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 101-lvl`

### :white_check_mark: 21. Is complete
Write a function that checks if a binary tree is complete

* Prototype: `int binary_tree_is_complete(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to check
* If `tree` is `NULL`, your function must return 0

File(s): [`102-binary_tree_is_complete.c`](./102-binary_tree_is_complete.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 102-main.c 102-binary_tree_is_complete.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 102-complete`

### :white_check_mark: 22. Rotate left
Write a function that performs a left-rotation on a binary tree

* Prototype: `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to rotate
* Your function must return a pointer to the new root node of the tree once rotated

File(s): [`103-binary_tree_rotate_left.c`](./103-binary_tree_rotate_left.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 103-binary_tree_rotate_left.c 103-main.c 0-binary_tree_node.c -o 103-rotl`

### :white_check_mark: 23. Rotate right
Write a function that performs a right-rotation on a binary tree

* Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to rotate
* Your function must return a pointer to the new root node of the tree once rotated

File(s): [`104-binary_tree_rotate_right.c`](./104-binary_tree_rotate_right.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 104-binary_tree_rotate_right.c 104-main.c 0-binary_tree_node.c -o 104-rotr`

### :white_check_mark: 24. Is BST
Write a function that checks if a binary tree is a valid Binary Search Tree

* Prototype: `int binary_tree_is_bst(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to check
* Your function must return 1 if `tree` is a valid BST, and 0 otherwise
* If `tree` is `NULL`, return 0

Properties of a Binary Search Tree:

* The left subtree of a node contains only nodes with values less than the node’s value
* The right subtree of a node contains only nodes with values greater than the node’s value
* The left and right subtree each must also be a binary search tree
* There must be no duplicate values

File(s): [`110-binary_tree_is_bst.c`](./110-binary_tree_is_bst.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 110-main.c 110-binary_tree_is_bst.c 0-binary_tree_node.c -o 110-is_bst`

### :white_check_mark: 25. BST - Insert
Write a function that inserts a value in a Binary Search Tree

* Prototype: `bst_t *bst_insert(bst_t **tree, int value);`
* Where `tree` is a double pointer to the root node of the BST to insert the value
* And `value` is the value to store in the node to be inserted
* Your function must return a pointer to the created node, or `NULL` on failure
* If the address stored in `tree` is `NULL`, the created node must become the root node.
* If the value is already present in the tree, it must be ignored

File(s): [`111-bst_insert.c`](./111-bst_insert.c), [`0-binary_tree_node.c`](./0-binary_tree_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c 111-main.c 0-binary_tree_node.c -o 111-bst_insert`

### :white_check_mark: 26. BST - Array to BST
Write a function that builds a Binary Search Tree from an array

* Prototype: `bst_t *array_to_bst(int *array, size_t size);`
* Where `array` is a pointer to the first element of the array to be converted
* And `size` is the number of element in the array
* Your function must return a pointer to the root node of the created BST, or `NULL` on failure
* If a value of the array is already present in the tree, this value must be ignored

File(s): [`112-array_to_bst.c`](./112-array_to_bst.c) [`111-bst_insert.c`](./111-bst_insert.c) [`0-binary_tree_node.c`](./0-binary_tree_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 112-array_to_bst.c 112-main.c 111-bst_insert.c 0-binary_tree_node.c -o 112-bst_array`

### :white_check_mark: 27. BST - Search
Write a function that searches for a value in a Binary Search Tree

* Prototype: `bst_t *bst_search(const bst_t *tree, int value);`
* Where `tree` is a pointer to the root node of the BST to search
* And `value` is the value to search in the tree
* Your function must return a pointer to the node containing a value equals to value
* If `tree` is `NULL` or if nothing is found, your function must return `NULL`

File(s): [`113-bst_search.c`](./113-bst_search.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search`

### :white_check_mark: 28. BST - Remove
Write a function that removes a node from a Binary Search Tree

* Prototype: `bst_t *bst_remove(bst_t *root, int value);`
* Where `root` is a pointer to the root node of the tree where you will remove a node
* And `value` is the value to remove in the tree
* Once located, the node containing a value equals to `value` must be removed and freed
* If the node to be deleted has two children, it must be replaced with its first *in-order successor* (not predecessor)
* Your function must return a pointer to the new root node of the tree after removing the desired value

File(s): [`114-bst_remove.c`](./114-bst_remove.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c 114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm`

### :white_check_mark: 29. Big O #BST
What are the average time complexities of those operations on a Binary Search Tree (one answer per line):

* Inserting the value n
* Removing the node with the value n
* Searching for a node in a BST of size n

File(s): [`115-O`](./115-O)

### :white_check_mark: 30. Is AVL
Write a function that checks if a binary tree is a valid AVL Tree

* Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to check
* Your function must return 1 if `tree` is a valid AVL Tree, and 0 otherwise
* If `tree` is `NULL`, return 0

Properties of an AVL Tree:

* An AVL Tree is a BST
* The difference between heights of left and right subtrees cannot be more than one
* The left and right subtrees must also be AVL trees

File(s): [`120-binary_tree_is_avl.c`](./120-binary_tree_is_avl.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 120-main.c 120-binary_tree_is_avl.c 0-binary_tree_node.c -o 120-is_avl`

### :white_large_square: 31. AVL - Insert
Write a function that inserts a value in an AVL Tree

* Prototype: `avl_t *avl_insert(avl_t **tree, int value);`
* Where `tree` is a double pointer to the root node of the AVL tree for inserting the value
* And `value` is the value to store in the node to be inserted
* Your function must return a pointer to the created node, or `NULL` on failure
* If the address stored in `tree` is `NULL`, the created node must become the root node.
* The resulting tree after insertion, must be a balanced AVL Tree

File(s): [`121-avl_insert.c`](./121-avl_insert.c) [`14-binary_tree_balance.c`](./14-binary_tree_balance.c) [`103-binary_tree_rotate_left.c`](./103-binary_tree_rotate_left.c) [`104-binary_tree_rotate_right.c`](./104-binary_tree_rotate_right.c) [`0-binary_tree_node.c`](./0-binary_tree_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 121-avl_insert.c 121-main.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 0-binary_tree_node.c -o 121-avl_insert`

### :white_large_square: 32. AVL - Array to AVL
Write a function that builds an AVL tree from an array

* Prototype: `avl_t *array_to_avl(int *array, size_t size);`
* Where `array` is a pointer to the first element of the array to be converted
* And `size` is the number of element in the array
* Your function must return a pointer to the root node of the created AVL tree, or `NULL` on failure
* If a value of the array is already present in the tree, this value must be ignored

File(s): [`122-array_to_avl.c`](./122-array_to_avl.c) [`121-avl_insert.c`](./121-avl_insert.c) [`0-binary_tree_node.c`](./0-binary_tree_node.c) [`103-binary_tree_rotate_left.c`](./103-binary_tree_rotate_left.c) [`104-binary_tree_rotate_right.c`](./104-binary_tree_rotate_right.c) [`14-binary_tree_balance.c`](./14-binary_tree_balance.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 122-array_to_avl.c 122-main.c 121-avl_insert.c 0-binary_tree_node.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c -o 122-avl_array`

### :white_large_square: 33. AVL - Remove
Write a function that removes a node from an AVL tree

* Prototype: `avl_t *avl_remove(avl_t *root, int value);`
* Where `root` is a pointer to the root node of the tree for removing a node
* And `value` is the value to remove in the tree
* Once located, the node containing a value equals to value must be removed and freed
* If the node to be deleted has two children, it must be replaced with its first *in-order successor* (not predecessor)
* After deletion of the desired node, the tree must be rebalanced if necessary
* Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing

File(s): [`123-avl_remove.c`](./123-avl_remove.c) [`14-binary_tree_balance.c`](./14-binary_tree_balance.c) [`103-binary_tree_rotate_left.c`](./103-binary_tree_rotate_left.c) [`104-binary_tree_rotate_right.c`](./104-binary_tree_rotate_right.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 123-avl_remove.c 123-main.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 122-array_to_avl.c 121-avl_insert.c 14-binary_tree_balance.c 3-binary_tree_delete.c 0-binary_tree_node.c -o 123-avl_rm`

### :white_check_mark: 34. AVL - From sorted array
Write a function that builds an AVL tree from an array

* Prototype: `avl_t *sorted_array_to_avl(int *array, size_t size);`
* Where `array` is a pointer to the first element of the array to be converted
* And `size` is the number of element in the array
* Your function must return a pointer to the root node of the created AVL tree, or `NULL` on failure
* You can assume there will be no duplicate value in the array
* You are not allowed to rotate
* You can only have 2 functions in your file

File(s): [`124-sorted_array_to_avl.c`](./124-sorted_array_to_avl.c) [`0-binary_tree_node.c`](./0-binary_tree_node.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 124-main.c 124-sorted_array_to_avl.c 0-binary_tree_node.c -o 124-avl_sorted`

### :white_large_square: 35. Big O #AVL Tree
What are the average time complexities of those operations on an AVL Tree (one answer per line):

* Inserting the value n
* Removing the node with the value n
* Searching for a node in an AVL tree of size n

File(s): [`125-O`](./125-O)

### Project authors

OmarElati
