# CISC 192: Loops Lab #
Lab topics:
For loops
Nested loops
While loops
Infinite loops

It’s hip to be square. In this lab the user provides a size. The size dictates the number of ASCII characters and the characters themselves the program will print in a square. The diagonal of the square will print the size provided. The number printed decreases by 1 as its position moves away from the diagonal. The program repeatedly asks for a size and prints the square until the user terminates the program with CNTL-C. 

Example output:
Enter the size of the square:
5

5	4	3	2	1	
4	5	4	3	2	
3	4	5	4	3	
2	3	4	5	4	
1	2	3	4	5	

Enter the size of the square:
8

8	7	6	5	4	3	2	1	
7	8	7	6	5	4	3	2	
6	7	8	7	6	5	4	3	
5	6	7	8	7	6	5	4	
4	5	6	7	8	7	6	5	
3	4	5	6	7	8	7	6	
2	3	4	5	6	7	8	7	
1	2	3	4	5	6	7	8	

Enter the size of the square:
^C
Process returned -1 (0xFFFFFFFF)   execution time : 28.990 s
Press ENTER to continue.

Some hints and gotchas to look out for.
Make sure you have the correct diagonal
My solution used 4 loop structures
Use the attached output files to compare against your output. The two should be identical, including whitespaces, before you submit. NOTE these output files do not include user inputs.
Notice the newline after the user input and after the square prints.
Tabs separate the numbers in the square
Remember to zip the entire project directory, including project file and source code
Remember to use the zip format
You can submit multiple times before the deadline

Rubric
5 points for matching output, output other than the square
5 points for using appropriate loop constructs (while vs. for)
2 points for handing infinite iterations of printing squares
3 points for printing a correct square size (the correct number of characters)
5 points for printing the correct numbers in the square
0 points for a project that doesn’t compile
 -1 point per warning when compiling
