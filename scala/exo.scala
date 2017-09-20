import scala.util.control.Breaks._

def singleEven(x:Int): Boolean = {
  return num%2 == 0
}

def evenList(x:List[Int]): Boolean = {
  for(item <- x){
    if(item%2==0) {
      return true
    }
  }
  return false
}

def sumList(x:List[Int]): Int = {
  var sum = 0
  for(item <- x){
    if(item == 7) sum += 2*item
    else sum += item
  }
  return sum
}

singleEven(3)
evenList(List(1,2,3,4))
sumList(List(1,2,3,4))
sumList(List(1,2,3,4,7))
