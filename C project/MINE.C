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
