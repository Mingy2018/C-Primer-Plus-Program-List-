### Integer Types

*Integers* are numbers with no fractional part.

C++'s basic integer types, in order of increasing width, are `char`,  `short`,` int`, `long` and with C++11 `long long`. Each comes in both signed and unsigned versions. 

>The fundamental unit of computer is *bit*, which has the value 0 or 1. A *byte* usually means an 8-bit unit of memory.









## 8.2 引用变量 Reference Variables

别名=alias, alternative name

### 7.3.5 Pointer and `const`

    int age = 39;
    const int * pt = &age;

This declaration states that `pt` points to a const int (39, in this case). So, you can't use pt to change the `age` value. In other words, tha value *pt is const and cannot be modified:
Now for a subtle point. This declaration for `pt` doesn't necessarily mean that the value it points to is really a constant; is just means the value is a constant insofar as `pt` is concerned.


    const float g_earth = 9.80;
    const float * pe = &g_earth;// it is valid
    
    const float g_earth = 9.80;
    float * pm = & g_earth;//


### 4.7.6 Using `new` to create dynamic arrays

    int * psome = new int [10]; // get a block of 10 ints

The `new` operator returns the address of first element of array to the pointer `psome`.
`delete [] psome; // free a dynamic array` 

## 8.1 C++ Inline Functions

Inline functions are a C++ enhancement designed to speed up programs. The primary distinction between In.f and normal function is : how the C++ compiler incorporates them into a program.

## 8.4 Function Overloading

The key to function overloading is a function's argument list, also called the *function signature*.

If two functions use the same number and types of arguments in the same order, they have the same signature; the variable names don't matter. C++ enables you to define two functions by the same name, provided that the functions have different signature.

**Note**: A lack of a matching prototype doesn't automatically rule out using one of the functions because C++ will try to use standard type conversions to force a match. When there are more than one alternatives to be converted, C++ rejects the function call as an error.
