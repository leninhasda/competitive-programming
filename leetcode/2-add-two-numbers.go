/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func print(n int) *ListNode {
  return &ListNode{n, nil}
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
  l1Arr := nodeToArray(l1)
  l2Arr := nodeToArray(l2)
  //return arrayToNode(l1Arr)
  
  var res []int
  if len(l1Arr) < len(l2Arr) {
    res = addArrays(l1Arr, l2Arr)
  } else {
    res = addArrays(l2Arr, l1Arr)
  }
  
  return arrayToNode(res)
}

func addArrays(a, b []int) []int {
  var i, ans, car, mod int
  for i=0; i<len(a); i++ {
    ans = a[i] + b[i] + car
    mod, car = ans % 10, ans / 10
    b[i] = mod
  }
  //return []int{i}
  for ; i<len(b); i++ {
    ans = b[i] + car
    mod, car = ans % 10, ans / 10
    b[i] = mod
  }
  if car != 0 {
    b = append(b, car)
  }
  return b
}

func arrayToNode(arr []int) *ListNode {
  var head *ListNode
  var cur *ListNode
  var tmp *ListNode
  
  for _, n := range arr {
    tmp = new(ListNode)   
    tmp.Val = n
    if cur == nil {
      cur = tmp
    } else {
      cur.Next = tmp
      cur = tmp
    }
    if head == nil {
      head = cur
    }
  }
  
  return head
}

func nodeToArray(l *ListNode) []int {
  var ret []int
  for l !=nil {
    ret = append(ret, l.Val)
    l = l.Next
  } 
  
  return ret
}

/*
func reverseArray(ret []int) []int {
  ln := len(ret)
  for i:=0; i< ln / 2; i++ {
    ret[i], ret[ln-1-i] = ret[ln-1-i], ret[i]
  }
  return ret
}

/ *
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
  s := getSumOfNode(l1)
  return print(s)
  t := s + getSumOfNode(l2) 
  
  var n int
  var cur *ListNode
  var head *ListNode
  var tmp *ListNode
  
  for true {
    n, t = t % 10, t / 10
    
    tmp = new(ListNode)
    tmp.Val = n
    
    if cur == nil {
      cur = new(ListNode)
    }
    cur.Next = tmp
    cur = cur.Next
    
    if head == nil {
      head = cur
    }
    
    if t == 0 {
      break
    }
  }
  
  return head
}

func getSumOfNode(n *ListNode) int {
  var sum int
  var cnt int
  
  for n != nil {
    sum = sum + n.Val * pow10(cnt)
    n = n.Next
    cnt++
  }
  
  return sum
}

func pow10(cnt int) int {
  p := 1
  for cnt != 0 {
    p = p * 10
    cnt--
  }
  return p
}
*/
