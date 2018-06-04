# sshpc-omp-course

# 1 hello
#without fopenmp

gcc OMP-hello.c -o OMP-hello -fopenmp

./OMP-hello

gcc OMP-hello.c -o OMP-hello

./OMP-hello

# 2 los andes script
cat jobs/job2

qsub jobs/job2

qstat

# 3 Function

gcc /hpcfs/home/sshpc/OMPCourse/OMP-hello-function.c -o /hpcfs/home/sshpc/OMPCourse/OMP-hello-function -fopenmp

qsub jobs/job2

# 4 Data Sharing Clauses

gcc /hpcfs/home/sshpc/OMPCourse/OMP-hello-PR-variable.c -o /hpcfs/home/sshpc/OMPCourse/OMP-hello-PR-variable -fopenmp

qsub jobs/job2

# 5 loop worksharing
gcc /hpcfs/home/sshpc/OMPCourse/OMP-loop-WorkSharing.c -o /hpcfs/home/sshpc/OMPCourse/OMP-loop-WorkSharing -fopenmp

qsub jobs/job2

# 6 performance comparison

Serial version:​

gcc OMP-matrix-sum.c -o OMP-matrix-sum​

time ./OMP-matrix-sum ​

Parallel version:​

gcc OMP-matrix-sum.c -o OMP-matrix-sum -fopenmp​

time ./OMP-matrix-sum ​

# 7 race condition

gcc OMP-race.c -o OMP-race -fopenmp

qsub jobs/job2

# 8 sycronization

OMP-race.c
  critical
  atomic
  ordered

# 9 sycronization

gcc OMP-sync.c -o OMP-sync -fopenmp

./OMP-sync

# 10 task

gcc OMP-task.c -o OMP-task

./OMP-task 

# 11 fibonacci

gcc fib-no-recursion.c -o fib-no-recursion

./fib-no-recursion

gcc fib-no-recursion.c -o fib-no-recursion -fopenmp

./fib-no-recursion

gcc fib-task.c -o fib-task 

./fib-task 

gcc fib-task.c -o fib-task -fopenmp

./fib-task
