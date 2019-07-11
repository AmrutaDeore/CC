typedef struct list
    {
        int num;
        struct node *ptr;
    } list_node;

typedef struct item { 
list_node node; 
/* other stuff */ 
} item_t; 

void function(void) 
{ 


item_t *p = calloc(1, sizeof (item_t)); 

list_insert(list, &p->node); /* <= Coverity doesn’t get that we can recover p later using container_of() */ 
return; /* <= Coverity declares a resource leak because p went out of scope */ 
} 