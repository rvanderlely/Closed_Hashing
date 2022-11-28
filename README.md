# Simple Closed Hashing Program
# How To Run
In order to run this program you must first download all source code. Next, in a terminal or IDE you will navigate to the location where the 
saved source code is located. This program contains a makefile which will automatically compile the c++ code and turn it into an executible.
In order to take advantage of the makefile you must go to the terminal and type "make" without the quotation marks. This will create the executible
file which will be named "cpu". In order to run this executible file you must type ./cpu in your termial. Ensure that you are in the correct location
in the terminal where the executible file and all source code are located or this will not work. After typing ./cpu the program will be run and the
results will be displayed on your screen. In order to remove any executible files you may type "make clean" inside of the terminal.


## Description



## Getting Started

### Dependencies
The instructions for this program are written for running on a UNIX or LINUX with all c++ dependencies already installed. 

### Installing
https://github.com/rvanderlely/CPU-Job-Scheduler


### Executing program

```
make 
```
```
./cpu
```

## Help

Ensure that you are in the proper folder before attempting to run program. 
Type in your termial:
```
ls
```
to ensure that the rachel_cpu_job_scheduler.cpp and rachel_cpu_job_scheduler.o and cpu files are all in the current location.
If you are not in the correct folder you must navigate to the correct folder before attempting to run.
## Authors

Rachel Vanderlely  
[@Rachel Vanderlely](https://github.com/rvanderlely)

## Version History

* 0.1
    *Lots of comments
    This version is a good version to look at the first three algorithums comment explainations. SJF, Priority, FCFS are all roughly written out 
    however the calculation was incorrect. Was missing a += there was a = in the calulation in the FCFS which was making all the other algorithums 
    wrong. 

## License

This project is not licensed.

## Acknowledgments

Instructions for project given by Professor Moini of Cameron University
