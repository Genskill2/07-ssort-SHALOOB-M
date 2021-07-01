# Exercise 1

Consider an array that looks like this. Let's call the array `arr` and
the length is `l` (which is `9` in this case).

    | 9 | 5 | 12 | 6 | 22 | 18 | 7 | 10 | 4 |
    |---+---+----+---+----+----+---+----+---|
    | 0 | 1 |  2 | 3 |  4 |  5 | 6 |  7 | 8 |
    
Write a function called `swap_max` which will take `arr`,  `l` and a
position `n` as input. The function should find the largest element
from `n` to `l` and then swap their positions. e.g. If we call 

     swap_max(arr, l, 0);
     
it will find the largest element between `0` and `l` (in this case
`22` at position `4` and then swap the values at position `0` and `4`
to get 

     | 22 | 5 | 12 | 6 | 9 | 18 | 7 | 10 | 4 |
     |----+---+----+---+---+----+---+----+---|
     |  0 | 1 |  2 | 3 | 4 |  5 | 6 |  7 | 8 |

With this new array, if we run 

      swap_max(arr, l, 4); 
      
it will find the largest element between `4` and `l` which is `18` at
index 5 and then swap it with position `4` to get.
    
     | 22 | 5 | 12 | 6 | 18 | 9 | 7 | 10 | 4 |
     |----+---+----+---+----+---+---+----+---|
     |  0 | 1 |  2 | 3 | 4  | 5 | 6 |  7 | 8 |

The prototype for the `swap_max` function is given in the `main.c`
file. It is `void swap_max(int arr[], int l, int n)`. 

# Exercise 2

Write a function called `ssort` which will run the `swap_max` function
for each element in a given array. For an array `arr` with length `l`,
Your `ssort` function should loop from `0` to `l-1` and call
`swap_max(arr, l, 0)`, `swap_max(arr, l, 1)`, `swap_max(arr, l, 2)`
etc.  till `swap_max(arr, l, l-1)`. The prototype of the `ssort`
function is `ssort(int [], int)` and is provided in the `main.c`
file. 

Once `ssort` runs, the array should be sorted in descending
order. This algorithm is called [selection sort](https://en.wikipedia.org/wiki/Selection_sort). 

# Instructions
1. Implement the `swap_max` and `ssort` functions inside the swap.c
   file
2. Do not touch the `main.c` or any of the other files.
