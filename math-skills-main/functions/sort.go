package functions

func CustomSort(input []string) {
    n := len(input)
    for i := 0; i < n-1; i++ {
        for j := 0; j < n-i-1; j++ {
            // Convert string to integer for comparison
            num1 := StrToInt(input[j])
            num2 := StrToInt(input[j+1])
            if num1 > num2 {
                // Swap if num1 is greater than num2
                input[j], input[j+1] = input[j+1], input[j]
            }
        }
    }
}
