#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node {
    char data;
    struct node *next;
};
void push(char);
int p(char );
void pop();
void display();
struct node * top=NULL;
void main(){
    char exp[100];
    printf("Enter Expression : ");
    scanf("%s", exp);
    for(int i=0; exp[i]!='\0'; i++){
        if(isalnum(exp[i])){
            printf("%c", exp[i]);
        }
        else if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            while(top->data!='(' && top!=NULL){
                printf("%c", top->data);
                pop();
            }
            if(top->data=='('){
                pop();
            }
        }
        else{
            if(top==NULL){
                push(exp[i]);
            }
            else{
                if(p(top->data)<p(exp[i])){
                    push(exp[i]);
                }

                else if(p(top->data)>=p(exp[i])){
                    while(top!=NULL && (p(top->data)>=p(exp[i]))){
                        printf("%c",top->data);
                        pop();
                    }
                    push(exp[i]);
                }
            }
        }
    }
    while(top!=NULL){
        printf("%c", top->data);
        top=top->next;
    }
}
void push(char n){
    struct node *newnode;
    newnode=(struct node *) malloc (sizeof(struct node));
    newnode->data=n;
    newnode->next=top;
    top=newnode;
}
void pop(){
    top=top->next;
}
int p(char symbol){
	if(symbol == '^'){
		return 3;
	}
	else if(symbol == '*' || symbol == '/'){
		return 2;
	}
	else if(symbol == '+' || symbol == '-'){
		return 1;
	}
	else{
		return 0;
	}
}
