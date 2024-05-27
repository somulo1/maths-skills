package functions

import(
	"fmt"
	"strconv"
	"strings"
	"math"
	"os"
)

func Average(inputFile []byte) float64{
	input := strings.Split(string(inputFile), "\n")
	inputStr := RemoveInvalid(input)


	var count, sum float64
	
	for i := 0; i < len(inputStr); i++{
		count += 1
		 num, err := strconv.ParseFloat(inputStr[i], 64) //convert the string to float before adding it to sum.
		 if err != nil{
			fmt.Println("Error", err)
			os.Exit(1)
		 }
		
		// fmt.Println(num)
		 sum += num

	}
	
	average := sum/count


	output := math.Round(average)

	
	return output
}
