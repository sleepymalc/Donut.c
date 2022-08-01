# Donut.c

<p align="center">
	<img src="https://github.com/sleepymalc/Donut.c/blob/master/donut.c.gif"/>
</p>

<p align="center"><b><i>
	A Comprehensive Guide on the Mechanism of Donut.c
</i></b></p>

## Introduction

Back in 2006, there was an interesting c project on the internet called [`Donut.c`](https://github.com/sleepymalc/Donut.c/blob/master/source_code/donut.c)[^1], which *not only looks like a donut but can also print the ASCII characters in the terminal of a rotating donut*.

```c++
             k;double sin()
         ,cos();main(){float A=
       0,B=0,i,j,z[1760];char b[
     1760];printf("\x1b[2J");for(;;
  ){memset(b,32,1760);memset(z,0,7040)
  ;for(j=0;6.28>j;j+=0.07)for(i=0;6.28
 >i;i+=0.02){float c=sin(i),d=cos(j),e=
 sin(A),f=sin(j),g=cos(A),h=d+2,D=1/(c*
 h*e+f*g+5),l=cos      (i),m=cos(B),n=s\
in(B),t=c*h*g-f*        e;int x=40+30*D*
(l*h*m-t*n),y=            12+15*D*(l*h*n
+t*m),o=x+80*y,          N=8*((f*e-c*d*g
 )*m-c*d*e-f*g-l        *d*n);if(22>y&&
 y>0&&x>0&&80>x&&D>z[o]){z[o]=D;;;b[o]=
 ".,-~:;=!*#$@"[N>0?N:0];}}/*#****!!-*/
  printf("\x1b[H");for(k=0;1761>k;k++)
   putchar(k%80?b[k]:10);A+=0.04;B+=
     0.02;}}/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/
```

And recently it is widely spread and discussed through the internet, and after we look into the source code, we find out that the whole algorithm is based on what we have learned in Vv214. From here, we want to do some deep research and expand this project based on the current one.

[^1]: Note that we re-factorize the source code to make it *human-readable*. The original code is literally like a donut.

## Report

The `Donut.c.pdf` provides a short but comprehensive slide to walk you through all the math behind [`Donut.c`](https://github.com/sleepymalc/Donut.c/blob/master/source_code/donut.c).
> Due to the `.gif` in the presentation slides, please only use [Adobe Acrobat](https://www.adobe.com/documentcloud/integrations/microsoft-search.html?s_cid=7015Y0000039qpxQAA&sdid=HVQ7X2NM&mv=search&s_kwcid=AL!3085!3!518186549439!e!!g!!adobe%20pdf!12908270773!121154142426&ef_id=Cj0KCQjw852XBhC6ARIsAJsFPN26h3ML9rEbUnWDlTdvLqTUNFJDkJwfGv0WwqkDXshEuoEUgckbagMaApYpEALw_wcB:G:s) to open the [`.pdf`](https://github.com/sleepymalc/Donut.c/blob/master/presentation/Donut.c.pdf), in this way it can work properly as it should.

## About Honor Code

If there is the same project in the future in VG101, it is the responsibility of JI students not to copy or modify these codes, or TeX files because it is against the Honor Code. The owner of this repository doesn't take any commission for others' faults.

According to the SJTU student handbook (2019 version),

> It is a violation of the Honor Code for students to submit, as their own, work that is not the result of their own labor and thoughts. This applies, in particular, to ideas, expressions or work obtained from other students as well as from books, the internet, and other sources. The failure to properly credit ideas, expressions or work from others is considered plagiarism.

## Contribution

<p align="center"><b><i>
	Chen Xiaoyu, Wu Jinyi, Pingbang Hu
</i></b></p>

---

The works are partially contributed by some other students, TAs, and professors in JI, which would be listed if known.
> If you find any problems in the repository, welcome to make an issue or pull request.

##	Source

1. [Donut math: how donut.c works](https://www.a1k0n.net/2011/07/20/donut-math.html)
2. [3D computer graphics](https://en.wikipedia.org/wiki/3D_computer_graphics)
3. [Z-Buffer Algorithm](https://www.javatpoint.com/computer-graphics-z-buffer-algorithm)
