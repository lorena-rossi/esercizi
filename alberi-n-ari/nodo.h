struct node{
    tipo_inf inf;
    node* parent;
    node* firstchild;
    node* nextsibling;
} ;

typedef node* tree;

tipo_inf get_info(node* );
node* get_firstchild(node* );
node* get_nextsibiling(node *);
node* get_parent(node*);

node* new_node(tipo_inf);

void insert_child( tree , tree );

void inser_sibling( node* , tree );