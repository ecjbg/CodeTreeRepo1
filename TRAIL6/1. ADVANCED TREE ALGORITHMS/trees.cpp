//////////////////////////////////////////////////////////////////////////////////////////////
Concept, Terminology, and Traversal of Trees
When you look at structures like company organization charts or family trees, they are often 
organized in the following manner.



We generally refer to such structures as tree structures. Does it not look like a tree? If you
 rotate a tree 180 degrees, you will see a large trunk at the top, with branches spreading out as 
 you go down. This is why we call this structure a tree structure.

A tree is composed of connections between two points, characterized by the existence of a 
hierarchical relationship. In a single connection, we call the point at the top the parent and 
the point at the bottom the child.

There are additional terms to understand, which can be clarified by referring to the image below.

Node: Refers to each point. It is also called a vertex.
Edge: Refers to the line connecting two nodes. It is also called an edge.
Root Node: Refers to the very top of the tree. In the organization chart above, the root node 
would be the company CEO.
Parent, Child: Refers to the relationship between two connected nodes in a tree, where the node 
higher up is called the parent node, and the node lower down is called the child node.
Degree: Refers to the number of children a particular node has.
Depth: Indicates how far a node is from the root node.
Height: Refers to the depth of the deepest node in the tree or the value plus one. In CodeTree, 
we will consider the height of the tree as the maximum depth plus one.
Leaf Node: Refers to a node that does not have any children.


Interestingly, even when parent-child relationships are not defined as follows, 
it is still called a tree. In other words, the original definition of a tree is a graph
 where all nodes are connected and no cycles exist. Such cases are called Unrooted trees.
 Trees with a defined root node, like the one above, are called Rooted trees. In an unrooted tree,
 the degree refers to the number of edges connected to a node, and a leaf node is defined as a node
 with a degree of 1.



In the following two examples, the left image is not a tree because not all parts are connected,
 and the right image is not a tree because it contains a cycle.



In an unrooted tree, the root node is determined by choice. Once the root node of a tree is set, 
the parent, child, degree, etc., are defined. For the same tree, you can draw it with node 1 as the 
root or node 2 as the root.



Now, assuming a Rooted tree, let's proceed with tree traversal on the diagram below.



Generally, information about a tree is given only as connections between two vertices, similar 
to a graph, so it is not possible to know which of the connected vertices is the parent and which 
is the child. Therefore, you can define parent-child relationships by performing a DFS traversal 
starting from the root node in a bidirectional graph.

Starting DFS from the root node, vertex 1, in the diagram above, you can immediately determine 
that the parent node of y is x when entering vertex y from vertex x.

