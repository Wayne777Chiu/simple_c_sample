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
	A.name ="Wayne";
	B.name ="Cathy";
	C.name ="gaubao";
	D.name ="mimi";
        alist.listnode =NULL;
        
        printf("node A address: %p\n",&A);
        printf("alist address %p\n",&alist);
    
        //alist.listnode = &A;
       // printf("list -> node %p\n",&*tmp);
#if 0 
       // tmp = alist.listnode;
       // tmp2 = &tmp;
        //tmp2 = (struct node **)&(alist.listnode);
        tmp2 = &(alist.listnode);
        printf("list->node %p (*tmp2)\n",*tmp2);

        *tmp2 = &A;
        printf("list->node %p\n",&*tmp);
        printf("list->node %p (*tmp2)\n",*tmp2);
        printf("nodeA -> name %s (*tmp2)-> name \n", (*tmp2)->name);
        printf("list->node %p &*(alist.listnode)\n", &*(alist.listnode));
        printf("node A name : %s \n",alist.listnode->name);
#endif         
	add_list_tail(&alist,&A);
	printf("the A %s\n",A.name);
	printf("thelist A %s\n",alist.listnode->name);
}

void add_list_tail(struct list *i, struct node *new)
{
	struct node **tmp;
	printf("entercode\n");
	tmp=(struct node **)i->listnode;
        //tmp = i->listnode;
        
        printf("tmp address %p i->listnode address %p another i address %p\n",&tmp, &(i->listnode), &i);
        //printf("**tmp is %d\n", **tmp);
	printf("checkpoint1\n");
        printf("&*tmp is %p\n", &*tmp);
        //printf("*tmp is %p\n",*tmp);
        if (!tmp) {
               printf("got the null data\n");
        }
        
        printf("checkout bb\n");


	for (tmp=(struct node **)i->listnode;!tmp; *tmp=(*tmp)->next)
	{
		if (!tmp){
			printf("checkpoint2\n");
			tmp = (struct node **)&new;
                        printf("find this\n");
			printf("&*tmp: %p \n",&*tmp);
                        printf("list -> node (*tmp)%p\n",*tmp);
			printf("node->name (*tmp)->name) %s\n",(*tmp)-> name);
			printf("checkpoint3\n");
		}
	}
	//i->listnode = new;
        printf("enter here?\n");
	printf("alist first %s\n",i->listnode->name);

}
