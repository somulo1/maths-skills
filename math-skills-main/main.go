package main

import (
	"fmt"
	"strings"
	"os"
	"math-skills/functions"
)

func main(){

	if len(os.Args) != 2{
		fmt.Println("Please enter exactly 2 arguments!")
		return
	}

	input := os.Args[1]

	if !strings.HasSuffix(input, ".txt") {
		fmt.Println("file format not supported: only .txt files are allowed")
		os.Exit(1)
    }

	inputFile, err := os.ReadFile(input)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	/*** Uncomment if you want an error message displayed incase the dataset contains some invalid data. Remember to import "strings"
	inputFileLine := strings.Split(string(inputFile), "\n")
	inputStr := functions.RemoveInvalid(inputFileLine)

	if len(inputFileLine) != len(inputStr){
		 fmt.Println("The dataset contains some invalid data (e.g letters, empty lines etc) that have been ignored!")
	} ***/
	//thing, _ := strconv.ParseFloat("759", 64)

	fmt.Printf("Average: %.0f\n",functions.Average(inputFile))
	fmt.Printf("Median: %.0f\n",functions.Median(inputFile))
	fmt.Printf("Variance: %.0f\n",functions.Variance(inputFile))
	fmt.Printf("Standard Deviation: %.0f\n",functions.StandardDev(inputFile))
}
