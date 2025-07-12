//Array Traversal Using Pointers 
#include<stdio.h>
void fun(int *a , int size)
{ int i;
    for(i=0;i<size;i++)
    {
        printf("%d  ",a[i]);
    }
}
int main()
{
    int size ,a[5]={10,20,30,40,50};
    size = sizeof(a)/sizeof(a[0]);
    fun( a,size);
}
