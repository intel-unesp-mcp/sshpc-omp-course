# sshpc-omp-course

1 hello
#without fopenmp

gcc OMP-hello.c -o OMP-hello -fopenmp
./OMP-hello

gcc OMP-hello.c -o OMP-hello
./OMP-hello

2 los andes script
cat jobs/job2

qsub jobs/job2

qstat

3 Function

gcc /hpcfs/home/sshpc/OMPCourse/OMP-hello-function.c -o /hpcfs/home/sshpc/OMPCourse/OMP-hello-function -fopenmp
qsub jobs/job2

4 Data Sharing Clauses

gcc /hpcfs/home/sshpc/OMPCourse/OMP-hello-PR-variable.c -o /hpcfs/home/sshpc/OMPCourse/OMP-hello-PR-variable -fopenmp
qsub jobs/job2

5 loop worksharing
gcc /hpcfs/home/sshpc/OMPCourse/OMP-loop-WorkSharing.c -o /hpcfs/home/sshpc/OMPCourse/OMP-loop-WorkSharing -fopenmp
qsub jobs/job2

6 hands-on first part

7 race condition

8 break dependency using algorithm

9 sycronization

10 task
fibonacci
