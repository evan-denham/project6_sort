Task

Write a program that sorts the items in a grocery list. Your program will open and read the file, then write the sorted items to the output file.

Requirements

Name your program project6_sort.c.
Your program will be executed with two command line arguments. The first argument specifies the name of the file that contains the text to be processed, and the second argument specifies the name of the file where you must write the expected answer following the format in the examples below.
Use 1.inDownload 1.in as the input file to test your program.
Assume the input text does not have more than 1000 items, and each item does not have more than 100 characters.
 Assume all items are lower case letters and one word. Assume there are no punctuations in the file.
An array of strings (two dimensional array of characters) will be needed to store the content in the input file.  
Modify the selection_sort function we learned in week 4 so it sorts an array of string. 
      void selection_sort(char items[][101], int n);

The items in the output file should be in separate lines.
The output file name should be "output.txt". 
main function reads the input file, calls the modified selection_sort function to sort the items, and writes to the output file.
Examples (your program must follow this format precisely)
Command line
./a.out file.in file.out
file.in	file.out
fish
apples
bananas
apples
bananas
fish
 

Submission instructions
Develop and test your program on the student cluster
To compile your program, run: $ gcc -std=c99 -Wall project6_sort.c
To execute your program, run: $ ./a.out
Test your program with the shell script on Unix: try_project6_sortDownload try_project6_sortDownload try_project6_decode
Upload the script to the same directory as your program.
Run: $ unzip try_project6_sort.zip
Run: $ chmod +x try_project6_sort
Run: $ ./try_project6_sort
Download the program from student cluster and submit it on Canvas->Gradescope. Make sure you submit a file with the correct name!
You can submit your program as many times as needed before the due date. Gradescope will indicate the test cases with incorrect output, if any exists.
