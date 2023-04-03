// #include<stdio.h>
// int main(){
//     char name[30];
//     printf("Enter your name:\n");
//     scanf("%s",&name);
//     // printf("%s",name);
//     int i=0;
//     while(name[i]!='\0'){
//         printf("%c",name[i]);
//         i++;
//     }
//     return 0;
// }

//DISPLAYING STRING USING POINTER ARITHMETIC
// #include<stdio.h>
// int main(){
//     char name[30];
//     char*ptr;
//     ptr=name;     //base address of the name character array gets stored in ptr variable
//     printf("Enter your name:\n");
//     scanf("%s",&name);
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;    //as the address gets incremented we go to the next address as elements are 
//                   //stored at contiguous memory locations.
//     }
// return 0;
// }

//WORKING ON STRINGS USING gets() AND puts() FUNCTION:
// #include<stdio.h>
// int main(){
//     char name[30];
//     printf("Enter your name:\n");
//     gets(name);
//     puts(name);
//     return 0;
// }

//PROGRAM TO SHOW USAGE OF STRING HANDLING FUNCTIONS:
// #include<stdio.h>
// #include<string.h>
// #include<conio.h>
// int main(){
//     char s1[30],s2[30],s3[30];
//     int x;
//     printf("Enter the first string:\n");
//     gets(s1);
//     puts(s1);
//     printf("Enter the second string:\n");
//     gets(s2);
//     puts(s2);
//     strcat(s1,s2);
//     puts(s1);
//     x=strcmp(s1,s2);
//     printf("%d",x);
//     return 0;
// }

//PROGRAM TO REVERSE A STRING:
// #include<stdio.h>
// #include<string.h>
// #include<conio.h>
// int main(){
//     char string[30];
//     printf("Enter the string:\n");
//     gets(string);
//     puts(string);
//     int i,j;
//     char temp;
//     for(i=0,j=strlen(string)-1;i<=j/2;i++,j--){
//         temp=string[i];
//         string[i]=string[j];
//         string[j]=temp;
//     }
//     puts(string);
//     return 0;
// }

//PROGRAM TO FIND LENGTH OF STRING WITHOUT USING LIBRARY FUNCTION:
// #include<stdio.h>
// #include<string.h>
// #include<conio.h>
// int main(){
//     char s[30];
//     int x;
//     printf("Enter the string:\n");
//     gets(s);
//     puts(s);
//     x=strlen(s);
//     printf("%d",x);
//     int i,length=0;
//     for(i=0;s[i]!='\0';i++){
//         length=length+1;
//     }
//     printf("%d\n",length);
//     return 0;
// }


//PROGRAM TO COPY STRING WITHOUT USING LIBRARY FUNCTIONS:
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char s1[30];
    char s2[30];
    int i,temp;
    printf("Enter the string:\n");
    gets(s1);
    printf("The string you entered is:\n");
    puts(s1);
    for(i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
        temp=i;
    }
    s2[temp+1]='\0';    //we must specifically enter null character to terminate the string
    puts(s2);
    return 0;
}