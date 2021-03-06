# Matrix Multiplication

This code is part of Intel Vtune Sample

Parallelize the Matrix Multiplication function (multiply0) on "hands-on/matrix/src/multiply.c"

You can change the matrix size using the definition "#define NUM 2048" at "sshpc-omp-course/hands-on/matrix/src/multiply.h" 

Compare the execution of serial matrix multiplication against parallel version using NUM=512,1024 and 2048

compilation:
```
cd hands-on/matrix/linux
make clean 
make gcc
```

Execution:
```
./matrix.gcc
```

# Matrix Transposition

The following code was used in the book "lots of core" volume 1 - Chapter 24 (http://lotsofcores.com/)

Parallelize the Transposition function at "hands-on/Transposition/Transpose.cc"

compilation:
```
cd hands-on/Transposition
make clean 
make runme-CPU
```

Execution:
```
./runme-CPU [size] [repetition]
```

Parameter [size] is size of array
Parameter [trials] define how many times the operations will be performed

Example: ./runme-CPU 3000 100

# IronBar 

Parallelize this code using OpenMP.

This code was used as warmup for Marathon of Parallel Programming at ERAD-SP 2018 (https://eradsp2018.lsc.ic.unicamp.br/desafio.html)

compilation:
```
gcc -O3 -fopenmp ironbar.c -o ironbar
```
Execution:
```
./ironbar < input2
```

# Harmonic Progression SUM (WSCAD 2016 warmup)​

Parallelize this code using OpenMP.

This code implements the Harmonic Progression sum and was used as warmup for Marathon of Parallel Programming at WSCAD 2016 (http://www.wscad-2016.ufs.br)

Compilation:
```
cd sum
g++ sum.cpp -o sum -fopenmp
```

Execution:

Fast example:
```
./sum < sum.in
```

Slower example:
```
./sum < sum2.in
```

# QuickSort algorithm

Paralelize this code using OpenMP Tasks.

Compilation:
```
gcc -fopenmp -o quicksort quicksort.c
```
	
Execution:
```
    ./quicksort [size] 
```
Parameter [size] is size of array

Example: ./quicksort 20000000
