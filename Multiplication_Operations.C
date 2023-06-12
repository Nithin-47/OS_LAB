#include<stdio.h>
#include<stdlib.h>

int main(){
int choice,n;
int i,j,k,a[n][n],b[n][n],c[n][n];

while(1){

printf("---MENU---\n");
printf("1)Addition\n2)Subtraction\n3)Multiplication\n4)Transpose\n5)Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);


switch(choice){
    case 1:
    
    printf("Enter the index of Matrix:");
    scanf("%d",&n);



    printf("\nEnter the elements into the %d x %d Matrices:\n",n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d Row %d Col :",i,j);
            scanf("%d",&a[i][j]);
        }

    }

    printf("\nSecond Matrix:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d Row %d Col :",i,j);
            scanf("%d",&b[i][j]);
        }
    
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = 0;
            c[i][j] = a[i][j] + b[i][j];
        }
    
    }

    
    printf("\nResult Matrix:\n");



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }




    break;

    case 2:
     
    printf("Enter the index of Matrix:");
    scanf("%d",&n);



    printf("\nEnter the elements into the %d x %d Matrices:\n",n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d Row %d Col :",i,j);
            scanf("%d",&a[i][j]);
        }

    }

    printf("\nSecond Matrix:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d Row %d Col :",i,j);
            scanf("%d",&b[i][j]);
        }
    
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = 0;
            c[i][j] = a[i][j] - b[i][j];
        }
    
    }

    
    printf("\nResult Matrix:\n");



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

    break;


    case 3:

        
printf("Enter the index of Matrix:");
scanf("%d",&n);



printf("\nEnter the elements into the %d x %d Matrices:\n",n,n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("Enter %d Row %d Col :",i,j);
        scanf("%d",&a[i][j]);
    }

}

printf("\nSecond Matrix:\n");

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("Enter %d Row %d Col :",i,j);
        scanf("%d",&b[i][j]);
    }
    
}


printf("\nPerforming Multiplication....\n");


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        c[i][j]=0;
        for(int k=0;k<n;k++){

            c[i][j] = c[i][j] + a[i][k]*b[k][j];

        }
    }
}


printf("\nResult Matrix:\n");



for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       
        printf("\t%d",c[i][j]);
    }
    printf("\n");
}

break;

case 4:
    
        
printf("Enter the index of Matrix:");
scanf("%d",&n);



printf("\nEnter the elements into the %d x %d Matrices:\n",n,n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("Enter %d Row %d Col :",i,j);
        scanf("%d",&a[i][j]);
    }

}

printf("Performing Transposing...\n");


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        b[j][i] =0;
        b[j][i] = a[i][j];
    }

}


printf("\nResult Matrix:\n");



for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       
        printf("\t%d",b[i][j]);
    }
    printf("\n");
}


break;

case 5:
    exit(0);
    break;

default:
printf("Please Enter a correct option!");
}








}







return 0;


}
