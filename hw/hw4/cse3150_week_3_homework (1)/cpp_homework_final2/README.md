#Pointers
When it was possible, I used pointers to pass the the gpa and name arrays into functions to avoid the memory overhead of copying values and to modify objects like the arrays.

#const
In every case that altering a value passed into a function was unnecessary, i used const as a safety measure to prevent accidentally modifying integers or arrys when not intended/

#references
Where it was possible, particularly for objects other than arrays, I passed values into the functions via references to both reduce memory overhead of copying values, and to modify values like the size in the addStudent functions

#casting
I used casting only once to round the result of floating-point number division down to the nearest integer.

#exceptions
I used excpetions twice to terminate the program when an order that cannot be fulfilled is given, such as finding the average of an empty list of gpas, or adding to a list if it is already at maximum capacity.

#control flow
Control flow was used to parse through the gpa and names lists and print all values through an index-based for loop, to perpetualy display the option menu, and to detect when exceptions should be raised.
