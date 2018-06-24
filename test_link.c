#include <stdio.h>

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

	/*Initialization*/
	A.name ="Wayne";
	B.name ="Cathy";
	C.name ="gaubao";
	D.name ="mimi";

        printf("hello\n");
	add_list_tail(&alist,&A);
	printf("the A %s\n",A.name);
	printf("thelist A %s\n",alist.listnode->name);
}

void add_list_tail(struct list *i, struct node *new)
{
	struct node **tmp;
	printf("entercode\n");
	tmp=(struct node **)i->listnode;
	printf("checkpoint1\n");
	for (tmp=(struct node **)i->listnode;*tmp==NULL;*tmp=(*tmp)->next)
	{
		if (tmp==NULL){
			printf("checkpoint2\n");
			*tmp = new;
			printf("checkpoint3\n");
		}
	}
	i->listnode = new;
	printf("alist first %s\n",i->listnode->name);

}
