/* In C and C++, when you declare a pointer variable, you don't actually
 use the dereference operator "*" in the declaration. Instead, you use
"*"
to declare a pointer variable and to dereference it in different
contexts.

When you declare a pointer variable, you use * to indicate that the
 variable is a pointer. */
// int *ptr;
/*Here, int *ptr; declares a pointer variable named ptr that can store
the memory address of an integer variable.

When you assign an address to a pointer variable, you also use *,
 but in this context, it's not a dereference operator. For example:*/
// int num = 5;
// ptr = &num; // Assigning the address of num to ptr

/*printf("%d", *ptr); // Dereferencing ptr to get the value
stored at the address it points to
Here, *ptr dereferences the pointer ptr, allowing you to access
the value stored at the memory address it points to.

So, in summary, the dereference operator * is used both in pointer
declarations to specify that a variable is a pointer and in expressions
to dereference the pointer and access the value stored at the memory
address it points to.*/
