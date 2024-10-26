package main

import (
	"fmt"
)

func main()  {
	var n, c, value int
	var sum int = 0

	fmt.Scan(&n, &c)

	var v [n+1]int

	for i:= 0; i < 10; i++ {
		fmt.Scanf(&value)
		v = append(v, value)
	}

	atual := v[0]
	var count int = 1

	for n != 0 {
		if (v[count] - atual) >= c {
			sum = sum + 1
			atual = v[count]
		}
		count = count + 1
		n = n - 1
	}

	fmt.Println(sum + 1)
}