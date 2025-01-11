#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define MAX_TASKS 10
#define MAX_DESC_LENGTH 100

typedef struct
{   
    int id;
    char description[MAX_DESC_LENGTH];
    bool is_completed;

}TodoTask;


TodoTask tasks[MAX_TASKS];






int main()
{
    
    return 0;
}