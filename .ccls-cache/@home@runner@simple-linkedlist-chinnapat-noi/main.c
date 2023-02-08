//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node b,g,f,*head ;
    typedef struct node Node;
    typedef struct node* NodePtr; 
  NodePtr p=(NodePtr)malloc(sizeof(Node));
  int h;
    head=p;
    p->value = c;
  int i,n=4;
  for(i=0;i<n;i++){  
  p->next= (NodePtr)malloc(sizeof(Node));
    p=p->next;
    p->value=c+i+1;
    p->next=NULL;}
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value );
    printf("%d\n", head ->next->next->next->value );
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    NodePtr tmp=head; //add temp value to faciliate
        
    /* Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          tmp=tmp->next;
          // What is missing???
        }
    printf("\n");
  */
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       
        /*NodePtr tmp=head; 
        while(tmp!=NULL){
            printf("%3d", tmp->value);
           tmp=tmp->next;
           // What is missing???
        }
    */
    
 //  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
        
     

      //Exercise VI Free all node !!
         //use a loop to help
       tmp=head;
        while(tmp!=NULL){
         printf("deleting %d\n",tmp->value);
         free(tmp);
         tmp=tmp->next;
          tmp=NULL;
       }   
     
    
    return 0;
}
