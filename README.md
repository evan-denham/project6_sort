# String Sort with File I/O

A C program that reads a list of strings from an input file, sorts them in descending order using recursive selection sort, and writes the result to an output file.

## What it demonstrates

- File I/O in C (`fopen`, `fgets`, `fputs`, `fclose`)
- Recursive algorithm design (selection sort implemented recursively rather than iteratively)
- Command-line argument handling (`argv` for input/output filenames)
- 2D character array manipulation for fixed-size string storage

## How it works

1. Reads up to 1000 lines (strings) from an input file specified via command-line argument
2. Recursively finds the largest remaining string and swaps it into place
3. Writes the sorted result to an output file specified via command-line argument

## Build & Run

```bash
gcc project6_sort.c -o sort
./sort input.txt output.txt
```

## Notes

This was built as a class assignment for an introductory C course. Kept here as-is to reflect the original coursework.
