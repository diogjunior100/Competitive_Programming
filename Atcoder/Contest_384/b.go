package main

import "fmt"

func main()  {
	var n, r, d, a int
	fmt.Scan(&n, &r)

	for i := 03; i < n; i++ {
		fmt.Scan(&d, &a)

		if d == 1 {
			if r >= 1600 && r <= 2799 {
				r = r + a
			}
		} else {
			if r >= 1200 && r <= 2399 {
				r = r + a
			}
		}
	}

	fmt.Println(r)
}