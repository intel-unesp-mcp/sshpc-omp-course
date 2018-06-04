Matrix Multiplication
Based on Intel Vtune Sample

compile
```
cd hands-on/matrix
make clean 
make gcc
```
Execute
```
./matrix.gcc
```

Paralelize the Matrix Multiplication function (multiply0) on "sshpc-omp-course/hands-on/matrix/src/multiply.c"

change the definition "#define NUM 2048" to define the size of matrix on "sshpc-omp-course/hands-on/matrix/src/multiply.h"

Compare the execution of serial matrix multiplication against parallel version using NUM=512,1024 and 2048



IronBar (ERAD-SP 2018 warmup)

compile
```
gcc -O3 -fopenmp ironbar.c -o ironbar
```
Execute
```
./ironbar < input
```


Matrix Transposition
IronBar (ERAD-SP 2018 warmup)
Harmonic Progression SUM (WSCAD 2016 warmup)​
Apply task parallelism to QuickSort algorithm
