hw01:
Review the lecture slides which discuss Very Simple Programming Languages (VSPL). Next, 
review VSPL as defined below and identify which sequences are valid.
Use a text editor to enter the program on textbook page 47 (the code is given here 
for your convenience). Use GNU GCC to compile, debug (find and fix any syntax 
errors), and execute the program and fix any semantic errors, for example, by 
adding "break" statements in the required places and by fixing incorrect characters 
copied into the programming environment, if any, and by type-changing to print a 
floating point number. The code is supposed to perform one math operation in each 
switch-case. The ‘ch’ variable is assigned a new math operator before each switch
case. Submit the corrected program as hw01q3.c 
You are given a file named “hw01q4.c”. All instructions are given in the form of comments 
in the file. You should correct the errors and identify which error type they are. Please read 
all instructions carefully, then complete and submit the updated file. 

Hw2:
Write four macros to re-implement the given four functions. Name them: subm, cubem,   
minm, and oddm, respectively. Make a C file hw02q1.c that has the four functions and four macros defined in previous 
question. Write a main() function to test these functions and macros. Use the following 
test cases in the main() to call your functions and macros in this order and observe the 
results:a = 3, b = 6; 
subf(a, b); 
subm(a, b); 
subf(a++, b--); 
a = 3; b = 6;  
subm(a++, b--); 
a = 3; b = 6; 
cubef(a); 
cubem(a); 
cubef(--a); 
a = 3; b = 6; 
cubem(--a); 
a = 3; b = 6; 
minf(a, b); 
minm(a, b); 
minf(--a, --b); 
a = 3; b = 6; 
minm(--a, --b); 
a = 2; b = 6; 
oddf(a); 
oddm(a); 
oddf(a++); 
a = 2; b = 6; 
oddm(a++); 
