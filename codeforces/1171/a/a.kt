import java.util.Scanner
fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var t:Int = reader.nextInt()
    while(t>0){
        var n:Int = reader.nextInt()
        var ans=n/2;
        println("$ans")
        t--
    }
}