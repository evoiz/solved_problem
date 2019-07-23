<?php
$n = fgets(STDIN);
$total=0;
$ans=0;
for($i=0;$i<$n;$i++){
list($a, $b) = explode(' ',trim(fgets(STDIN)));
 $total-=$a-$b;
 if($total>$ans){$ans=$total;}
}
echo $ans;
?>