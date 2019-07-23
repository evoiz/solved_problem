import java.util.Collections.*
import java.util.Scanner
import kotlin.math.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var t:Int=reader.nextInt();
    for(tt in 1..t){
        var fr= IntArray(30,{0})
        var s: String = reader.next()
        for(c in s){
            var tmp:Int=c-'a'
            fr[tmp]++
        }
        var ch:Int=0;
        for (i in fr) {
            if(i>0){ch++}
        }
       // println("$ch")
        if(ch==1){println("-1");continue;}
        var n=s.length
        var l=0;
        var ans:String=""
        while (l<n){
            for(i in 0..25){
                if(fr[i]>0){
                    var c:Char='a'+i
                    ans=ans+c
                    fr[i]--;
                    l++;
                }
            }
        }
        ans=ans.rotate(1)
        println("$ans")
    }

}
fun String.rotate(n: Int) = drop(n % length) + take(n % length)