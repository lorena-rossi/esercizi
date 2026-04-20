typedef char tipo_inf;

struct elem
{
       tipo_inf inf[51] ;
       elem* pun ;
       elem* prev;
} ;

typedef elem* lista ;

tipo_inf* head(lista);
lista tail(lista);
elem* new_elem(tipo_inf );
elem* search(lista, tipo_inf* );
int compare(tipo_inf* ,tipo_inf* );
