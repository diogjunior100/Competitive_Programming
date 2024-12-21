package main

import "fmt"

func main () {
	var a,b,c int

	fmt.Scan(&a,&b,&c)

	if a == b && b == c {
		fmt.Println("Yes")
	} else if (c == (a+b)) || (a == (b+c)) || (b == (a+c)) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}