import java.util.Collections.*
import java.util.Scanner
import kotlin.math.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var fr= IntArray(30,{0})
    var n:Int=reader.nextInt();
    var s:String= reader.next()
    if(n==1){ println("YES");return;}
    for(c in s){
        var tmp:Int=c-'a';
        if(fr[tmp]==1){ println("Yes");return ;}
        fr[tmp]++;
    }
    println("No");
}