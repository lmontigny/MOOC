println("Hello")
math.pow(2,2)

// Variable
var foo: Int = 10
val bar: Double = 2.5
val c = 12
val d = true

// String
val my_string = "Hello"
val e = "bonjour"+"monsieur"
e.length
e.charAt(0)
e.indexOf("o")
e slice (0,4)
e matches "bonsoir"
val test = s"hello $e"  //or use f
printf("hello %f", 10.0)

// Tuples
val my_tup = (1,2.3,"hello",(2,3))
my_tup._3

// Collections
// Lists
val evens = List(2,3,6,8)
evens(0)
evens.head
evens.tail
evens.sorted
evens.drop(2)
evens.takeRight(1)
evens slice (0,3)
val my_list = List(List(1,2),List(4,8))
val my_list = List("a",1)

// Array
val x = Array(1,2,3,"a")
Array.range(0,100,0.5)
Range(0,5) // scala collection

// Sets
// Unordered collection of element
val s1 = Set(1,2,3)
val s2 = Set(1,2,3,3,3,3,3)  // s2 = s1
val s2 = collection.mutable.Set(1,2,3)
s += 3 // add a number in the set
evens.toSet

// Maps
val x = Map(("a",1),("b",2),("c",3))
x("a")
x get "a"
val x = collection.mutable.Map(("a",1),("b",2),("c",3))
x += ("d" -> 9)
x.keys
x.values

// Flow control
if(3==3 && true || 1 == 1){
  println("hello")
} else {
}

for(item <- List(1,2,3)){
  println(item)
}
for(num <- Range(0,10)){}
val my_list = List("a","b")
for(name <- myList){}

var x = 0
while(x <5){
  x = x+1
}

import scala.util.control.Breaks._
var y = 0
while(y< 10){
  println(s"y is $y")
  y = y+1
  if(y==3) break
}

// Function
def simple(num1:Int, num2:Int): Int = {
  printf("hello")
  return num1 + num2
}
simple(4,5)

val x = List(1,2,3)
def checks(y:List[Int]) = List[Int]={
  return y
}
