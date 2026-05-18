struct bnode{
    tipo_key key;
    tipo_inf inf;
    bnode* left;
    bnode* right;
    bnode* parent;
};
typedef bnode* bst;


tipo_key get_key(bnode*);
tipo_inf get_value(bnode*);
bnode* get_right(bnode*);
bnode* get_left(bnode*);
bnode* get_parent(bnode*);

void print_key(bnode*); 
//non è meglio metterla in tipo.h?

bnode* bst_new_node(tipo_key, tipo_inf);
bnode* bst_insert(bst& , bnode*);
bnode* bst_search(bst , tipo_key);
void bst_delete(bst& , bnode* );
