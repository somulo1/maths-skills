package functions

import(
	"strings"
	"strconv"
	"math"
	"sort"
)


func Median(inputFile []byte) float64{
	input := strings.Split(string(inputFile), "\n")
	inputStr := RemoveInvalid(input)
		
	sort.Strings(inputStr) // sort the slice in ascending order

	var num1, num2, median float64
	n := len(inputStr)
	
	for i := 0; i < n; i++{
		if len(inputStr)%2 == 0{ //check if the length is an even integer.
			num1, _ = strconv.ParseFloat(inputStr[(n/2)-1], 64)
			num2, _ = strconv.ParseFloat(inputStr[(n/2)], 64)
			median = (num1+num2)/2
		} else{
			median, _ = strconv.ParseFloat(inputStr[(n/2)], 64)
		}
			
	}

	output := math.Round(median)

	return output
}
