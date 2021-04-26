#include"Node.h"
#include<stdio.h>
#include<stdlib.h>
//typedef struct _node_{
//	int value;
//	struct _node *next;
//}Node;
typedef struct _list{
	Node * head;
}List;

void print(List *plist);
void add(List *plist,int number);
viod serch(List *plist);
viod delect(List *plist);
int main(int argc,char const *argv[])
{	
	List list.head=NULL;
	int number;
	do	{
		scanf("%d",&number);
		if(number != -1){
		head = add(&list,number);
		}
	}while(number!=-1);
	print(&list);
	serch(&list);
	delect(&list);
}

void add(List *plist,int number){
		// add to linked-list 
			Node *p=(Node*)malloc(sizeof(Node));
			p->value=number;
			p->next =NULL;
			// find the last 
			Node *last = plist->head;
			if(last){
				while (last->next){
					last=last->next;
				}
				//attch
				last->next=p;
			}else{
				plist->head = p;
			}
}

void print(List *plist){
	Node *p;
	for(p=plist.head; p ; p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}

void serch(List *plist){
	scanf("%d",&number);
	Node*p;
	int d=0;
	for(p=plist.head;p;p=p->next){
		if(p->value==number){
			printf("ур╣╫ак\n");
			d=1;
			break;	
		}
	}
	if(!d){
		printf("NOT Found\n");
	}
}

viod delect(List *plist){
	scanf("%d",&number);
	Node *p *q;
	for(q=NULL,p=plist.head;p;q=p,p=p->next){
		if(p->value==number){
			if(q){
				q->next=p->next;
			}else{
				list.head=p->next;
			} 
			free(p);
			break;
		}
	}
}
