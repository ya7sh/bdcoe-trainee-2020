#include <stdio.h>
#include <conio.h>
#include <process.h>

#include <string.h>

struct contact
{
    char name[30];
    char address[30];
    long phone;
    char email[30];
} c;

void input();
void display();
void search();
void searchByRoll();
void searchByName();
void modify();

FILE *fp;

void main()
{
    int ch;
    while (1)
    {
        clrscr();
        printf("\n<== Contact Managment ==>\n");
        printf("1.Input Data\n");
        printf("2.Display Data\n");
        printf("3.Search\n");
        printf("4.Modify\n");
        printf("0.Exit\n\n");
        printf("Enter Your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);

        case 1:
            input();
            break;

        case 2:
            display();
            break;
        case 3:
            search();
            break;

        case 4:
            modify();
            break;

        default:
            printf("Invalid Choice");
        }
        getch();
    }
}

void input()
{

    fp = fopen("st.txt", "ab");
    printf("Enter Name: ");
    fflush(stdin);
    gets(c.name);
    printf("Enter address: ");
    scanf("%s", c.address);
    printf("Enter phone: ");
    scanf("%d", &c.phone);
    printf("Enter Email: ");
    scanf("%s", c.email);
    fwrite(&c, sizeof(c), 1, fp);
    printf("Record Saved Successfully");
    fclose(fp);
}

void display()
{
    clrscr();
    printf("<== Contact Info ==>\n\n");
    printf("\t\tName\t\tAddress\t\tPhone\t\temail");
    fp = fopen("st.txt", "rb");
    while (fread(&c, sizeof(c), 1, fp) == 1)
    {
        printf("\t\t %s \t\t %s \t\t %ld \t\t %s\n", c.name, c.address, c.phone, c.email);
    }
    fclose(fp);
    printf("Press any key to continue...");
}

void search(){
int ch;

while(1){
clrscr();
printf("<== Contact Management ==>\n");
printf("<== Search ==>\n");
printf("1.Search By Phone\n");
printf("2.Search By Name\n");
printf("0.Back To Main Menu\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);

switch(ch){
case 0:
main();
break;

case 1:
searchByRoll();
break;

case 2:
searchByName();
break;

default:
printf("Invalid Choice");

}
getch();
}
}