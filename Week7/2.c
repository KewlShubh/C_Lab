#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Component
{
    char details[20];
    int priority;
};
typedef struct Component compo_t;
struct node
{
    compo_t c;
    struct node *link;
};
typedef struct node node_t;
struct prio_queue
{
    node_t *head;
};
typedef struct prio_queue prio_t;



void init_queue(prio_t *p_queue) // Used to initialize the priority queue
{
    p_queue -> head = NULL;
}

void enque(prio_t* p_q,compo_t* com) 
{
    node_t *temp = (node_t*)malloc(sizeof(node_t));
    strcpy(temp ->c.details,com->details);
    temp->c.priority = com->priority;
    temp->link = p_q ->head;
    p_q ->head = temp;
}

void deque(prio_t* p_q) // used to delete the node from the queue based on the priority
{
    if(p_q->head == NULL)
        printf("No elements in the Q to delete\n");
    else
    {
        node_t *present = p_q ->head; // present points to wherever head is pointing
        node_t *prev = NULL;

        int max = 0;
        node_t *prev_max = NULL; 
        while(present != NULL)
        {       
            if(present->c.priority >= max)
            {
                max = present->c.priority;
                prev_max = prev;
            }
            prev = present;
            present = present->link;
        }
        compo_t compo;// to store the details of removed node. Just for printing purpose
        if(prev_max != NULL)
        {
    //Remove in the middle or the end of the list. The head will not change.
            node_t *temp = prev_max->link;
            prev_max->link = temp->link;
//copy the node information to component before deleting the node
            strcpy(compo.details,temp->c.details);
            compo.priority = temp->c.priority;
            free(temp);
        }
        else
        {
// if the first node has the highest priority, head must change
            node_t *temp = p_q ->head;
            p_q->head = p_q ->head->link;
 // copy the node information to component before deleting the node
            strcpy(compo.details,temp->c.details);
            compo.priority = temp->c.priority;
            free(temp);
        }
        printf("Deleted component is %s with %d priority\n", compo.details, compo.priority);
    }
}

void disp(const prio_t* p_q) // display the nodes, in turn components of the priority queue
{
    node_t *p = p_q ->head;
    if(p == NULL)
    {
        printf("No elements in queue");
    }
    else
    {
        while(p != NULL)
        {
            printf("%s %d\n",p->c.details,p->c.priority);
            p = p->link;
        }
    }
}

int main()
{
    prio_t queue;
    init_queue(&queue);
    compo_t c;
    printf("Enter your choice\n1.insert\n2.delete\n3.disp\n4.exit\n");
    int choice;
    scanf("%d",&choice);
    do
    {
        switch(choice)
        {
            case 1: printf("enter detail and priority");
                    scanf("%s%d",c.details,&c.priority);
                    enque(&queue,&c);
                    break;
            case 2: deque(&queue); break;
            case 3: disp(&queue); break;
            default: exit(0); // to terminate the program
        }
    printf("choice\n1.insert\n2.delete\n3.disp\n4.exit\n");
    scanf("%d",&choice);
    }while(choice<4);
    return 0;
}