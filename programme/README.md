How to run the programme/s
==========================

First of all build all programmes:

    $ ./compile.sh
    
If you want to submit a job (e.g. 01) you have to run the run.sge script as follows:

    $ ./qsub run.sge <programme>
    
Measurements (Task 4)
=====================

Host machine: LCC Cluster with 5 nodes, where each node contains 8 CPUs
Measurement technique: time linux command

For each programme I tested different big problem sizes.
In the following I list those programmes, where parallelization had some effect (all measurements can be found in measurement.txt).

Programme: 01 with problem size 10000000000 (no dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |           6.43	|       - |         -
2      |           3.22 |    2.00 |      1.00
4      |           1.81 |    3.55 |      0.89
8      |           1.00 |    6.43 |      0.80


Programme: 02 with problem size 100000\*100000 (no dependency, but compiler couldn't parallize inner loop)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |           0.03 |       - |         -
2      |           0.20 |    0.15 |      0.08  
4      |           0.21 |    0.14 |	 0.04
8      |           0.21 |    0.14 |	 0.02


Programme: 03 with problem size 1000000000 (no dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |           2.71 |       - |         -
2      |           1.78 |    1.52 |      0.76  
4      |           1.74 |    1.57 |	 0.39
8      |           2.20 |    1.23 |	 0.15


Programme: 07 with problem size 2000000000 (no dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |          12.13 |       - |         -
2      |          10.00 |    1.21 |      0.61  
4      |           7.83 |    1.55 |	 0.39
8      |           7.85 |    1.55 |	 0.19


Programme: 08 with problem size 5000000000 (no dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |           9.85 |       - |         -
2      |           7.36 |    1.34 |      0.67  
4      |           6.36 |    1.55 |	 0.39
8      |           5.79 |    1.70 |	 0.21


Programme: 09 with problem size 100000\*100000 (no dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |           4.98 |       - |         -
2      |           4.20 |    1.19 |      0.59  
4      |           3.18 |    1.56 |	 0.39
8      |           4.99 |    1.00 |	 0.12


Programme: 12 with problem size 16000000000 (no dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |          38.59 |       - |         -
2      |          32.07 |    1.20 |      0.60  
4      |          25.30 |    1.53 |	 0.38
8      |          23.13 |    1.54 |	 0.19


Programme: 14 with problem size 1000\*1000\*100 (anti dependency)

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |           1.60 |       - |         -
2      |           3.49 |    0.46 |      0.23
4      |           4.29 |    0.37 |	 0.09
8      |           6.10 |    0.27 |	 0.03


Programme: 15 with problem size 700\*700\*700 (no dependency for a[])

Nprocs | Runtime (in s) | Speedup | Efficency
:------|---------------:|--------:|---------:
1      |          20.82 |       - |         -
2      |          12.33 |    1.69 |      0.84
4      |           7.70 |    2.70 |	 0.68
8      |           7.30 |    2.85 |	 0.36


All in all the parallelisation of for loops without dependencies brought speedup. 
Of course it is difficult to measure without some major calculations in the for-loops, but the speedup is although there for simple array acceses.
