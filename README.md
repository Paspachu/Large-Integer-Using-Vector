# Large-Integer-Using-Vector

This repository includes the header file that defines large integer in vector form.

The number should be store in the vector in opposite order for the operators and functions to work. For example, if you want an integer 19028436, then you need to define vector like following:

vector<int> v = {6, 3, 4, 8, 2, 0, 9, 1};

If you need to change any int value to the above vector form, there is a function that does it for you:

(1) int_to_vector: takes int value and convert to vector<int> in opposite order, meaning first index of vector contains oneth digit.

In header file, the following operators are defined:

(1) +, addition

(2) -, subtraction

(3) *, multiplication

(4) /, division

(5) %, modulus

(6) pow, power

There are also following comparison operators defined:

(1) >, larger than

(2) >=, larger than or equal to

(3) <, smaller than

(4) <=, smaller than or equal to

(5) ==, equal to

(6) !=, not equal to

If you want to use the above operators and functions, you simply have to clone the vector_int.h header file and in your cpp file at the top write #include "vector_int.h".

If you have questions or found any errors in the code, please use the Issues section in the repository to ask.