#include <stdio.h>

#define SIZE 5

// Define the struct with an integer field to sort on
typedef struct {
    int id;
    char name[50];
    int age;  // We’ll sort by this field
} Record;

// Function to print the array of records
void printRecords(Record records[], int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", records[i].id, records[i].name, records[i].age);
    }
}

// Bubble Sort function to sort records by the 'age' field
void sortRecordsByAge(Record records[], int size)
 {
    for (int i = 0; i < size - 1; i++)
    {
     for (int j = 0; j < size - i - 1; j++)
        {
         if (records[j].age > records[j + 1].age)
            {
                // Swap records[j] and records[j + 1]
                Record temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Create an array of Record structs
    Record records[SIZE] = {
        {1, "Alice", 30},
        {2, "Bob", 22},
        {3, "Charlie", 25},
        {4, "Diana", 28},
        {5, "Eve", 24}
    };

    printf("Records before sorting:\n");
    printRecords(records, SIZE);

    // Sort the records by the 'age' field
    sortRecordsByAge(records, SIZE);

    printf("\nRecords after sorting by age:\n");
    printRecords(records, SIZE);

    return 0;
}
