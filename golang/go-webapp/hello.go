// Dead simple Golang Hello World webapp

package main

import (
	"fmt"
	"log"
	"net/http"
	"sync"
)

var mu sync.Mutex
var count int

func echoString(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "hello, World! from Golang")
}

func main() {
	// Prints the string unformatted
	//	http.HandleFunc("/", echoString)

	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		http.ServeFile(w, r, r.URL.Path[1:])
	})

	log.Fatal(http.ListenAndServe(":8080", nil))

}
