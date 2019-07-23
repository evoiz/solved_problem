import java.util.Scanner
fun main(args: Array<String>) {

    val input = Scanner(System.`in`)
    ///while(true) {
        val a = input.nextInt()
        val x = input.nextInt()
        val y = input.nextInt()
        val fin: Int = 2
        if (x > 0 && x < a && y > 0 && y < a) {
            println(0)
        } else if ((x == a && y >= 0 && y <= a)) {
            println(1)
        } else if (y == a && x >= 0 && x <= a) {
            println(1)
        } else if (x == 0 && y >= 0 && y <= a) {
            println(1)
        } else if (y == 0 && x >= 0 && x <= a) {
            println(1)
        } else println(2)
   /// }
}