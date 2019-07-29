# CISC 192: Branches Lab #
You are writing an exciting command line educational computer game (graphics are such a fad!), TinyPuter. This game is aimed at preschool age kids. There are two parts to the game. The user selects which part they wish to play. 

Part one teaches vowels. If the user presses a vowel key the program will print out an animal that starts with the vowel.  Upper- and lower-case letters are accepted. 



Part two teaches the concepts, zero, one, ones, tens, hundreds, thousands and millions.



The game exits after a single iteration. If at any time the user provides input that is not expected the game exits with exit code 1 and prints the error message “Provided input is not valid, please play again. Exiting…”. Example gameplay below.

Example run with letters.

Greetings TinyPuter. Select an option. 

Press 1 to play with letters.
Press 2 to play with numbers.

 User input

Press a vowel key ...
O			 User input

You pressed O, OSTRICH starts with O.

Thanks for playing, come back and play again!

Example run with numbers.

Greetings TinyPuter. Select an option. 

Press 1 to play with letters.
Press 2 to play with numbers.

 User input

Enter a number of rhinos
7			 User input

You entered 7, there are MANY rhinos.

Thanks for playing, come back and play again!

Start a new project called BranchesLab. All the code for the lab should be contained in main.cpp. Once you are finish, zip the entire project directory. Rename the zip file to <first_name_last_name>Branchest Lab.zip and submit via Blackboard.



Some hints and gotchas to look out for.
Make sure to handle all cases
E.g. if the user makes a selection other than 1 or 2, but there are more to consider as well
Use if else statements and switch case statements where appropriate
Use the attached output files to compare against your output. The two should be identical, including whitespaces, before you submit. NOTE these output files do not include user inputs.
I will run your program against several test cases, make sure ALL cases are handled according to the lab write up.
Make sure to check your conditional operators. >= is different than >. = is different from ==.
Extra credit point for not using “magic numbers”. Please let me know in the submission notes if this applies to you.
Notice the newline before the game intro print and after the exit prints.  There are tabs for the selection menu.
