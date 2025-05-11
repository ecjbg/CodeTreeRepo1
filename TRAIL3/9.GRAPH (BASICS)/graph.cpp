/*DFS
After constructing a graph structure, there will certainly be situations where you need to explore
 the elements of the graph. For example, in real-world scenarios, you might need to calculate the 
 number of reachable points from a specific location or find points that can be reached within a few 
 minutes.

There are two main methods for graph traversal: DFS and BFS. Let's explore each one.

DFS stands for Depth First Search, also known as depth-first traversal. As the name suggests, it 
explores as deeply as possible before backtracking when no further progress can be made.

The key point is that after exploring deeply, you must backtrack to the previous stage.



Suppose you have traversed through 1−2−3−4. How can you visit 5? Naturally, you need to backtrack to 1.


If you think about what you've learned so far, the idea of recursion might come to mind. In fact, DFS 
is often implemented using recursion. That is, if there is a point you can visit, you recursively call 
a function to visit that point, and if there are no more points to visit, you terminate the function.

Let's examine the process while keeping in mind the idea of going as deep as possible.


However, one important point to note is that revisiting already visited points reduces efficiency, so 
you should not revisit previously visited points. In other words, you need to process each visited 
point to prevent revisiting.

To handle this, we create an array called visited to check whether a point with a specific number has 
been visited.

So, how does DFS proceed when there are multiple connected components?
In this case, if the goal is to explore all vertices, you start DFS from vertex 1. After that, 
you continue the exploration from the unvisited vertex with the lowest number. In this case, you 
would start DFS again from vertex 8 and continue exploring in the order of 8,9.*/