package main 

import(
	"testing"
	"fmt"
	"os"
	"math-skills/functions"
)

func TestAverage(t *testing.T){
	input, err := os.ReadFile("testData.txt")
	if err != nil{
		fmt.Println("Error:", err)
		os.Exit(1)	
	}

	expectedOutPut := float64(98765432098765438608701698157947138359373535903744)
	result := functions.Average(input)
	if result != expectedOutPut{
		t.Errorf("Expected %.0f but got %.0f", expectedOutPut, result)
	}
}

func TestMedian(t *testing.T){
	input, err := os.ReadFile("testData.txt")
	if err != nil{
		fmt.Println("Error:", err)
		os.Exit(1)	
	}

	expectedOutPut := float64(374)
	result := functions.Median(input)
	if result != expectedOutPut{
		t.Errorf("Expected %.0f but got %.0f", expectedOutPut, result)
	}
}

func TestVariance(t *testing.T){
	input, err := os.ReadFile("testData.txt")
	if err != nil{
		fmt.Println("Error:", err)
		os.Exit(1)	
	}

	expectedOutPut := float64(78036884621246793265508744327307533529960551020946949101511105673964153038259427364915391632909533184)
	result := functions.Variance(input)
	if result != expectedOutPut{
		t.Errorf("Expected %.0f but got %.0f", expectedOutPut, result)
	}
}

func TestStandardDev(t *testing.T){
	input, err := os.ReadFile("testData.txt")
	if err != nil{
		fmt.Println("Error:", err)
		os.Exit(1)	
	}

	expectedOutPut := float64(279350827135426221999859095520080013781830725533696)
	result := functions.StandardDev(input)
	if result != expectedOutPut{
		t.Errorf("Expected %.0f but got %.0f", expectedOutPut, result)
	}
}