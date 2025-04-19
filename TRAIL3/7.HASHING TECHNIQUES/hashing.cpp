/*
Hashing
//
In an array, we locate values by specifying their position.
However, finding every value this way can be inefficient.
For instance, imagine you are running a website. 
The website has user IDs and passwords, and when a login attempt is made,
 the server checks if the ID and password exist and then outputs the result.
So, how can we find the password on the server using the ID for comparison?
One method is to store the ID and password as pairs. However, 
this makes it quite difficult to compare them in order 
(especially if special characters are included, making it hard to organize the IDs).
 Without sorting, you would have to search through all the information every 
 time a login is attempted, which is a disadvantage.

Moreover, as the site grows, even a time complexity of O(logN) 
might not be sufficient, so there is a need to improve time efficiency!

To overcome this, a new storage method using hash functions has emerged.

A hash function is a function that takes arbitrary data and returns a 
specific value of fixed length. In other words, no matter what value you input,
 it returns a value within a specific range.



If you adjust the return value of a hash function to be a positive
 integer starting from 0, you can input a value into the hash function 
 and place the value at the index corresponding to the returned value in an array.

By storing and managing values in this way, deletion, 
insertion, and search operations all become O(1) because
 you only need to manage the index obtained by passing through the hash function once.

However, hash functions are not a cure-all. Generally, when
 using hash functions on a computer, you convert data into 
 hash values using a hash function suitable for each type 
 (string, number, etc.), but there are types that cannot be handled! 
 A typical example is arrays. Since the number of values in an array is unclear, 
 hash functions generally do not handle types like arrays.

Hashing is particularly useful when insertion, deletion,
 and search operations occur frequently, regardless of the order 
 in which specific data is entered. So, should we always use hashing 
 instead of arrays? Not necessarily. One of the powerful features of 
 arrays is that they provide a definite order of data based on indices. 
 Remember that hashing is essential when data frequently comes and goes without regard to order.
 //
 1.
 function append(key, value)
  set index = hash_function(key)
  hash[index] = value
  
function find(key)
  set index = hash_function(key)
  if hash[index] != null
    return hash[index]
    
function remove(key)
  set index = hash_function(key)
  if hash[index] == null
    return 
  hash[index] = null
//
2.
Hash Functions and Collisions
Previously, we explained that by adjusting a hash function to return a positive integer 
starting from 0, you can insert a specific value into an array by inputting the value into
 the hash function and placing it at the index corresponding to the returned value.



Now, let's delve deeper into hash functions. For convenience, let's consider a case where 
the data consists only of numbers.

For example, suppose the numbers 239,6,197,638,372 are given, and the hash function is
 f(x)=x. If the size of the storage available for the hash function's output is set between 
 0 and 9, numbers like 239,197,638, and 372 cannot be stored properly.



However, if we define the function as f(x)=x%10, all the information can be stored correctly.



Yet, if the numbers change to 239,9,199,368,372, a situation arises where 
three numbers (239,9,199) need to be stored at position 9. This is called a hash collision.



When a hash collision occurs, it cannot be resolved with a simple array. There 
are several methods to address this, but the simplest is to use a linked list.



In this case, to check if the number 199 is in the array, you need to traverse the 
linked list corresponding to 9 to search for 199.

If the hash function is f(x)=x%10 and all given data ends with the number 9, 
you will have to traverse the linked list for insertion, deletion, and search operations, 
resulting in a time complexity of O(N). In such a scenario, there would be no reason to use hashing.



Therefore, it is crucial to set the hash function appropriately to minimize
 collisions. If collisions rarely occur, you can directly access, insert, or delete 
 the desired value from the array using the value obtained from the hash function, making
 the time complexity of hashing O(1). You can assume that the hash functions already implemented
 in each programming language satisfy these conditions.

Additionally, to minimize collisions, arrays are typically defined to be several times 
larger than the actual data to be stored. We generally refer to the array where values are
 stored as a "hash table," and it is usually set to be about 3 to 4 times the size of the
 maximum data to be inserted.


*/