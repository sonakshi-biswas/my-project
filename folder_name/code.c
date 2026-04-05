#include<stdio.h> 
  
int main(void) { 
    printf("Hello, YouTube!\n");  
    printf("what is your name ?");
    scanf("%49s", name);//read input with a size limit 
    printf("hello, %s!\n", name); 
    return 0; 

}
 