import java.util.Collections.*
import java.util.Scanner
import kotlin.math.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var x:Int=reader.nextInt();
    var y:Int=reader.nextInt();
    var z:Int=reader.nextInt();
    var a:Int=reader.nextInt();
    var b:Int=reader.nextInt();
    var c:Int=reader.nextInt();
    if(a<x){println("NO");return ;}
    else {a-=x}
    if(a+b<y){println("NO");return ;}
    else{
        var mn:Int=0
        mn=min(y,a);
        a-=mn;
        y-=mn;
        mn=min(b,y)
        b-=mn;
        y-=mn;
    }
    if(a+b+c<z){println("NO");return ;}
    println("YES");

}