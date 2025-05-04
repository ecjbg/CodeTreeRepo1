/*Singly Linked List - Insertion/Deletion/Search
Just as with arrays, there will be occasions when you need to perform insertion, deletion, 
and search operations on linked lists. Since linked lists are particularly optimized for insertion 
and deletion operations, as mentioned earlier, it is crucial to understand how these operations work.

Insertion
Let's assume we are inserting a value after the tail. Since the tail has an empty next, if a 
new node is introduced, you can simply set the next of the tail to point to this new node, and 
the connection will be established without much issue. However, since the new node will be positioned
 after the current tail, you also need to update the node that the tail points to.



The code corresponding to this process is as follows:

function SLL.insert_end(num)
  set new_node = node(num)       # Step 1. Create a node
  SLL.tail.next = new_node       # Step 2. Attach it
  SLL.tail = new_node            # Step 3. Update the tail
Similarly, you can implement adding a new value in front of the head without any issues.



The code corresponding to this process is as follows:

function SLL.insert_front(num)
  set new_node = node(num)       # Step 1. Create a node
  new_node.next = SLL.head       # Step 2. Attach it
  SLL.head = new_node            # Step 3. Update the head
However, adding a node directly after the head is a bit more complex. If you break the connection 
thoughtlessly, unexpected results may occur.

Therefore, proceed through the following three steps:

Create a new node.

Set the next value of the new node to the next value of the head.

Change the next value of the head to the new node.

By going through these three steps, a new node is added directly after the head.


The code corresponding to this process is as follows:

function SLL.insert_after_head(num)
  set new_node = node(num)            # Step 1. Create a node
  new_node.next = SLL.head.next       # Step 2. Change the new node's next value
  SLL.head.next = new_node            # Step 3. Change the head's next value
Deletion
Similar to insertion, but instead of defining new connections, deletion involves removing connections.
A key point to note during deletion is that you must change the connection from the node immediately 
before the node being deleted to the next node.

For example, the process of deleting the tail involves first changing the next value of the node
 immediately before the tail to null, and then moving the tail back to the previous node.



So how do you delete the head? It's not very difficult. You simply set the value of head to head.next.
 Although this doesn't actually delete the value, by defining it as head.next, the head value we 
 reference becomes the next value, making it appear as though the node has been properly deleted.



Search
Why do we need to move both the head and tail when inserting or deleting? The reason is to facilitate 
smooth searching.

In a singly linked list, you need to clearly define the start and end so that you can start from the
 head, which is the starting point, and continue following the next until you reach the tail, allowing
 you to conduct a search.

*/