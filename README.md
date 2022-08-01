# Donut.c

<p align="center">
	<img src="https://github.com/sleepymalc/Donut.c/blob/master/donut.c.gif"/>
</p>

<p align="center"><b><i>
	A Comprehensive Guide on the Mechanism of Donut.c
</i></b></p>

## Introduction

Back in 2006, there was an interesting c project on the internet called `Donut.c`, which can print the ASCII characters in the terminal of a rotating donut. And recently it is widely spread and discussed through the internet, and after we look into the source code, we find out that the whole algorithm is based on what we have learned in Vv214. From here, we want to do some deep research and expand this project based on the current one.

## Concepts

Here we list some useful concepts of linear algebra to help us print the rotating donut on the terminal.

1. Rotation Matrix in 3-dimensional space.
Orthogonality: produce normal vector from a surface.
2. Inner product: dot product of normal vector and light vector to get the brightness.
3. Projection: to produce 2d animation from 3d space.
4. Discrete Dynamic System: Frame by frame is generated.

With these, we can get a thorough understanding of the whole concept, which allows us to further modify it and generate different kinds of animation. For example, we can change the shape, the size, the rotating speed, or even the dimension of the object.

##	Source

1. [Donut math: how donut.c works](https://www.a1k0n.net/2011/07/20/donut-math.html)
2. [3D computer graphics](https://en.wikipedia.org/wiki/3D_computer_graphics)
3. [Z-Buffer Algorithm](https://www.javatpoint.com/computer-graphics-z-buffer-algorithm)

## Reminder

Due to the `.gif` in the presentation slides, please only use [Adobe Acrobat](https://www.adobe.com/documentcloud/integrations/microsoft-search.html?s_cid=7015Y0000039qpxQAA&sdid=HVQ7X2NM&mv=search&s_kwcid=AL!3085!3!518186549439!e!!g!!adobe%20pdf!12908270773!121154142426&ef_id=Cj0KCQjw852XBhC6ARIsAJsFPN26h3ML9rEbUnWDlTdvLqTUNFJDkJwfGv0WwqkDXshEuoEUgckbagMaApYpEALw_wcB:G:s) to open the [`.pdf`](https://github.com/sleepymalc/Donut.c/blob/master/presentation/Donut.c.pdf), in this way it can work properly as it should.

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
