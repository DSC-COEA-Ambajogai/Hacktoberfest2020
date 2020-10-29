package main

import "fmt"

func main() {
	printMe("Hello, world from GO!")
	printMe(string(add(1, 1)))
}

func printMe(str string) {
	fmt.Println(str)
}

func add(x, y int) int {
	return x + y
}
