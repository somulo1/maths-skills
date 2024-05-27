package functions

import(
	"math"
)

func StandardDev(inputFile []byte) float64{
	n := Variance(inputFile)

	if n == 0 || n == 1 {
        return n
    }

	output := math.Round(math.Sqrt(n))

return output
}
