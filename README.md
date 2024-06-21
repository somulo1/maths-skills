# Math-skills

This project aims to analyze a group of integers stored in a text file (.txt). It calculates the mean, median, variance, and standard deviation of the integers.

## Usage

Compile the project using a C compiler, such as GCC:

# Compilation
make file is available for compiling the project files.copy and run the command below.
```shell
make
```

# Run code

```shell
./main_executable data.txt

```

# Clean

```shell
make clean
```

# Files
   This project has test_file, main.c, helper.c, data.txt and makefile

* main.c: The main file responsible for reading the data file and calling the other functions from the helperfunctions directory and display the result

* makefile - helps in compiling all the files into executable format. it can be used to clear the executable files after obtaining the result.

 *NB*-  RUN make every time yu modify the functions to obtain the correct result.

 ## functions.

* mean.c: Contains the function to calculate the avarage of the data.
* median.c: Contains the function to calculate the median of the data.
* variance.c: Contains the function to calculate the variance of the data.
* standard_deviation.c: Contains the function to calculate the standard deviation of the data.
* helpers.h: Header file containing function prototypes and necessary includes.
* file_reader.c : reads data from a provided data file and defines the the type to be used accross every function
* compare.c : is used to sort data in an accending order .

remeber to incude the sampled data in a text file


# Run test file

```shell
./test_executable
```


## Test cases: 
this project takes all the possible test casses      
##  Author
this work is solely done by *samuel omulo* feel free to visit the following account
  [gitea account](https://learn.zone01kisumu.ke/git/somulo/math-skills.git)  or [github account](https://github.com/somulo1)
 

