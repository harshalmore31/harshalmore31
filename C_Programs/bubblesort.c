#include<stdio.h>

void printArray(char array[],int size){
    for(int i = 0;i<size;i++)
    {
        printf("\t%c ",array[i]);
    }
}

void sort(char array[],int size){
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)  
        
// This is more efficient as it In summary, Code 1 efficiently utilizes the fact that with each pass, 
// the largest element gets pushed towards the bottom and the unsorted part shrinks. 
// The inner loop's condition dynamically adapts to this shrinking portion, 
// ensuring it only compares relevant elements and stops early, 
// ultimately leading to better performance compared to Code 2 which blindly iterates 
// through the entire array every time.


        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
             //   printArray(array,size);
            }
        }
    }
}



int main(){

   // int array[] = {89,23,76,45,32};
    char array[] = {'F','Z','A','M','C','Y'};
    int size = sizeof(array)/sizeof(array[0]);
 //   printf("%d\n\n",size);
    sort(array,size);
    printf("\n\n");
    printArray(array,size);
    return 0;
}