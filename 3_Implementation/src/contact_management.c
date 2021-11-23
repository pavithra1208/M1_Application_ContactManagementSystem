#include <contact_management.h>


void insert(char *a)
{
    FILE *fp;
    fp=fopen(a,"a+");
    if(fp==NULL) perror ("Error opening file");
    struct dir contact;
    printf("Enter name:");
    scanf("%s", contact.name);
    printf("Enter mobile number:");
    scanf("%s", contact.number);
    fwrite(&contact,1,sizeof(struct dir),fp);
    fclose(fp);
}

void update(char *a)
{
    FILE *fp;
    fp=fopen(a,"r+");
    char name[20],number[10];
    int pos=0;
    struct dir contact;
    printf("Enter name: ");
    scanf("%s",name);
    while(fread(&contact, sizeof(struct dir),1,fp)){
        if(strcmp(name,contact.name)==0){
            printf("Enter number: ");
            scanf("%s",number);
            fseek(fp,pos*sizeof(struct dir), SEEK_SET);
            strcpy(contact.number,number);
            fwrite(&contact,sizeof(struct dir),1,fp);
            printf("Updated successfully\n");
            fflush(fp);
            fclose(fp);
            return;
        }  
        pos++;
        
    }
    printf("Record not found\n");
    fflush(fp);
    fclose(fp);
    
}

void delet(char *a)
{
    FILE *fp;
    fp=fopen(a,"r+");
    char name[20], number[10];
    int result,record=0;
    struct dir contact,blank= {"",""};
    printf("Enter name: ");
    scanf("%s",name);
    rewind(fp);
    while(fread(&contact,1,sizeof(struct dir),fp))
    {
        if(strcmp(name,contact.name)==0){
            fseek(fp,record*sizeof(struct dir),SEEK_SET);
            fwrite(&blank,sizeof(struct dir),1,fp);
            printf("%d Deleted successfully\n",record-1);
            fflush(fp);
            fclose(fp);
            return;
        }
        record++;
    }
    printf("not found in %d records\n",record);
    fflush(fp);
    fclose(fp);
}

void display(char *a)
{
    FILE *fp;
    fp=fopen(a,"r");
    struct dir contact;
    int result;
    printf("\n \n Contact Management  \n");
    printf("%20s %10s\n", "Name", "Number");

    printf("******************************************************************************\n");
    while(fread(&contact,sizeof(struct dir),1,fp)){
        printf("%20s %10s\n",contact.name, contact.number);
    }
    printf("******************************************************************************\n");
    fclose(fp);
}

void search(char *a)
{
    FILE *fp;
    fp=fopen(a,"r");
    struct dir contact;
    int result; char name[20];
    rewind(fp);
    printf("\nEnter name: ");
    scanf("%s", name);
    while(!feof(fp))
    {
        result=fread(&contact,sizeof(struct dir),1,fp);
        if(result!=0 && strcmp(contact.name,name)==0){
            printf("%20s %10s\n",contact.name, contact.number);
            fclose(fp);
            return;
            
        }
    }
    printf("record not found\n");
    fclose(fp);
}
