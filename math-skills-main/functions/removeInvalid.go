package functions

import(
	"strconv"
	//"fmt"
)

func RemoveInvalid(input []string) []string{
	var output []string

	for _, num := range input{
		_, err := strconv.ParseFloat(num, 64)
		if err != nil{
			continue
		}else{
			output = append(output, num)
		} 
		
	}
	return output
}
