package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	nd := strings.Split(readLine(reader), " ")

	nTemp, err := strconv.ParseInt(nd[0], 10, 64)
	checkError(err)
	n := int32(nTemp)

	dTemp, err := strconv.ParseInt(nd[1], 10, 64)
	checkError(err)
	d := int32(dTemp)

	aTemp := strings.Split(readLine(reader), " ")

	//var a []int32

	/*for aItr := 0; aItr < int(n); aItr++ {
	    aItemTemp, err := strconv.ParseInt(aTemp[aItr], 10, 64)
	    checkError(err)
	    aItem := int32(aItemTemp)
	    a = append(a, aItem)
	}*/

	/*
	 * write code here
	 */
	_ = n
	aTemp = append(aTemp[d:], aTemp[0:d]...)

	fmt.Println(strings.Join(aTemp, " "))
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
	if err != nil {
		panic(err)
	}
}
