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


/************************************************************************************
 *                              Function Prototypes/Global Variables
 *************************************************************************************/
int comparisons = 0; // A global variable, counts the number of key comparisons
void makeEmpty(int hashTable[], int m);
int hash(int key, int m);
void insert(int hashTable[], int m, int newKey);
void print(int hashTable[], int m);
bool search(int hashTable[], int m, int key);


/************************************************************************************
 *                                       Main
 *************************************************************************************/



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

void makeEmpty(int hashTable[], int m){
    
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
void print(int hashTable[], int m)
{

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
bool search(int hashTable[], int m, int key){

}



