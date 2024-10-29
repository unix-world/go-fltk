package main

import (
	"github.com/unix-world/go-fltk"
)


const (
	TCP_PORT_TXT string = "TCP Port"
	TCP_PORT_MIN uint16 = 13770
	TCP_PORT_DEF uint16 = 13778
	TCP_PORT_MAX uint16 = 13788

	TXT_STOPPED  string = "Service is Stopped ..."
	TXT_RUNNING  string = "Service is Running ..."
)

var isRunning bool = false
var tcpPort uint16 = TCP_PORT_DEF

func makeScaleSpinner(x int, y int, w int, h int) *fltk.Spinner {
	spinner := fltk.NewSpinner(x, y, w, h)
	spinner.SetTooltip(TCP_PORT_TXT)
	spinner.SetType(fltk.SPINNER_INT_INPUT)
	spinner.SetMinimum(float64(TCP_PORT_MIN))
	spinner.SetMaximum(float64(TCP_PORT_MAX))
	spinner.SetStep(1)
	spinner.SetValue(float64(TCP_PORT_DEF))
	spinner.SetCallback(func() {
		tcpPort = uint16(spinner.Value())
		println(TCP_PORT_TXT + ":", tcpPort)
	})
	return spinner
}

func handleToggle(spin *fltk.Spinner, nfo *fltk.Box) {
	var txtStatus string = ""
	if(isRunning) {
		spin.Deactivate()
		nfo.SetLabel(TXT_RUNNING)
		txtStatus = TXT_RUNNING
	} else {
		spin.Activate()
		nfo.SetLabel(TXT_STOPPED)
		txtStatus = TXT_STOPPED
	}
	println("INF:", txtStatus, TCP_PORT_TXT + ":", tcpPort)
}

func makeToggleButton(x int, y int, w int, h int, spin *fltk.Spinner) (*fltk.ToggleButton, *fltk.Box) {
	nfo := fltk.NewBox(fltk.NO_BOX, x, y+35, w, h*2, TXT_STOPPED)
	nfo.SetLabelSize(12)
	btn := fltk.NewToggleButton(x, y, w, h, "@+9circle")
	btn.SetColor(0xDDDDDD00)
	btn.SetSelectionColor(0xDDDDDD00)
	btn.SetLabelColor(0xC2203F00)
	btn.SetBox(fltk.RFLAT_BOX)
	btn.SetDownBox(fltk.RFLAT_BOX)
	btn.ClearVisibleFocus()
	btn.SetAlign(fltk.ALIGN_INSIDE | fltk.ALIGN_LEFT)
	btn.SetTooltip("Start / Stop Service")
	btn.SetCallback(func() {
		parent := btn.Parent()
		if btn.Value() {
			btn.SetAlign(fltk.ALIGN_INSIDE | fltk.ALIGN_RIGHT)
			btn.SetLabelColor(0x3367C200)
			parent.Redraw()
			isRunning = true
		} else {
			btn.SetAlign(fltk.ALIGN_INSIDE | fltk.ALIGN_LEFT)
			btn.SetLabelColor(0xC2203F00)
			parent.Redraw()
			isRunning = false
		}
		handleToggle(spin, nfo)
	})
	return btn, nfo
}


func main() {
	fltk.InitStyles()
	fltk.SetBackgroundColor(255, 255, 255)
	win := fltk.NewWindow(200, 200)
	win.SetLabel("Service Control")

	spin := 			makeScaleSpinner(55,  50, 85, 25)
	/*togg, lbl :=*/ 	makeToggleButton(55, 100, 85, 15, spin)

	win.End()
	win.Show()
	fltk.Run()
}

// #end
