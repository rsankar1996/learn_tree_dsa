#include <stdio.h>
#include <stdlib.h>

struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
};

static void preorder(struct node * dev)
{
	if (dev == NULL)
		return;

	printf("%c ", dev->data);
	preorder(dev->lchild);
	preorder(dev->rchild);
}

static void inorder(struct node * dev)
{
	if (dev == NULL)
		return;

	inorder(dev->lchild);
	printf("%c ", dev->data);
	inorder(dev->rchild);
}

static void postorder(struct node * dev)
{
	if (dev == NULL)
		return;

	postorder(dev->lchild);
	postorder(dev->rchild);
	printf("%c ", dev->data);
}

int main()
{
	struct node * node_a = (struct node *)malloc(sizeof(struct node));
	struct node * node_b = (struct node *)malloc(sizeof(struct node));
	struct node * node_c = (struct node *)malloc(sizeof(struct node));
	struct node * node_d = (struct node *)malloc(sizeof(struct node));
	struct node * node_e = (struct node *)malloc(sizeof(struct node));
	struct node * node_f = (struct node *)malloc(sizeof(struct node));
	struct node * node_g = (struct node *)malloc(sizeof(struct node));
	struct node * node_h = (struct node *)malloc(sizeof(struct node));
	struct node * node_i = (struct node *)malloc(sizeof(struct node));
	struct node * node_j = (struct node *)malloc(sizeof(struct node));
	struct node * node_k = (struct node *)malloc(sizeof(struct node));

	node_a->data = 'A';
	node_a->lchild = node_b;
	node_a->rchild = node_c;

	node_b->data = 'B';
	node_b->lchild = node_d;
	node_b->rchild = node_e;

	node_c->data = 'C';
	node_c->lchild = node_f;
	node_c->rchild = node_g;

	node_d->data = 'D';
	node_d->lchild = NULL;
	node_d->rchild = node_h;

	node_e->data = 'E';
	node_e->lchild = NULL;
	node_e->rchild = NULL;

	node_f->data = 'F';
	node_f->lchild = node_i;
	node_f->rchild = NULL;

	node_g->data = 'G';
	node_g->lchild = node_j;
	node_g->rchild = node_k;

	node_h->data = 'H';
	node_h->lchild = NULL;
	node_h->rchild = NULL;

	node_i->data = 'I';
	node_i->lchild = NULL;
	node_i->rchild = NULL;

	node_j->data = 'J';
	node_j->lchild = NULL;
	node_j->rchild = NULL;

	node_k->data = 'K';
	node_k->lchild = NULL;
	node_k->rchild = NULL;

	printf("Preorder: ");
	preorder(node_a);
	printf("\r\n");

	printf("Inorder: ");
	inorder(node_a);
	printf("\r\n");

	printf("Postorder: ");
	postorder(node_a);
	printf("\r\n");

	return 0;
}
