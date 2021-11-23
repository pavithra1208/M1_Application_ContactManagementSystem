#include<contact_management.h>

struct dir{
    char name[20];
    char number[10];

};

int record =0;

int main()
{
    int choice;
    char *argv="record.txt";
    while(1){
        
        printf("\n1 insert\t 2 update\n");
        printf("3 delet\t 4 display\n");
        printf("5 search\t 6 exit\n Enter your choice:");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1: 
                insert(argv);
                break;
            case 2: 
                update(argv);
                break;
            case 3:
                delet(argv);
                break;
            case 4: 
                display(argv);
                break;
            case 5: 
                search(argv);
                break;
            case 6: 
                return 0;
            default:
            printf("wrong choice!! \n Enter the correct choice\n");
        }
    }
    
    return 0;
}

