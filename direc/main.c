#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>




int direc(char dirname[])
{

    mkdir(("D:\\%s,dirname"),0700);
    printf("Directory created with name: %s",dirname);
}

int chdirec(char dirname[])
{

    //system(("cd %s",dirname));
    chdirec(dirname);
    printf("Present working directory is: %s",dirname);
}

int parentdirec()
{
    system("cd ..");
}

int fil(char filename[])
{
    FILE *fp=fopen(("%s",filename),"w");
    fclose(fp);
}

int searchdir(char sname[]) {
    DIR *d;
    struct dirent *dir;
    d = opendir("D:\\haebehaebe");
    if (d) {
        while ((dir = readdir(d)) != (struct dirent *) sname);
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);


    }
}

int main()
{

    int a;
    char dirname[20];
    char filname[20];

    printf("1.Create directory \n");
    printf("2.Create File \n");
    printf("3.Search Directory \n");
    printf("4.Move to parent directory \n");
    printf("5.List Directories \n");
    printf("6.Change Directory Directories \n");

    scanf("%d",&a);

     switch (a) {
            case '1':

                printf("Enter directory name");
                gets(dirname);
                direc(dirname);
                break;

            case '2':

                printf("Enter file name");
                gets(filname);
                fil(filname);
                break;

            case '3':
                printf("Enter directory or file name to search");
                gets(dirname);
                searchdir(dirname);
                break;

            case '4':
                parentdirec();
                break;

            case '5':
                system("ls");
                break;


            case '6':
                system("ls");
                printf("Enter directory name to change to: ");
                gets(dirname);
                chdirec(dirname);
                break;


        }
    }


