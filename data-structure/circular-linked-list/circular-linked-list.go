package circularlinkedlist

import "fmt"

type node struct {
	data int
	next *node
	prev *node
}

type list struct {
	head *node
	tail *node
}

func (l *list) insert(data int) {
	nn := &node{data, nil, nil}

	if l.head == nil {
		nn.next = nn
		nn.prev = nn

		l.head = nn
	} else {
		nn.next = l.tail.next
		nn.prev = l.tail

		l.tail.next = nn
	}

	l.tail = nn
}

func (l *list) print() {
	tmp := l.head
	for tmp != nil {
		fmt.Printf("%d ", tmp.data)
		tmp = tmp.next
		if tmp == l.head {
			break
		}
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
		if tmp == l.head {
			break
		}
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

		if tmp == l.head { // if back to head
			break
		}
	}
}

func RunExample() {
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
