# 0x1D. C - Binary trees

C
Group project
Algorithm

## Helper File :radioactive:

* [binary_tree_print.c](./binary_tree_print.c): C function that prints binary
trees in a pretty way.

## Header File :file_folder:

* [binary_trees.h](./binary_trees.h): Header file containing definitions and
prototypes for all types and functions written for the project.

Data Structures
```
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

Function Prototypes

| File                             | Prototype                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `binary_tree_print.c`            | `void binary_tree_print(const binary_tree_t *tree)`                                              |
| `0-binary_tree_node.c`           | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`                             |
| `1-binary_tree_insert_left.c`    | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`                      |
| `2-binary_tree_insert_right.c`   | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`                     |
| `3-binary_tree_delete.c`         | `void binary_tree_delete(binary_tree_t *tree);`                                                  |
| `4-binary_tree_is_leaf.c`        | `int binary_tree_is_leaf(const binary_tree_t *node);`                                            |
| `5-binary_tree_is_root.c`        | `int binary_tree_is_root(const binary_tree_t *node);`                                            |
| `6-binary_tree_preorder.c`       | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`                       |
| `7-binary_tree_inorder.c`        | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`                        |
| `8-binary_tree_postorder.c`      | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`                      |
| `9-binary_tree_height.c`         | `size_t binary_tree_height(const binary_tree_t *tree);`                                          | 
| `10-binary_tree_depth.c`         | `size_t binary_tree_depth(const binary_tree_t *tree);`                                           |
| `11-binary_tree_size.c`          | `size_t binary_tree_size(const binary_tree_t *tree);`                                            |
| `12-binary_tree_leaves.c`        | `size_t binary_tree_leaves(const binary_tree_t *tree);`                                          |
| `13-binary_tree_nodes.c`         | `size_t binary_tree_nodes(const binary_tree_t *tree);`                                           |
| `14-binary_tree_balance.c`       | `int binary_tree_balance(const binary_tree_t *tree);`                                            |
| `15-binary_tree_is_full.c`       | `int binary_tree_is_full(const binary_tree_t *tree);`                                            |
| `16-binary_tree_is_perfect.c`    | `int binary_tree_is_perfect(const binary_tree_t *tree);`                                         |
| `17-binary_tree_sibling.c`       | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`                                       |
| `18-binary_tree_uncle.c`         | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`                        


## Tasks :page_with_curl:

* **0. New node**
  * [0-binary_tree_node.c](./0-binary_tree_node.c): C function that creates a
  binary tree node with a given parent and value.
  * Returns a pointer to the new node, or `NULL` on failure.

* **1. Insert left**
  * [1-binary_tree_insert](./1-binary_tree_insert): C function that inserts a
  node as the left-child of another.
  * Returns a pointer to the new node, or `NULL` on failure.
  * If the given `parent` already contains a left node, the new node takes its
  place and the old left-child becomes the left-child of the new node.

* **2. Insert right**
  * [2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c): C function that
  inserts a node as the right-child of another.
  * Returns a pointer to the new node, or `NULL` on failure.
  * If the given `parent` already contains a right node, the new node takes its
  place and the old right-child becomes the right-child of the new node.

* **3. Delete**
  * [3-binary_tree_delete.c](./3-binary_tree_delete.c): C function that deletes
  an entire binary tree.

* **4. Is leaf**
  * [4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c): C function that checks
  if a given node is a leaf.
  * Returns `1` if the node is a leaf, `0` otherwise.

* **5. Is root**
  * [5-binary_tree_is_root.c](./5-binary_tree_is_root.c): C function that checks
  if a given node is a root.
  * Returns `1` if the node is a root, `0` otherwise.

* **6. Pre-order traversal**
  * [6-binary_tree_preorder.c](./6-binary_tree_preorder.c): C function that
  traverses a tree using pre-order traversal.

* **7. In-order traversal**
  * [7-binary_tree_inorder.c](./7-binary_tree_inorder.c): C function that
  traverses a tree using in-order traversal.

* **8. Post-order traversal**
  * [8-binary_tree_postorder.c]

* **9. Height**
  * [9-binary_tree_height.c](./9-binary_tree_height.c): C function that returns
  the height of a binary tree.

* **10. Depth**
  * [10-binary_tree_depth.c]

* **11. Size**
  * [11-binary_tree_size.c](./11-binary_tree_size.c): C function that returns
  the size of a binary tree.

* **12. Leaves**
  * [12-binary_tree_leaves.c]

* **13. Nodes**
  * [13-binary_tree_nodes.c](./13-binary_tree_nodes.c): C function that returns
  the number of nodes in a binary tree with at least one child.

* **14. Balance factor**
  * [14-binary_tree_balance.c]

* **15. Is full**
  * [15-binary_tree_is_full.c]

* **16. Is perfect**
  * [16-binary_tree_is_perfect.c]

* **17. Sibling**
  * [17-binary_tree_sibling.c]

* **18. Uncle**
  * [18-binary_tree_uncle.c]

## Authors
<details>
    <summary>Michael Kiruti</summary>
    <ul>
    <li><a href="https://www.github.com/Kiruti01">Github</a></li>
    <li><a href="https://www.twitter.com/the_lordmikey">Twitter</a></li>
    <li><a href="mailto:mikekirutic@gmail.com">e-mail</a></li>
    </ul>
</details>
<details>
    <summary>Brian Kyalo</summary>
    <ul>
    <li><a href="https://www.github.com/kyalo3">Github</a></li>
    </ul>
</details>
