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
        D.next = NULL
        alist.listnode =NULL;
        
        printf("node A address: %p\n",&A);
        printf("node B address: %p\n",&B);
        printf("alist address %p\n",&alist);
        printf("&(alist.listnode) %p \n",&(alist.listnode));
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
	add_list_tail(&alist,&A);
        add_list_tail(&alist,&B);
	printf("the A %s\n",A.name);
	printf("thelist A %s\n",alist.listnode->name);
}

void add_list_tail(struct list *i, struct node *new)
{
        int j =0;
	struct node **tmp;
        struct node *ptr;

	tmp=(struct node **)&(i->listnode);
        //tmp = i->listnode;
        printf("----------------------\n");
        printf(" new address (&new): %p\n",&new);
        printf(" &*(i->listnode): %p\n",&*(i->listnode));
        ptr = i -> listnode;
        printf("tmp address %p i->listnode address %p another i address %p\n",&tmp, &(i->listnode), &i);
        printf("&*tmp is %p\n", &*tmp);
        printf("*tmp in function is: %p\n",*tmp);
        //printf("*tmp is %p\n",*tmp);
        if(!(*tmp)) {
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


	for (tmp=(struct node **)&(i->listnode);*tmp; ptr=(**tmp).next)
	{
                printf(" &*tmp : %p to check update \n",&*tmp);
		if (!ptr){
			printf("checkpoint2\n");
                        printf("&*tmp: %p \n",&*tmp);
                        printf(" &*(i->listnode): %p\n",&*(i->listnode));

                        //printf("(**tmp).name %s\n",(**tmp).name);
			*tmp = new;
                        (**tmp).next = NULL;
                        printf("find this\n");
                        printf(" &*(i->listnode): %p\n",&*(i->listnode));

			printf("&*tmp: %p \n",&*tmp);
                        printf("list -> node (*tmp)%p\n",*tmp);
			printf("node->name (*tmp)->name) %s\n",(*tmp)-> name);
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
