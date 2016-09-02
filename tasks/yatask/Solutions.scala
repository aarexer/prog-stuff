package ytasks

import scala.util.Random

class YSolutions {
  /**
    * Task 1.
    * We have binary tree and each node as class:

    * class Node {
    * var payload: Int
    * var left: Node
    * var right: Node
    * }

    * Write function which can count the depth of tree.
    *
    * Input: root node
    * Output: depth of tree as Int
    */

  class Node(var payload: Int,
             var left: Node,
             var right: Node) {
  }

  def height(root: Node): Int = {
    if (root == null) 0
    else 1 + Math.max(height(root.left), height(root.right))
  }


  /**
    * Task 2.
    * Write method which will shuffle elements in Array.
    *
    * Input: Array with elements
    * Output: Shuffled array
    */
  def shuffle(ar: Array[Int]): Unit = {
    for (i <- ar.indices) {
      val dstPos = Random.nextInt(ar.length)
      val elem = ar(dstPos)
      ar(dstPos) = ar(i)
      ar(i) = elem
    }
  }

  /**
    * Task 3.
    * Write method which get n random elements from Array
    *
    * Input: Array and number of elements which we want to return
    * Output: Seq of elements
    */
  def getRandomN(ar: Array[Int], n: Int): Seq[Int] = {
    for(i <- 0 until n) yield {
      val elem = ar(ar.length - i)
      val index = Random.nextInt(ar.length - i)
      ar(ar.length - i) = ar(index)
      ar(index) = elem
      elem
    }
  }

  /**
    * Task 4.
    * Write method which will return the differences between two arrays
    *
    * Input: two arrays
    * Output: Seq of elements which is unique in first array.
    */

  def setDifference(a: Array[Int], b: Array[Int]): Seq[Int] = ???
}
