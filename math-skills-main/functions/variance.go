package functions

import(
	"strconv"
	"strings"
	"math"
)

func Variance(inputFile []byte) float64{
	mean := Average(inputFile)
	
	input := strings.Split(string(inputFile), "\n")
	inputStr := RemoveInvalid(input)

	var sum, count float64

	for i := 0; i < len(inputStr); i++{
		count++
		num, _ := strconv.ParseFloat(inputStr[i], 64) 
		diff := num - float64(mean)
		diff2 := (diff*diff)
		sum += diff2
	}
	result := sum/count
	output := math.Round(result)


	return output
}