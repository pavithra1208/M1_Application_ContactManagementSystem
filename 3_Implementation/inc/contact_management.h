
/**
 * @file contact_management.h
 * @author pavithra
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CONTACTMANAGEMENT_H
#define CONTACTMANAGEMENT_H


struct dir
{
    char name[20];
    char number[10];
};
 
  
/* Function Prototype */
void insert(char *a);
void update(char *a);
void delet(char *a);
void display(char *a);
void search(char *a);
int main();
  
#endif //#ifndef CONTACTMANAGEMENT_H
