# Simple Closed Hashing Program
# How To Run
In order to run this program you must first download all source code. Next, in a terminal or IDE you will navigate to the location where the 
saved source code is located. This program contains a makefile which will automatically compile the c++ code and turn it into an executible.
In order to take advantage of the makefile you must go to the terminal and type "make" without the quotation marks. This will create the executible
file which will be named "cpu". In order to run this executible file you must type ./cpu in your termial. Ensure that you are in the correct location
in the terminal where the executible file and all source code are located or this will not work. After typing ./cpu the program will be run and the
results will be displayed on your screen. In order to remove any executible files you may type "make clean" inside of the terminal.


## Description
The program will generate n random numbers and insert them in the hash table with the aid of the hash function. 
The hash function for this program will use a simple modulus operator, key % m, where m is the size of the hashtable. 
Collisions will be resolved using the standard linear probing (for closed hashing). The program will then print the hash table. 
The program will attempt to search for each of the n inputs in the hash table (using the same hash function and the corresponding
collision resolution method). The total number of key comparisons will be tracked for all n searches and a report showing the average
number of comparisons will be displayed. The report should also contain the values of n, m, and the load factor α


## Getting Started

### Dependencies
The instructions for this program are written for running on a UNIX or LINUX with all c++ dependencies already installed. 

### Installing
https://github.com/rvanderlely/Closed_Hashing


### Executing program

will update later when I create a makefile.

## Help

Ensure that you are in the proper folder before attempting to run program. 
Type in your termial:
```
ls
```
If you are not in the correct folder you must navigate to the correct folder before attempting to run.

## Authors

Rachel Vanderlely  
[@Rachel Vanderlely](https://github.com/rvanderlely)

## Version History

## License

This project is not licensed.

## Acknowledgments

Instructions for project given by Professor Moinian of Cameron University
