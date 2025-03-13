package main

import (
	"fmt"
)

func Hello(name string) string {
	message := fmt.Sprintf("hi , %v. welcome", name)
	return message
}
