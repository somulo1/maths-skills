# Math Skills

This project aims to analyze a group of integers stored in a text file (.txt). It calculates the mean, median, variance, and standard deviation of the integers.

## Usage

To compile the project using a C compiler (e.g., GCC), follow these steps:

## Compilation

A `makefile` is available for compiling the project files. Copy and run the command below:

```shell
make
```

## Running the Code

After compilation, execute the main executable with the data file data.txt:

```shell

./main_executable data.txt
```
### Cleaning Up

To clean up and remove the executable files, use:

``` shell

make clean
```
Project Files

This project includes the following files:

    main.c: Main file responsible for reading the data file and calling other functions from the helper functions directory to display the results.
    makefile: Helps in compiling all files into executable format and can be used to clean executable files after obtaining results.
    mean.c: Function to calculate the average of the data.
    median.c: Function to calculate the median of the data.
    variance.c: Function to calculate the variance of the data.
    standard_deviation.c: Function to calculate the standard deviation of the data.
    helpers.h: Header file containing function prototypes and necessary includes.
    file_reader.c: Reads data from the provided data file and defines the type to be used across all functions.
    compare.c: Used to sort data in ascending order.

`Note:` Run make every time you modify the functions to obtain correct results.
Test Cases

This project includes various test cases to ensure functionality across different scenarios.
## Author

This work is solely done by `Samuel Omulo`. Feel free to visit the following accounts for more details

  [gitea](https://learn.zone01kisumu.ke/git/somulo/math-skills.git)   or    [github](https://github.com/somulo1)
 
