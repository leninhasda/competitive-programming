package main

import "fmt"

type node struct {
	data int
	next *node
}

type list struct {
	head *node
}

func (l *list) insert(data int) {
	nn := &node{data, nil}

	if l.head == nil {
		l.head = nn
	} else {
		tmp := l.head
		for tmp.next != nil {
			tmp = tmp.next
		}
		tmp.next = nn
	}
}

func (l *list) print() {
	tmp := l.head
	for tmp != nil {
		fmt.Printf("%d ", tmp.data)
		tmp = tmp.next
	}
	println()
}

func (l *list) search(data int) bool {
	tmp := l.head
	for tmp != nil {
		if data == tmp.data {
			return true
		}
		tmp = tmp.next
	}

	return false
}

func (l *list) remove(data int) {
	tmp := l.head
	var prev *node
	for tmp != nil {
		if data == tmp.data {
			if prev == nil {
				l.head = tmp.next
			} else {
				prev.next = tmp.next
			}
			tmp.next = nil
		}
		prev = tmp
		tmp = tmp.next
	}
}

func main() {
	lst := new(list)
	lst.insert(10)
	lst.insert(20)
	lst.insert(30)
	lst.insert(40)
	lst.print()
	println(lst.search(30))
	println(lst.search(70))
	lst.remove(10)
	lst.print()
	lst.remove(30)
	lst.print()
	lst.remove(40)
	lst.print()
}
