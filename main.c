#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example 1:Create an empty file (commented out)
    /*FILE *file;
    file=fopen("test.txt","w");
    fclose(file);*/

    // Example 2:Write text with fprintf (commented out)
    /*FILE *file;
    char name[]="John";
    file=fopen("test.txt","w");
    fprintf("file,"This file belongs to %s",name);
    fclose(file);*/

    // Example 3:Write multiplication table to file (commented out)
    /*FILE *file;
    file=fopen("multiplication.txt","w");
    int i,j;
    for(i=1;i<=10;i++)
    {
        fprintf("file,"%d*%d=%d\n",i,j,i*j);
    }
    fprintf("file,"\n");
    }
    fclose(file);*/

    // Example 4:Append student info to file (commented out)
    /*FILE *file;
    file=fopen("student.txt","a");
    char name[20],school[50],department[50];
    printf("Name:"); gets(name);
    printf("School:"); gets(school);
    printf("Department:"); gets(department);
    fprintf(file,"%s\n%s\n%s\n",name,school,department);
    fclose(file);*/

    // Example 5 (active):Append "Hello World" to file
    FILE *file;
    file=fopen("hello.txt","a");
    fputs("\nHello World",file);
    fclose(file);

    return 0;
}
