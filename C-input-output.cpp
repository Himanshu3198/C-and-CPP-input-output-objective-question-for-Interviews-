// #include<bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
// using namespace std;
// int main()
// {
//    printf("%x", -1<<4);
//    getchar();
//    return 0;
// }

// #include <stdlib.h>
// #include<iostream>

// #include <stdio.h>
// using namespace std;

// int main()
// {
//    int i = 1;
//    do
//    {
//       printf("%d\n", i);
//       i++;
//        if (i < 15)
//         continue;
//    } while (1);
  
//    getchar();
//    return 0;
// }


// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
//    int i = 1;
//    do
//    {
//      printf("%d\n", i);
//      i++;
//      if (i < 15)
//        break;
//      } while (true);
  
//      getchar();
//      return 0;
// }
// #include <stdlib.h>
// #include <stdio.h>

// void main()
// {
   
//     char *p="csegurus";
//     int *q;
//     p++;
//     q=(int*)p;

//     q++;
//     printf("\n%s\n%s",p,q);

//     // output: segurus,rus;
// }



// int main(){

//    int i=5,*ptr;
//    ptr=&i;
//    *ptr=0;
//    printf("\n number is %d",i);

     // op 0
// }






// int main(){

//    int y=~10;
//    printf("%d",y );
//    op:-11;
//  return 0;
// }





// int main(){

//   static int arr[5],i;

//   for(i=0;i<=5;i++){
//     printf("%d",arr[i]=1);

//   }
//   //op 1 INFINITY
//   return 0;
// }




// int main(){

//   int a[5]={1,3,5,7,8};
//   int *ptr=(int*)(&a+1);
//   printf("%d",*(a+1)**(ptr-1));
//           // *a+1=3,ptr-1=8,3*8=24
//   return 0;

// }




// int main(){

//   printf("%d",1.000);

//   return 0;
//    o/p: 0
// }



// int main(){
   
//    int i=5;
//    printf("%d %d\n",i,i++);
//    printf("%d\n",i);
//    i=i++;
//    printf("%d\n",i);
  
//    return 0;

//    o/p:6 5
//        6  
//        6   
   
// }



// int main(){

//   printf("\0goodbye");
//   return 0;

//   // o/p: print nothing 
// }





// int main(){

//  unsigned int x=-1;
//   cout<<x<<"\n";
//  int y=10;

//  if(x<y){
//    printf("yes");
//  }
//  else {
//    printf("no");
//  }
//   return 0;

//   // o/p: print nothing 
// }



// int main(){

//   char a='586';
//   printf("%d",a);
//   // op:54 ascii value 6 is 54 start from 48
//   return 0;
// }



// int main(){
  
//    int a[5]={1,3,5,7,9};
   
//    int *ptr=(int*)(&a+1);
//    printf("%d ",*(a+1));
//    printf("%d",*(ptr-2));
   
//   //  op:3 7

  
//   return 0;
// }





// int main(){

//   char x[]="hello hi";
//    printf("%c %d",*x,x+2);
// }


// int main(){

//    int a=10,b;

//    if(a==a--){

//      printf("false\n");

     
//    }
//    printf("%d",a);
//    a=10;

//    if(a==--a){
//      printf("true");

//    }
//    printf("%d",a);
//    return 0;
// }


// int main(){

//   int ai[]={10,20,30,40,50};

//   int *aptr[]={ai,ai+1,ai+2,ai+3,ai+4};

//   int **dptr=aptr+2;

//   printf("%d %d",dptr-aptr,aptr[4]-ai);
// }



// int main(){

//   int num[]={1,4,8,12,16};

//   int *a,*b;
//   int i;
//   a=num;
//   b=num+2;
//   i=*a+1;


//   printf("%d %d %d",i,*a,*b);
// }



// int arr[]={1,2,3,4,5,6,7,8};
// #define SIZE (sizeof(arr)/sizeof(int))

// int main(){

//   printf("%d ",SIZE);
//   if(-1<=SIZE){
//     printf("1");
//   }
//   else{
//     printf("2");
//   }
//   // op: 8 2 because size cannot be neg -1  change to 2^31-1 

// }




// int main(){

//   int a[5],i=0;
  
//    while(i<5)
//      a[i]=++i;

//     for(i=0;i<5;i++){
//       printf("%d ,",a[i]);
//     } 
//     return 0;

//     // op: garbage value,1,2,3,4
// }

// int main(){

//   int value=11;

//   while(value--+2);  
//   printf("count down is :%d",value);

//   return 0;

// op: -3 + operator higher precedence
// }



// int main(){

//   int main=5;
//   main++;

//   printf("%d",main);
//   return 0;

// op:6 based local variable precedence

// }



// int main(){

//   register int i=10;
//   int *q=&i;
//   *q=11;
//   printf("%d %d\n",i,*q);

 // compiler error
// }



// int main(){
//   char ch[20]="abcdefghijklm";
//   printf("\n%5.2s",ch);
//   return 0;

//   // op: _____ab reason %5 means print 5 space f ,.2 first two char
// }



int main(){

  int a=5;
  printf("%d"+1,a);
  return 0;

  // op:d because "%d"+1 skip the %
}