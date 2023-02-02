<?php
//sap xep tu lon den nho
$a= readline('Nhap a: ');
$b= readline('Nhap b: ');
$c= readline('Nhap c: ');
$d= readline("Nhap d: ");

//echo "day so da sap xep = $a.$b.$c.$d\n";
if ($a < $b){
    $tg = $a;
    $a = $b;
    $b = $tg;
}
//echo "day so da sap xep = $a.$b.$c.$d\n";
if ($a < $c){
    $tg = $a;
    $a = $c;
    $c =$tg;
}
//echo "day so da sap xep = $a.$b.$c.$d\n";
if ($a < $d){
    $tg = $a;
    $a = $d;
    $d =$tg;
}
//echo "day so da sap xep = $a.$b.$c.$d\n";
if ($b < $c){
    $tg = $b;
    $b = $c;
    $c =$tg;
}
//echo "day so da sap xep = $a.$b.$c.$d\n";
if ($b < $d){
    $tg = $b;
    $b = $d;
    $d =$tg;
}
//echo "day so da sap xep = $a.$b.$c.$d\n";
if ($c < $d){
    $tg = $c;
    $c = $d;
    $d = $tg;
}
echo "day so da sap xep = $a.$b.$c.$d\n";
