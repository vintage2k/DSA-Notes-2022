#include <stdio.h>
#include <stdlib.h>
struct _node{
	int vertice;
	struct _node * Next;
};
typedef struct _node * List;

//function to print a linked list
void Printlist(List lmao){
	printf("%d : ",lmao->vertice);
	while(lmao->Next!=NULL){
		lmao=lmao->Next;
		printf("%d ",lmao->vertice);
	}
	printf("\n");
}

void Append(List head,int x){
	if(head==NULL){
		return;
	}
	while(head->Next!=NULL){
		head=head->Next;
	}
	List NewVert = (List)malloc(sizeof(struct _node));
	NewVert->vertice=x;
	NewVert->Next=NULL;
	head->Next=NewVert;
	
}

int main(int argc, char **argv){
	int v,e,v1,v2;
	scanf("%d %d",&v,&e);
	List header = (List)malloc(sizeof(struct _node)*v);
	for(int i=0;i<v;i++){
		header[i].Next=NULL;
		header[i].vertice=i+1;
	}
	// ^^ temporary pointer 
	for(int i=0;i<e;i++){
		scanf("%d %d",&v1,&v2);
		Append(&header[v1-1],v2);
		Append(&header[v2-1],v1);
	}
	for(int i=0;i<v;i++){
		Printlist(&header[i]);
	}
	return 0;
}

