//
//  main.cpp
//  malloc1
//
//  Created by 20141105055ljm on 15/11/18.
//  Copyright (c) 2015年 20141105055ljm. All rights reserved.
//


#include <iostream>

//#define N 5
int main(int argc, const char * argv[]) {
    // insert code here...
    
  
    int *a;
    int N;
    int i,j,temp;
     a=(int *)malloc(N*4);
    for (i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);
    return 0;
}

