  netmaj$B$O!"(Banalize.c$B$rF~$l49$($k$3$H$G!"?7$7$$%"%k%4%j%:%`$r;}$D%^!<(B
$B%8%c%s%W%l!<%d!<$r:n$k$3$H$,$G$-$^$9!#(B
  analize.c$B$r:9$7BX$($F?7$7$$%3%s%T%e!<%?%W%l!<%d!<$r:n$k$H$-$N;29M$K(B
$B$7$F$/$@$5$$!#(B
  $B$?$@!"$&$=$,:.$8$C$F$$$k$+$b$7$l$J$$$N$G5$$r$D$1$F!#(B

auto(analize.c)$B$r2~B$$7$F!"?7$7$$%3%s%T%e!<%?%W%l!<%d!<$r:n$k;~$N%a%b(B


escape.c+kanalize.c$B$rMQ$$$F?7$7$$%3%s%T%e!<%?%W%l!<%d!<$r:n$C$F$_$?!#(B
$B$=$N$H$-$K$$$m$$$m%=!<%9$rD/$a$F$$$?$H$-$K:n$C$?%a%b!#(B


$B=g;R$N%Q%$$rG'<1$9$k$?$a$N%^%/%m!?4X?t(B

$B$=$l$>$l!"%Q%$$N<oN`$rI=$9CM$r0z?t$K$H$k!#(B

K_PREV(x)
  $BA0$N%Q%$$r<h$j=P$9!##1!<#9!"ElFn@>KL!"GrH/Cf$N=g=x(B. $B$=$l$>$l!"#1$NA0$O!"#9!#(B
$BEl$NA0$O!"KL!#Cf$NA0$OGr$K$J$k!#(B
K_NEXT(x)
  $B8e$N%Q%$$r<h$j=P$9!##1!<#9!"ElFn@>KL!"GrH/Cf$N=g=x(B. $B$=$l$>$l!"#9$N8e$O!"#1!#(B
$BKL$N8e$O!"El!#Gr$N8e$OCf$K$J$k!#(B

K_PREV2(x)
  $B?t;z$N%Q%$$K$D$$$FA0$N%Q%$$r<h$j=P$9!#$J$$>l9g$O!"#0!#(B
K_NEXT2(x)
  $B?t;z$N%Q%$$K$D$$$F8e$N%Q%$$r<h$j=P$9!#$J$$>l9g$O!"#0!#(B

$B<j$N%Q%$$r4IM}$9$k$?$a$N9=B$BN(B  hand_t, ahand_t$B9=B$BN(B

hand_t$B9=B$BN(B

  hand_t$B9=B$BN$O!"(Bpai$B%G!<%?$r!"DL$7HV9f$G$b$C$F$$$k!#(B
  $B$D$^$j!"F1$8#5$N%T%s%:$G$b#4Kg$O$=$l$>$lCM$,0[$J$k!#(B
  hand_t$B9=B$BNFb$N%G!<%?$O!"2hLLI=<($J$I$KMxMQ$5$l$k!#(B

ahand_t$B9=B$BN(B

  ahand_t$B$O!"<j$r0UL#E*$J%Q!<%H$XJ,2r$9$k$7$?%G!<%?$rJ];}$7$F$$$k!#(B
  $BJ];}$7$F$$$k(Bhand_t$B9=B$BN$+$iJQ49$5$l$F(Bahand_t$B9=B$BN$K3JG<$5$l$k!#(B
  ahand_t$B9=B$BN$O!"(Bpai$B%G!<%?$r!"%Q%$$N<oN`$N%3!<%I$KJQ49$7$?$b$N$G%Q%$%G!<%?(B
$B$rJ];}$7$F$$$k!#(B
  ahand_t$B9=B$BN$O!"$"$,$jLr$N7hDj$d!"8=:_$N%Q%$$N9=@.$J$I$N0UL#E*$J2r<a$r(B
$B9T$J$&$?$a$N%G!<%?$rJ];}$9$k$H$-$KMxMQ$5$l$k!#(B

 $B0J2<$N$H$*$j!#(B

 AH_V3_FIXED	$B$J$$$?>l9g$G!"9o;R$K3NDj$7$F$$$k(B
 AH_H3_FIXED	$B$J$$$?>l9g$G!"=g;R$K3NDj$7$F$$$k(B
 AH_V3		$B9o;R$K$J$C$F$$$k!#(B
 AH_V2		$B#2$D$NF1$8CM$NJB$S(B
 AH_H3		$B=g;R$K$J$C$F$$$k(B
 AH_H2a		$BN>LLBT$A(B
 AH_H2b		$B%Z%s%A%c%sBT$A(B
 AH_H2c		$B%+%s%A%c%sBT$A(B

  $B0UL#E*$J%Q!<%H$X2r<a$G$-$J$+$C$?%Q%$$O!"(Bahand_t$B$N(Brest$B$K;D$C$F$$$k!#(B
rest_num$B$,$=$N?t!#(B


ahand_analize

  ahand_t$B9=B$BN$r;H$&<g4X?t$O!"(Bahand_analize$B$G$"$k!#$3$N4X?t$O!"<j$r>e$K(B
$B5s$2$?$h$&$J0UL#$N$"$k%Q!<%H$XJ,2r$9$k!#(B
ahand_analize$B$O!"<j$r2DG=@-$N$"$k8B$j!"J#?t$N%Q%?!<%s$KJ,2r$9$k!#(B
  $BJ#?t$N%Q%?!<%s$KJ,2r$5$l$?<j$O!"(Bresult_ahand$BJQ?t$K!"(Bresult_cnt$BJ,!"3J(B
$BG<$5$l$k!#IaDL$KOBN;$,$C$?>l9g!"OBN;$,$j$N%Q%?!<%s$O$=$NJ#?t$N%Q%?!<%s(B
$B$N$&$A$N$$$:$l$+$K$J$k!#$?$@$7!"@V%I%i$J$I$NFCDj$N%Q%$$rMQ$$$k$b$N$K$D(B
$B$$$F$O(Bahand_t$B$N>pJs$N$_$G$O$=$NE@?t$r@5$7$/H=Dj$G$-$J$$$N$G!"$=$N>l9g(B
$B$O!"(Bhand_t$B$rMQ$$$k$3$H$K$J$k!#(B

$B2O(B

  $B2O$X=P$?%Q%$$O!"#4?M$r$^$?$$$G!"=g=x$h$/%j%9%H$H$7$FJ];}$5$l$F$$$^$9!#(B

$B%"%H%j%S%e!<%H(B

$B2O$N%Q%$$K$O%"%H%j%S%e!<%H$,$D$-$^$9!#(B
$B@bL@$,$A$g$C$H;6J8Iw$G$o$+$j$K$/$$$G$9$,!"%"%H%j%S%e!<%H$O!"(B

 $B$I$&$$$&$U$&$K2O$K=P$?$+!#(B
 $B$=$N%Q%$$X$NH?1~(B
 $B2O$N%Q%$$=$N$b$N$KBP$9$k%"%/%7%g%s(B

$B$0$i$$$N#3<oN`$K$o$+$l$F$$$^$9!#(B

$BH=Dj$K$D$$$F(B

$B%3%s%T%e!<%?%W%l!<%d!<$r:n$k;~$O!"0J2<$N$h$&$JH=Dj$,I,$:I,MW$K$J$j$^$9!#(B

$B$"$,$k$3$H$,$G$-$k$+$I$&$+$NH=Dj(B
$B%F%s%Q%$$+$I$&$+$NH=Dj(B
$B%j!<%A$G$-$k$+$I$&$+$NH=Dj(B
$B%+%s$G$-$k$+$I$&$+$NH=Dj(B
$B%A!<$G$-$k$+$I$&$+$NH=Dj(B
$B%]%s$G$-$k$+$I$&$+$NH=Dj(B

$B$3$l$i$K$D$$$F$O7h$^$jJ86g$,$"$j$^$9$N$G!"(Bnetmaj$B$N%=!<%9!"(B
xui/src/xui/res.c, xui/src/xui/advice[2].c$B$r;2>H$7$F$/$@$5$$!#(B

$B$=$NB>(B

  analize.c$B$O!"Hs>o$K$h$/$G$-$F$$$F!"%P%i%s%9$,$H$l$?%3%s%T%e!<%?%W%l!<(B
$B%d!<$G$9!#$R$H$H$*$j$N$3$H$O$d$C$F$/$l$F$^$9!#(B

  analize.c$B$O!"(BTUNE.j$B$K$b$"$k$H$*$j!"$R$H$D$R$H$D$N%Q%$$KE@?t$r$D$1!"(B
$B$b$C$H$bE@?t$,>.$5$$$b$N$r<N$F$^$9!#(B
  $B%Q%$!J<j!K$O!"J#?t$N0UL#E*$J%Q!<%H$KJ,3d$5$l$^$9$,!"$=$NJ,3d$N;EJ}$OJ#?t(B
$B%Q%?!<%s$"$k$?$a!"$=$N%Q!<%H$NG'<1$4$H$KE@?t$,2C;;$5$l$k$?$a!"(B1223344
$B$J$I$N$h$&$J$$$/$D$K$bJ,3d$G$-$k$h$&$J<j$N>l9g!"E@?t$,#2=E$K7W;;$5$l$k(B
$B$?$a!"M=A[$7$J$$7k2L$r$b$?$i$9$3$H$,$J$$$H$O$$$($^$;$s!#(B
  $B$H$/$K!"#3LLBT$A$J$I$K$D$$$F$O!"%Q%i%a!<%?$K$b$h$j$^$9$,!"=xHW$G!"#3(B
$BLLBT$A$rJx$7$F$7$^$&$3$H$,B?$$$h$&$G$9!#(B

$B%3%s%T%e!<%?%W%l!<%d!<$r6/$/$9$k$?$a$K$O(B
  $B%3%s%T%e!<%?%W%l!<%d!<$r6/$/$9$k$K$O!"%a%s%?%s%T%sA@$$$+$i$J$s$H$+(B
$B$7$F$f$/$H$$$&$N$,!"%3%s%T%e!<%?%^!<%8%c%s$G$O>oF;$N$h$&$G$9!#(B
$B$?$@!"0lDj0J>e$K$J$k$H<+:_$J<j$,MW5a$5$l$k$h$&$G$9!#(B

1.2.8$B0J9_$N(Banalize.c

   netmaj-1.2.8$B0J9_$N(Banalize.c$B$O!"(Bsuz$B$5$s$,=q$-D>$7$F!"$:$$$V$s$H6/$/(B
$B$J$j$^$7$?!#$o$?$7!J$X$\$J$s$G$9$,!K$N%W%l!<$7$?8B$j$G$O!"$o$?$7$N>!N((B
$B$,!"(B20-40%$B$H?M4V$,Aj<j$J$_$K$J$C$?$h$&$G$9!#(B
  analize.c$B$N%"%k%4%j%:%`$NCf$K!"%]%j%7!<$H$$$&35G0$bF3F~$5$l!"%Q%i%a!<(B
$B%?<!Bh$G$O!"$+$J$j$/$;$N$"$kLr;X8~$N%3%s%T%e!<%?%W%l!<%d!<$r:n$k$3$H$b(B
$B2DG=$K$J$C$F$$$^$9!#%]%j%7!<$H%Q%i%a!<%?$K=>$C$F!"<jGW$K1~$8$?!"<+:_$J(B
$BBP1~$,9T$J$o$l$k$h$&$K$J$C$?$h$&$G!"%W%l!<$7$F$$$F$+$J$jJY6/$K$J$j$^$9!#(B
$B$b$O$d!"%^!<%8%c%s%"%k%4%j%:%`$N8&5f0J30$G$O!JC1$KM7$V$@$1$J$i$P!K!"(B
analize.c$B$r<+J,$G:n$k$H$$$&$h$&$JI,MW$O$J$$$+$b$7$l$^$;$s!#(B($B$"$H$O!"@o(B
$BN,!J%]%$%s%H!"=g0L!"6I$K1~$8$?BGGW$NJQ2=!K!"$*$j$k$H$*$j$k%?%$%_%s%0!)(B
$B$N8&5f$0$i$$!)(B)
  $B$H$$$&$3$H$G!"Hs8x<0$ND6<e5$%"%k%4%j%:%`(Bescape.c+kanailize.c$B$O8x3+$5(B
$B$l$k$3$H$J$/$*$/$i$$$j$G$9!#(B

Copyright (C) 1995 Todo Software All rights reserved.
