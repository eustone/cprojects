#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define MAX_TASKS 10
#define MAX_DESC_LENGTH 100

//Define single TodoTask item.
typedef struct
{   
    int id;
    char description[MAX_DESC_LENGTH];
    bool is_completed;

}TodoTask;


TodoTask tasks[MAX_TASKS];
int num_tasks = 0;

//Define Main Function Prototypes
void displayMenu(void);
void addTask(void);
void viewTasks(void);
void updateTask(void);
void markCompleteTask(void);
void deleteTask(void);
   


int main()
{
    displayMenu();    
    return 0;
}

void displayMenu()
{
    printf("\n === Todo List Menu=== \n");
    printf("1. Add New Task \n");
    printf("2. View Tasks \n");
    printf("3. Delete Task \n");
    printf("4. Mark As Complete \n");
    printf("5. Exit \n");

}


void addTask()
{
    if (num_tasks>=MAX_TASKS)
    {
        printf("Cannot add more tasks, Todolist is full!");
        return;
    }
    else
    {

    }
}