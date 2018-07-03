#include <stdio.h>
#define NULL ((void *)0)
struct node {
	char *name;
	struct node *next;
};

struct list {
	struct node *listnode;
};

struct list alist;
void static_add_list_tail(struct list *i, struct node *new, struct node *new2);
void add_list_tail(struct list *i, struct node *new);

void main()
{
	struct node A,B,C,D;
	struct node *tmp;
        struct node **tmp2;
	/*Initialization*/
	A.name = "Wayne";
        A.next = NULL;
	B.name = "Cathy";
        B.next = NULL;
	C.name = "gaubao";
        C.next = NULL;
	D.name = "mimi";
        D.next = NULL;
        alist.listnode =NULL;
        
        printf("Node A address(&A): %p\n",&A);
        printf("Node B address(&B): %p\n",&B);
        printf("List alist address(&alist):  %p\n",&alist);
        printf("List alist member Node listnode &(alist.listnode): %p \n",&(alist.listnode));
        printf("tmp2 address: %p\n",&tmp2);
        //alist.listnode = &A;
       // printf("list -> node %p\n",&*tmp);
#if 0
       // tmp = alist.listnode;
       // tmp2 = &tmp;
        //tmp2 = (struct node **)&(alist.listnode);
        tmp2 = &(alist.listnode);

        printf(" Below two will got same result: nil before setting value\n");
        printf("*tmp2: &(alist.listnode) %p \n",*tmp2);
        printf("*&(alist.listnode)):: %p\n", *&(alist.listnode));
        printf("&*tmp2: %p\n",&*tmp2);   

        *tmp2 = &A;
        printf("After value given with  A's address: (*tmp2=&A)\n");
        printf("alist->listnode pointer to node A address (*tmp2): &(alist.listnode) %p \n",*tmp2);
        printf("*&(alist.listnode)):: %p\n", *&(alist.listnode));
        printf("alist->listnode pointer to node A address&*(alist.listnode):%p\n", &*(alist.listnode));
  
        //printf("list->node %p\n",&*tmp);
        printf("--------------\n");
        printf("nodeA -> name %s (*tmp2)-> name \n", (*tmp2)->name);
        printf("node A name : %s \n",alist.listnode->name);
#endif         
	//static_add_list_tail(&alist,&A, &B);
        add_list_tail(&alist,&A);
	printf("the A %s\n",A.name);
	printf("thelist A %s\n",alist.listnode->name);
}

void static_add_list_tail(struct list *i, struct node *new, struct node *new2)
{
        int j =0;
	struct node **ptr2;
        struct node *ptr;
        
        printf("----------------------\n");
        printf("In %s function\n",__func__ );
        printf("----------------------\n");
        printf("Our purpose is to implement link-list structure as below:\n");
        printf("\n");
        printf("              -----------------         -----------------\n");
        printf("--> list i ->|      Node A     |    -> |      Node B     | \n");
        printf("              -----------------         -----------------\n");    
        printf("             | m: name: Wayne  |       | m: name: Cathy  | \n");
        printf("              -----------------         -----------------\n");
        printf("             | m: next: pointer|    -> | m: next: pointer| \n");
        printf("              -----------------         -----------------\n");
        printf("\n");
        printf("Pointer i Address (point to struct list alist) (&i): %p\n",&i);
        printf("List alist address:                           (&*i): %p\n",&*i);
       
        printf("Pointer new  Address (point to Node A) (&new): %p\n",&new);
        printf("Node A address:                       (&*new): %p\n",&*new);
        printf("Pointer new2 Address (Point to Node B)(&new2): %p\n",&new2);
        printf("Node B address                       (&*new2): %p\n",&*new2);

        ptr2=(struct node **)&(i->listnode);
        
        printf("We set a ** pointer(struct node **ptr2) to point i->listnode address\n");
        printf("f: ptr2 = (struct node **)&(i->listnode)\n");
        printf("1 level pointer context(*ptr2): %p\n",*ptr2);
        printf(" (struct node **)&(i->listnode) address: %p\n",(struct node **)&(i->listnode));
 
        ptr = i -> listnode;
        printf("We set a * pointer(struct node *ptr) to point i->listnode\n");
        printf("f: ptr = i->listnode\n");
        printf(" &*(i->listnode): %p\n",&*(i->listnode));
        printf(" &*ptr: %p\n",&*ptr);

        *ptr2 = new;
        printf("We set ptr2 point to node a (new)\n");
        printf("f: *ptr2 = new;\n");
        printf(" &*(i->listnode): %p\n",&*(i->listnode));
        printf(" &*ptr: %p\n",&*ptr);

        printf("U may suprise the ptr point to nothing(nil) \n");
        printf("This is because ptr is a copy pointer (be duplicated by previous i->listnode(nil) \n");
        printf("If U want to get same copy. U need to duplicate again\n");
        printf("f: ptr = i->listnode\n");
        ptr = i->listnode;
        printf(" &*(i->listnode): %p\n",&*(i->listnode));
        printf(" &*ptr: %p\n",&*ptr);
        
        printf("\nNext, we use ptr to check Node A member (name/next)\n");
        
        printf("The Node A Name (*ptr).name : %s\n",(*ptr).name);

        printf("\n!!!!!Try another wring *ptr.name : %%s\\n \n");
        printf("U may get the error as below:\n");
        printf("error: request for member ‘name’ in something not a structure or union\n");
        printf("       printf(\"Try another wring *ptr.name : %%s\\n\",*ptr.name); \n");
        printf("It is simple to realize: the pointer become name's pointer. --> *(ptr.name) \n");
        printf("Just remember: the read code base rule- Relationship must read from right to left!!\n");
       
        printf("\nThe Node A next pointer &*((*ptr).next) : %p \n", &*((*ptr).next));
        
        printf("\nNext, we set the Node A to link Node B by pointer\n");
        
        printf("f: ptr2 = (**ptr2).next \n");
        ptr2 = &((**ptr2).next);
        printf("1 level pointer context(*ptr2): %p\n",*ptr2);
        printf(" (struct node **)&(new->next) address: %p\n",(struct node **)&(new->next));
        
        *ptr2 = new2;
        printf("We set ptr2 point to node B (new2)\n");
        printf("f: *ptr2 = new2;\n");
        printf(" &*(new->next): %p\n", &*(new->next)); 
   
        printf("\nNext, we use ptr to check Node B member (name/next)\n");
        printf("f: ptr = *ptr2; \n");
        ptr = *ptr2;
        printf("The Node B Name (*ptr).name : %s\n",(*ptr).name);
        printf("The Node B next pointer &*((*ptr).next) : %p \n", &*((*ptr).next));

        printf("\n Use for loop to display result:\n");
        printf("\nShow the meber from list i:\n");


        for (ptr = i->listnode; ptr; ptr=(*ptr).next)
        {
            printf("Node member  name: %s\n",(*ptr).name);
        }

}

void add_list_tail(struct list *i, struct node *new) 
{

        struct node **ptr2;
        int j =0;
        printf("----------------------\n");
        printf("In %s function\n",__func__ );
        printf("----------------------\n");
        printf("Our purpose is to implement link-list structure as below:\n");
        printf("\n");
        printf("              ----------------- \n");
        printf("--> list i ->|      Node new   |\n");
        printf("              ----------------- \n");
        printf("             | m: name: Wayne  |\n");
        printf("              ----------------- \n");
        printf("             | m: next: pointer|\n");
        printf("              ----------------- \n");
        printf("\n");
        printf(" OR \n");

        printf("\n");
        printf("              -----------------         -----------------\n");
        printf("--> list i ->|      Node xxx   |    -> |      Node new   | \n");
        printf("              -----------------         -----------------\n");
        printf("             | m: name: Wayne  |       | m: name: Cathy  | \n");
        printf("              -----------------         -----------------\n");
        printf("             | m: next: pointer|    -> | m: next: pointer| \n");
        printf("              -----------------         -----------------\n");
        printf("\n");

        printf(" USE for to set new node\n");
        
        ptr2 = &(i->listnode);
        do {
             if (!(*ptr2)) {
                 printf("we got *ptr2 : %p",*ptr2);

                 *ptr2 = new;
                 printf("we got *ptr2 : %p",*ptr2);
             }
             ptr2 = &((**ptr2).next);
        } while (*ptr2);


#if 0 
        for ( ptr2 =&(i->listnode); ptr2; ptr2 = &((**ptr2).next))
        {
             if (!(*ptr2)){
                 *ptr2 = new;
                 break;
             }
        }
#endif
        printf("I wander\n");      
        printf("(**ptr).name: %s\n", (**ptr2).name);
}
