/************************************************************************************
 * Name:Rachel Vanderlely 
 * Date:November 27, 2022
 * Course:Algorithum Analysis
 * Project 4: Closed Hashing
 * Description: The program will generate n random numbers and insert them in a hash
 * table using the hash function. Collisions will be resolved using linear probing.
 * The program will then print the hash table and attempt to search for each of the
 * n inputs in the hash table (using the same hash function). The total number of key
 * comparisons will be tracked for all n searches and a report showing the average
 * number of comparisons will be displayed. The report should also contain the values
 * of n, m, and the load factor α
 *************************************************************************************/

#include<iostream>      //For i/o
#include <cstdlib>
#include<ctime>         //For time seed
#include<iomanip>
using std::cin;         //For i/o
using std::cout;        //For i/o
using std::setw;





/************************************************************************************
 *                              Function Prototypes/Global Variables
 *************************************************************************************/
int comparisons = 0; // A global variable, counts the number of key comparisons
void makeEmpty(int anyTable[], int m);
int hash(int key, int m);
void insert(int hashTable[], int m, int newKey);
void print(int hashTable[], int m);
bool search(int hashTable[], int m, int key);
void fillRandomly(int anyTable[], int n);


/************************************************************************************
 *                                       Main
 *************************************************************************************/
int main()
{
srand(time(0));                         // Use current time as seed for random generator
int n;                                  //Declare n, the number of keys
int m;                                  //Declare m, the table size. 
double loadFactor;                      //Declare loadFactor, percentage of hashtable thats loaded. 
cout<<"Enter number of keys:";          //Prompt user for keys
cin>>n;                                 //Get user input
m = n *1.5;                             // Set m to be 1.5 times n

int hashTable[m];                       //Declare the hash table of size m
int inputarray[n];                      //Declare an input array of size n that will hold all input keys.
makeEmpty(hashTable,m);                 //Call the make empty function on the hash table
print(hashTable,m);
fillRandomly(inputarray,n);             //Fill the input array
cout<<"The input array is\n";           //Print the input array
print(inputarray,n);                    //Print the input array
cout<<"\n";                             //Newline

//For each key in the input array call the insert function to insert it in the hash table.
for (int i = 0; i < n;i++)
{
    insert(hashTable,m,inputarray[i]);
}

cout<<"The hash table is:\n";           //Print the hashtable
print(hashTable,m);                     //Print the hashtable


//For each key in the input array call the search function
for (int i = 0; i < n;i++)
{
    search(hashTable,m,inputarray[i]);
    //cout<<"Search results for "<<inputarray[i]<<"is: "<<search(hashTable,m,inputarray[i])<<" \n";
    //cout<<"Number of comps is now: "<<comparisons<<".\n";
}


//Calculate the load factor n / m as a percentage.
loadFactor = ((float)n / m);
cout<<"Number of keys = "<<n<<"\n";
cout<<"Hash table size = "<<m<<"\n";
cout<<"Load Factor = "<<(loadFactor*100)<<"%\n";
cout<<"Total comparisions = "<<comparisons<<"\n";
cout<<"Avg comps/search = "<<((float)comparisons/n)<<"\n";


return 0;
}




/************************************************************************************
 *                                 makeEmpty Function
 * Inputs: 
 * 1. An integer array, int hashTable[] which is the array that will be used to hold 
 *    all the elements.
 * 2. An integer m, representing the size of the hashtable. 
 * Outputs: 
 * None, void.
 * Description:   
 * This function initializes each element of the hashTable [0..m-1] to a -1 
 * which is the value that represents empty slot.
 *************************************************************************************/

void makeEmpty(int anyTable[], int m){
    
    for (int i = 0; i <m; i++)
    {
        anyTable[i] = -1;
    }
}




/************************************************************************************
 *                                 hash Function
 * Inputs: 
 * 1. key, an integer to be sent through the hash function. 
 * 2. An integer m, representing the size of the hashtable. 
 * Outputs: 
 * An integer value is returned,namely, the spot that the element should 
 * in theory, be placed if that spot is available.
 * Description:   
 * Using the given key and hash table size m, it find the index in the range
 * 0 through (m-1) where the new element should in theory, be placed in the array. 
 *************************************************************************************/
int hash(int key, int m)
{
    return (key%m);

}


/************************************************************************************
 *                                 insert Function
 * Inputs: 
 * 1. hashTable[], an integer array of size m where all elements are to be stored 
 * 2. An integer m, representing the size of the hashtable. 
 * Outputs: 
 * None, void.
 * Description:   
 * Inserts the new key in the hashTable. If there is a collision, linear probing 
 * is used to resolve the collision.
 *************************************************************************************/
void insert(int hashTable[], int m, int newKey)
{
    int desiredIndex = hash(newKey,m);
    while(hashTable[desiredIndex]!= -1 )
    {
        desiredIndex = (desiredIndex + 1 ) % m;
    }
    hashTable[desiredIndex] = newKey;
} 




/************************************************************************************
 *                                 print Function
 * Inputs: 
 * 1. hashTable[], an integer array of size m where all elements are to be stored 
 * 2. An integer m, representing the size of the hashtable. 
 * Outputs: 
 * None, void.
 * Description:   
 * Prints out the hash table in a readable manner showing the indicies and the elements
 * stored in each index. 
 *************************************************************************************/
void print(int anyTable[], int m)
{
    for (int i = 0; i <m; i++)
    {
        cout<<setw(3)<<i;
        if (anyTable[i] == -1)
            {
            cout<<setw(5)<<"["<<"  ]\n";
            }
        else 
            {
            cout<<setw(5)<<"["<<anyTable[i]<<"]\n";
            }
    }

}



/************************************************************************************
 *                                 search Function
 * Inputs: 
 * 1. hashTable[], an integer array of size m where all elements are to be stored 
 * 2. An integer m, representing the size of the hashtable. 
 * 3. An integer key, the element to be searched for in the array. 
 * Outputs: 
 * Bool, true if found, else false. 
 * Description:   
 * Searches the hashTable for the given key and returns true/false depending on the result.
 * This function also updates the number of comparisons where a key comparison is made.
 * This function uses the hash function to search for the key and searches until it 
 * hits an empty spot in the array.
 *************************************************************************************/
bool search(int hashTable[], int m, int key)
{
int suspectedIndex = hash(key,m);       //Find the suspected index of the key
comparisons++;                          //Always make at least one comparison

    //This will only be entered if the key isnt where supposed to be (had a collision)
while ( hashTable[suspectedIndex]!=key && hashTable[suspectedIndex]!=-1 )
    {
        suspectedIndex++;
        comparisons++;
    }

//will leave while loop if key is found OR is empty spot is hit
if (hashTable[suspectedIndex]==key){
    return true;
}else{
    return false;
}

}

//}


/************************************************************************************
 *                                 fillRandomly Function
 * Inputs: 
 * 1. hashTable[], an integer array of size m where all elements are to be stored 
 * 2. An integer n, representing the size of the inputArray to be filled.
 * Outputs: 
 *  None, void.
 * Description: This function randomly fils an array with the numbers 1 through 3n.
 *************************************************************************************/
void fillRandomly(int anyTable[], int n)
{
        for (int i = 0; i <n; i++)
    {
        anyTable[i] = 1 + rand() % (3*n)  ;
    }

}



