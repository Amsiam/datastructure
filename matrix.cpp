#include<iostream>

#define N 10

int main(){
    int op,m,n,p,q,i,j,k,sum;
    Top:
    printf("Enter First matrix row and column: ");
    scanf("%d%d",&m,&n);
    printf("Enter Secound matrix row and column: ");
    scanf("%d%d",&p,&q);
    int first[m][n],sec[p][q];
    printf("Enter first matrix value: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&first[i][j]);
        }
        
    }
    printf("Enter secound matrix value: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d",&sec[i][j]);
        }
        
    }
    
    Start:
    printf("1. Multiply\n2.Addition\n3.Substraction\n4.Tranjaction\n5.Change Array\n6.Exit\nEnter your desire: ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        goto Matrixmulti;
        break;
    
    case 2:
        goto Matrixadd;
        break;
    
    case 3:
        goto Matrixsub;
        break;
    
    case 4:
        goto Matrixtras;
        break;
    
    case 5:
        goto Top;
        break;
    
    case 6:
        goto Exit;
        break;
    
    default:
        break;
    }
    Matrixmulti:
    if (n != p)
    {
        printf("You can't multiply %d*%d matrix with %d*%d matrix.\n",m,n,p,q);
        goto Start;
    }else
    {
        int result[m][q];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < n; k++)
                {
                    sum = sum + first[i][k]*sec[k][j];
                }
                result[i][j] = sum;
            }
            
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
        goto Start;
        
    }

    Matrixadd:
    if (m != p && n != q)
    {
        printf("You can't add %d*%d matrix with %d*%d matrix.\n",m,n,p,q);
        goto Start;
    }else
    {
        int result[m][n];
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                result[i][j] = first[i][j]+sec[i][j];
            }
            
        }
        printf("Ans: \n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
        goto Start;
        
    }
    Matrixsub:
    if (m != p && n != q)
    {
        printf("You can't substract %d*%d matrix with %d*%d matrix.\n",m,n,p,q);
        goto Start;
    }else
    {
        int result[m][n];
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                result[i][j] = first[i][j]+sec[i][j];
            }
            
        }
        printf("Ans: \n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
        goto Start;
    }
    Matrixtras:
    int opt;
    printf("Which matrix do you want to trans?\n1. First\n2.Secound.\nEnter your desire: ");
    scanf("%d",&opt);
    if (opt == 1)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d ",first[j][i]);
            }
            printf("\n");
        }
        goto Start;
    }else if(opt == 2){
        for (i = 0; i < q; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("%d ",sec[j][i]);
            }
            printf("\n");
        }
        goto Start;
    }else
    {
        printf("Please select right one.");
        goto Matrixtras;
    }
    
    Exit:
    return 0;
}
