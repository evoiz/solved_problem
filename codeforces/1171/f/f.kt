import java.util.Collections.*
import java.util.Scanner
import kotlin.math.*
import kotlin.collections.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)

   var t:Int =reader.nextInt()
    for(tt in 1..t){
        var all:MutableList<Pair<Int,Int> > = mutableListOf<Pair<Int,Int>>()
        var mp :MutableMap<Int,Int> = mutableMapOf<Int,Int>()
        var n:Int=reader.nextInt();
        var mx:Int=-2
        for(i in 1..n){
            var x:Int=reader.nextInt();
            var y:Int=reader.nextInt();
            all.add(Pair(x,y))
            mx=max(mx,y)
            if(!mp.containsKey(y)){mp[y]=0;}
            if(!mp.containsKey(x)){mp[x]=0;}
            if(mp[x]==0){mp[x]=1}
            else{mp[x]=mp[x]!!+1}
            if(mp[y]==0){mp[y]=-1}
            else{mp[y] = mp[y]!!-1}

        }
        var cnt:Int=0;
        var d:Int=-1;
        mp=mp.toSortedMap()
        for(x in mp){

            var tmp=x.value;
            cnt+=tmp;
           /// println("${x.key}  $cnt")
            if(d==-1 && mx!=x.key && (cnt==0)){d=x.key;}
        }
       // print("$d    ")
        //print("$mx    ")
        if(d==-1){println("-1");continue;}
        for(x in all){
            if(x.second<=d){print("1 ");continue;}
            print("2 ");
        }
        print("\n");
    }

}
/**
10000
10
30518 196518
74071 159971
4862 150121
43967 173607
19138 90754
19513 171337
149873 183499
61387 142337
95917 197647
13076 118417
10
22012 68000
105826 195703
126356 134728
133227 135984
26371 32864
11196 93387
58251 176565
44054 113672
67148 79390
67050 100005
10
2772 146349
151131 199375
172790 180885
70269 146158
90994 166215
61155 98323
8310 196011
181393 195718
20 157101
1501 156450
**/