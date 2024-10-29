package main

import (
	"fmt"

	"github.com/unix-world/go-fltk"
)

func main() {
	win := fltk.NewWindow(400, 300)
	box := fltk.NewBox(fltk.FLAT_BOX, 0, 0, 400, 300, "")
	image, err := fltk.NewSvgImageLoad("golang-logo.svg")
	if err != nil {
		fmt.Printf("An error occured: %s\n", err)
	} else {
		image.Scale(100, 100, true, true)
		box.SetImage(image)
	}
	win.End()
	win.Show()
	fltk.Run()
}
