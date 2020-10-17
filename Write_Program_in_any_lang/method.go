package main

import "fmt"

type Vertex struct {
	X, Y float64
}

func (v *Vertex) Scale(f float64) {
	v.X *= f
	v.Y *= f
}
func Scale2(v *Vertex, f float64) {
	v.X *= f
	v.Y *= f
}

func main() {
	v := Vertex{3, 4}
	v.Scale(2)
	Scale2(&v, 10)

	p := &Vertex{4, 3}
	p.Scale(3)
	Scale2(p, 8)

	fmt.Println(v, p)
}
