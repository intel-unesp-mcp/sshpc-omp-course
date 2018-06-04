Matrix Multiplication
Based on Intel Vtune Sample

compilation:

```
cd hands-on/matrix
make clean 
make gcc
```

Execution
```
./matrix.gcc
```

Paralelize the Matrix Multiplication function (multiply0) on "sshpc-omp-course/hands-on/matrix/src/multiply.c"

You can change the matrix size using the definition "#define NUM 2048" at "sshpc-omp-course/hands-on/matrix/src/multiply.h" 

Compare the execution of serial matrix multiplication against parallel version using NUM=512,1024 and 2048


Matrix Transposition

The following code was used in the book "lots of core" volume 1 - Chapter 24


sshpc-omp-course/hands-on/Transposition

IronBar 

This code was used as warmup for Marathon of Parallel Programming at ERAD-SP 2018 (https://eradsp2018.lsc.ic.unicamp.br/desafio.html)


compile
```
gcc -O3 -fopenmp ironbar.c -o ironbar
```
Execute
```
./ironbar < input
```


Harmonic Progression SUM (WSCAD 2016 warmup)​

This code implements the Harmonic Progression sum and was used as warmup for Marathon of Parallel Programming at WSCAD 2016 (http://www.wscad-2016.ufs.br)

Compilation
```
cd sum
make
```

Execution:

Fast example
```
./sum < sum.in
```

Slower example
```
./sum < sum2.in
```


Apply task parallelism to QuickSort algorithm

Compilation
```
gcc -fopenmp -o quicksort quicksort.c
```
	
Execution
```
    ./quicksort [size] 
```
Parameter [size] is size of array

Example: ./quicksort 20000000
