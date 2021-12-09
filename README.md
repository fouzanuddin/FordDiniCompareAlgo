# FordDiniCompareAlgo
# Developers that worked on this project : Fouzan Uddin ( 11475342) ; Jerline Jayaraj (11457829)
# Subject : Analysis of Algorithm ( Fall 2021 )
# GitHub link :https://github.com/fouzanuddin/FordDiniCompareAlgo/
# References :https://www.geeksforgeeks.org/dinics-algorithm-maximum-flow/ ; https://www.geeksforgeeks.org/ford-fulkerson-algorithm-for-maximum-flow-problem/

Our Project Link :

How to Run the code:
Ford Fulkersons Algorithm
Compile the code using the following command:
g++ Ford.cpp
Enter the Following later
./a.out 
It is configured currently for 1200 Nodes and It will show the time taken and Maximum flow of that particular datafile.


Dinic Algorithm :

Compile the code using the following command:
g++ Dinic.cpp
Enter the Following later
./a.out

It is configured currently for 1200 Nodes and It will show the time taken and Maximum flow of that particular datafile.

To change the Dataset , We need to modify both the c++ files for dinic and ford and change the file name from data1200.dat to other data files for examples data1000.data, data9.dat or data100.dat etc . Then Change the Number of Nodes in function calls for each of these algorithm in main function.You also need to change the macro for # define V change it to number of nodes dataset you are taking.

After changing both the cpp files compile using the above instruction.

Run using the above instructions provided 


# Dataset change

We can generate the new dataset by running this program called graphgenerator.py 

Download the datafile 

Remove first row and last row from the datafile and try with the program.

Note: If spaces not removed it might show some errors 


# Output :

Output Screenshot is provided in output folder. 