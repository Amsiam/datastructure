#include<iostream>
using namespace std;
#define N 101
void travel(int a[],int n)
{
    cout<<"Output"<<endl;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    cout<<"\n";
    
}
void insert(int a[],int *n)
{
    int p,v;
    cout<<"Enter position: ";
    cin>>p;
    cout<<"Enter value: ";
    cin>>v;
    for (int i = *n-1; i >=p-1; i--)
    {
        a[i+1] = a[i];
    }
    a[p-1] = v;
    *n +=1;
    travel(a,*n);
}
void deleted(int a[],int *n)
{
    int p;
    cout<<"Enter position want to remove: ";
    cin>>p;
    for (int i = p-1; i<*n; i++)
    {
        a[i] = a[i+1];
    }
    *n -=1;
    travel(a,*n);
}
void search(int a[],int n)
{
    int item,f=0;
    cout<<"What you want to find: ";
    cin>>item;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==item)
        {
            printf("Found %d at index %d.",item,i);
            f = 1;
            break;
        }
        
    }
    if (!f)
    {
        printf("%d not found!",item);
    }
    cout<<"\n";
    
}
int main(){
    int n,i,op,a[N];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while (1)
    {
    cout<<"1.Traveser\n2.Insert\n3.Delete\n4.Search\n5.Exit\nEnter Your Desire: ";
    cin>>op;
    switch (op)
    {
    case 1:
        travel(a,n);
        break;
    case 2:
        insert(a,&n);
        break;
    case 3:
        deleted(a,&n);
        break;
    case 4:
        search(a,n);
        break;
    case 5:
        goto Exit;
        break;
    default:
        cout<<"Entered Wrong!\n";
        break;
    }
  }
  Exit:
    return 0;
}
