//ARRAY AS AN ADT:
/*#include<stdio.h>
// void create(){
//     int arr[20];
// }
void array_store(int arr[],int index,int value){
    arr[index]=value;
}

int retreive(int arr[],int index){
    return arr[index];
}
void main(){
//create();
int arr[20];
int choice,op,p;
int index;
int value;
do{
printf("Choose from the dropdown below:\n");
printf("1.Store a value in the array:\n");
printf("2.Retreive a value from the array:\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("Enter the index position:\n");
    scanf("%d",&index);
    printf("Enter the value:\n");
    scanf("%d",&value);
    array_store(arr,index,value);
    break;

case 2:
    printf("Enter the index position:\n");
    scanf("%d",&index);
    p=retreive(arr,index);
    printf("%d",p);
    break;
}
printf("\nDo you want to continue?\nYES=1,NO=0\n");
scanf("%d",&op);
}while(op==1);
}*/

//PROGRAM TO DISPLAY ARRAY ELEMENTS WITH THEIR ADDRESSES:
/*#include<stdio.h>
void main(){
    int arr[4]={12,5,27,43};
    printf("value=%d and address=%u\n",arr[0],&arr[0]);
    printf("value=%d and address=%u\n",arr[1],&arr[1]);
    printf("value=%d and address=%u\n",arr[2],&arr[2]);
    printf("value=%d and address=%u\n",arr[3],&arr[3]);
}*/

//PROGRAM TO READ AND DISPLAY ELEMENTS OF ARRAY ALONG WITH TOTAL SUM OF ELEMENTS:
/*#include<stdio.h>
void main(){
    int arr[20];
    int n,sum=0;
    printf("How many elements do you want to enter?\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is created\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe sum of the elements in the array:\n");
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
}*/

//PROGRAM FOR DELETION OF ELEMENT AT SPECIFIED LOCATION:
/*#include<stdio.h>
void main(){
    int arr[30];
    int n,pos;
    printf("Enter the number of elements you want to store:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array stored is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the position at which the element is to be deleted:\n");
    scanf("%d",&pos);
    while(pos<n){
        arr[pos-1]=arr[pos];
        pos++;
    }
    n=n-1;   //coz number of elements are reduced
    printf("The array after deletion is :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    }*/

    //PROGRAM FOR INSERTION OF ELEMENT AT SPECIFIED LOCATION:
    /*#include<stdio.h>
    void main(){
        int arr[30];
        int n,pos,x;
        printf("Enter the size of array:\n");
        scanf("%d",&n);
        printf("Enter the elements of the array:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("Array created is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        printf("\nEnter the position where you want to insert the element:\n");
        scanf("%d",&pos);
        //n=n+1;
        for(int i=n-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        n=n+1;
        printf("Enter the element to be inserted:\n");
        scanf("%d",&x);
        arr[pos-1]=x;
        printf("Array after insertion is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
    }*/

    //PROGRAM TO COPY ELEMENTS OF ARRAY INTO ANOTHER ARRAY:
    /*#include<stdio.h>
    void main(){
        int a[30],b[30];
        int n;
        printf("Enter the size of array:\n");
        scanf("%d",&n);
        printf("\nEnter the elements of the array:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("Array created is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        printf("\nThe array after copying is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",b[i]);
        }
    }*/

    //PROGRAM TO SEARCH AN ELEMENT IN THE ARRAY:
    /*#include<stdio.h>
    void main(){
        int arr[30];
        int n,key;
        printf("Enter the size of the array:\n");
        scanf("%d",&n);
        printf("\nEnter the elements of the array:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("\nThe array created is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        printf("\nEnter the element you want to search:\n");
        scanf("%d",&key);
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                printf("\nKey found at index=%d",i);
                break;
            }
        }

    }*/

    //PROGRAM TO REVERSE AN ARRAY:
    /*#include<stdio.h>
    void reverse(int arr[],int n){
        int i,j,temp;
        for(i=0,j=n-1;i<(n/2);i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    void main(){
        int arr[30];
        int n;
        printf("\nEnter the size of the array:\n");
        scanf("%d",&n);
        printf("\nEnter the elements of the array:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("\nThe array created is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        reverse(arr,n);
        printf("\nThe array after reversing is:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }

    }*/

    //2D ARRAYS
    //TAKING INPUT AND PRINTING THE OUTPUT
    /*#include<stdio.h>
    void main(){
        int n,m;
        int arr[10][10];
        printf("\nEnter the number of rows:\n");
        scanf("%d",&n);
        printf("\nEnter the number of columns:\n");
        scanf("%d",&m);
        printf("\nEnter the elements:\n");

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }

        printf("\nThe 2D array is:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
    }*/

    //SEARCHING IN 2D ARRAYS
    /*#include<stdio.h>
    void main(){
        int n,m,key;
        int arr[10][10];
        printf("\nEnter the number of rows:\n");
        scanf("%d",&n);
        printf("\nEnter the number of columns:\n");
        scanf("%d",&m);
        printf("\nEnter the elements:\n");

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }

        printf("\nThe 2D array is:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter the value you want to search:\n");
        scanf("%d",&key);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==key){
                    printf("\nElement found at(n=%d) and m=(%d)\n",i,j);
                }
            }
        }

    }*/

    // //ADDITION OF TWO MATRICES:
    // #include<stdio.h>
    // void main(){
    //     int n,m;
    //     printf("\nEnter the size of matrix:\n");
    //     scanf("%d",&n);
    //     scanf("%d",&m);
    //     int a[n][m];
    //     int b[n][m];
    //     int c[n][m];
    //     printf("\nEnter the first array:\n");
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             scanf("%d",&a[i][j]);
    //         }
    //     }

    //      printf("\nEnter the second array:\n");
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             scanf("%d",&b[i][j]);
    //         }
    //     }

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             c[i][j]=a[i][j]+b[i][j];
    //         }
    //     }

    //     printf("\nThe addition of two arrays is:\n");
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             printf("%d\t",c[i][j]);
    //         }
    //         printf("\n");
    //     }
    // }

    // TO FIND THE SUM OF THE DIAGONAL ELEMENTS:
    // #include<stdio.h>
    // void main(){
    //     int n,m;
    //     printf("\nEnter the size of array:\n");
    //     printf("\nEnter the number of rows:\n");
    //     scanf("%d",&n);
    //     printf("\nEnter the number of columns:\n");
    //     scanf("%d",&m);
    //     int arr[n][m];
    //     printf("\nEnter the elements of the array:\n");
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             scanf("%d",&arr[i][j]);
    //         }
    //     }
    //     printf("\nThe 2D array is:\n");
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             printf("%d\t",arr[i][j]);
    //         }
    //     printf("\n");
    // }
    //      int sum=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(i==j){
    //                 sum=sum+arr[i][j];
    //             }
    //         }
    //     }
    //     printf("\nSum of diagonal elements is:%d\n",sum);
    // }

    //PROGRAM TO FIND SUM OF ELEMENTS IN THE UPPER TRIANGLE AND LOWER TRIANGLE OF A MATRIX:
    #include<stdio.h>
    int main(){
        int n,m,i,j,sum1=0,sum2=0;
        printf("Enter the number of rows:\n");
        scanf("%d",&n);
        printf("Enter the number of columns:\n");
        scanf("%d",&m);
        int arr[n][m];
        printf("\nEnter the matrix:\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        printf("\nThe matrix you entered is:\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        printf("\nThe sum of upper traingle elements is\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i<j){
                    sum1=arr[i][j]+sum1;
                }
            }
        }
        printf("%d",sum1);

        printf("\nThe sum of lower traingle elements is\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i>j){
                    sum2=arr[i][j]+sum2;
                }
            }
        }
        printf("%d",sum2);

        return 0;
    }