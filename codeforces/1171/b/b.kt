import java.util.Collections.*
import java.util.Scanner
import kotlin.math.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var a:Int =reader.nextInt()
    var b:Int =reader.nextInt()
    var c:Int =reader.nextInt()
    var ans=(min(a+2,min(b+1,c))-1)*3
    println("$ans")
}