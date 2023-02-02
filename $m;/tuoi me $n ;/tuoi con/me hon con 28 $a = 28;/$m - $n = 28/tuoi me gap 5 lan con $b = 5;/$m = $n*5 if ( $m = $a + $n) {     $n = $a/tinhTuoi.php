<?php
//tuoi me 
$m;
//tuoi con 
$n;
// C laf me hon tuoi con 28 (a-b = 28)
//tuoi me gap 5 lan tuoi conc (a= 5b)
// giai hpt tuyen tinh
// {$am + $bn = c
// {$dm + $en = f
// $a $b $c $d $e $f la he so cho truoc
$a = 1;
$b = -1;
$c = 28;
$d = 1;
$e = -5;
$f = 0;
$S = ($a*$e)-($d*$b);
$M = ($c*$e)-($f*$b); 
$N = ($a*$f)-($d*$c);
if ($S == 0)
    if ($M + $N = 0){
        echo "Co vo so truong hop";
    }
    else 
    echo "Khong co truong hop phu hop";
else
    $m = $M/$S;
    $n = $N/$S;
echo "tuoi me la; $m\n";
echo "tuoi con la; $n\n";
/=============================================================
  $m; //tuoi me
$n ;//tuoi con
//me hon con 28
$a = 28; //$m - $n = 28
//tuoi me gap 5 lan con
$b = 5; //$m = $n*5
if ( $m = $a + $n)
{
    $n = $a / ($b - 1);
    $m = $n + $a;
}
echo "Tuoi me la: $m \nTuoi con la: $n";
