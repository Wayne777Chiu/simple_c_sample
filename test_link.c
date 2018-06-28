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
void add_list_tail2(struct list *i, struct node *new, struct node *new2);

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
	add_list_tail2(&alist,&A, &B);
        //add_list_tail(&alist,&B);
	printf("the A %s\n",A.name);
	printf("thelist A %s\n",alist.listnode->name);
}

void add_list_tail2(struct list *i, struct node *new, struct node *new2)
{
        int j =0;
	struct node **ptr2;
        struct node *ptr;
        
        printf("\n");

        //tmp = i->listnode;
        printf("----------------------\n");
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

        
        printf("xxxxxxxxxxxxxxxxxxxxxxxxx\n");
        printf("DO");
        printf("xxxxxxxxxxxxxxxxxxxxxxxxx\n");


        printf("tmp address %p i->listnode address %p another i address %p\n",&ptr2, &(i->listnode), &i);
        printf("&*tmp is %p\n", &*ptr2);
        printf("*tmp in function is: %p\n",*ptr2);
        //printf("*tmp is %p\n",*tmp);
        if(!(*ptr2)) {
               printf("got the null data\n");
               //*tmp = new;
               //(**tmp).next = NULL;
        }
        
#if 0
        *tmp = new;
        printf("if <*tmp = new; > then \n");
        printf(" &*(i->listnode): %p\n",&*(i->listnode));

        printf("(**tmp) should as entity of struct node:\n");
        printf("(**tmp).name  %s \n",(**tmp).name);
        printf("(**tmp).next  %p \n",(**tmp).next);

        ptr = (**tmp).next;

        printf("&*ptr is %p\n",&*ptr);
        //printf("*ptr is %d\n",*ptr);
#endif

        printf("=====================\n");


	for (ptr2=(struct node **)&(i->listnode);*ptr2; ptr=(**ptr2).next)
	{
                printf(" &*ptr2 : %p to check update \n",&*ptr2);
		if (!ptr){
			printf("checkpoint2\n");
                        printf("&*ptr2: %p \n",&*ptr2);
                        printf(" &*(i->listnode): %p\n",&*(i->listnode));

                        //printf("(**tmp).name %s\n",(**tmp).name);
			*ptr2 = new;
                        (**ptr2).next = NULL;
                        printf("find this\n");
                        printf(" &*(i->listnode): %p\n",&*(i->listnode));

			printf("&*ptr2: %p \n",&*ptr2);
                        printf("list -> node (*ptr2)%p\n",*ptr2);
			printf("node->name (*tmp)->name) %s\n",(*ptr2)-> name);
			printf("checkpoint3\n");
                        break;
                }
                if (j<10) j++;
                else break;
	}
	//i->listnode = new;
        printf("enter here?\n");
        printf(" &*(i->listnode): %p\n",&*(i->listnode));
	printf("alist first %s\n",(*(i->listnode)).name);

}
