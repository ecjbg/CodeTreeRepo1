/*Concept and Terminology of Trees
When you look at a company organization chart or a family tree, they are often structured as follows:
We generally refer to this structure as a tree structure. Does it not look like a tree? 
If you rotate a tree 180 degrees, you will see a large trunk at the top, with branches spreading 
out as you go down. This is why we call this structure a tree structure.

A tree is characterized by the connection between two points and the existence of a hierarchical 
relationship. In a single connection, we call the point at the top the parent and the point at the 
bottom the child.

There are additional terms to understand, which are explained below with reference to the image:

Node: Refers to each point. It is also called a vertex.
Edge: Refers to the line connecting two nodes. It is also called an edge.
Root Node: Refers to the very top of the tree. In the organization chart above, the root node 
would be the company CEO.
Parent, Child: Refers to the relationship between two connected nodes in a tree, where the node 
higher up is the parent node, and the node lower down is the child node.
Degree: Refers to the number of children a particular node has.
Depth: Indicates how far a node is from the root node.
Height: Refers to the depth of the deepest node in the tree or the value plus one. In CodeTree, 
we will consider the height of the tree as the maximum depth plus one.
Leaf Node: Refers to a node that does not have any children.


Interestingly, even when parent-child relationships are not defined as shown below, it is still 
called a tree. In other words, the original definition of a tree is a graph where all nodes are 
connected and no cycles exist. This is called an Unrooted tree. A tree with a defined root node,
 as in the example above, is called a Rooted tree. In an Unrooted tree, the degree is the number 
 of edges connected to a node, and a leaf node is defined as a node with a degree of 1.



In the following two examples, the left diagram is not a tree because not all nodes are connected, 
and the right diagram is not a tree because it contains a cycle.

In an Unrooted tree, the root node is determined by choice. Once the root node of a tree is
 determined, the parent, child, degree, etc., are defined. For the same tree, you can draw it
 with node 1 as the root or with node 2 as the root.
*/

