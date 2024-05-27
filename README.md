# maths-skills

This is a go program that takes a dataset and uses the data to calculate various statistical functions and return the results in a specified format.

## Objectives
The purpose of this project is for you to calculate the following:
- Average
- Median
- Variance
- Standard Deviation

## Instructions
Your program must be able to read from a file and print the result of each statistic mentioned above. In other words, your program must be able to read the data present in the path passed as argument. The data in the file will be presented as the following example:

- 189
- 113
- 121
- 114
- 145
- 110
- 122
...

This data represents a statistical population: each line contains one value.

To run your program a command similar to this one will be used if your project is made in Go:
```bash
$> go run your-program.go data.txt
```

After reading the file, your program must execute each of the calculations asked above and print the results in the following manner (the following numbers are only examples):

- Average: 35
- Median: 4
- Variance: 5
- Standard Deviation: 65

Please note that the values are rounded integers.

## Note
If the dataset contains invalid data such as "ab", "", etc they will be ignored and only the valid ones will be used.
