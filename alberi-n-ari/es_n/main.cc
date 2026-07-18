


#include <string.h>
#include <iostream>
using namespace std;

#include "tipo.h"
#include "bst.h"

void print_BST(bst b){
	if(get_left(b)!=NULL)
		print_BST(get_left(b));
	print_key(get_key(b));
	cout<<"  ";
	print(get_value(b));
	cout<<endl;
	if(get_right(b)!=NULL)
	print_BST(get_right(b));

}

void stampa_ricorsiva(bst b, int livello, string etichetta)
{
    if (b == NULL) return;   

    // stampa livello*4 spazi prima del nodo
    for (int i = 0; i < livello * 4; i++)
        cout << " ";

    cout << "[" << etichetta << "] ID: " << get_key(b);
    cout << " - Modello: " << get_modello(get_value(b));
    cout << " - Carico: " << get_carico(get_value(b)) << "%" << endl;

    stampa_ricorsiva(get_left(b),  livello + 1, "sx");
    stampa_ricorsiva(get_right(b), livello + 1, "dx");
}

void stampa_albero(bst & b)
{
    stampa_ricorsiva(b, 0, "radice");
}


int nuovo_albero(const char* file_nna, bst& t){
	int k;
	tipo_inf f;

	FILE *fp = fopen(file_nna, "r");
	if (fp == NULL)
	{
		cout <<"errore in apertura del file"<<endl;
		return -1;
	}
	
	char buffer[100];
	while ( fscanf(fp, "%d" "%s" "%f", &k, buffer, &(f.carico) ) != EOF)
	{
		//f.modello = (char *) malloc( strlen(buffer) + 1 );
		f.modello= buffer;
		bst_insert(t,bst_newNode(k,f));
	}

	fclose(fp);
	return 0;
}

void analizzaIN(bst radice, float soglia_critica){
	//report A dispositivi minori stampati con id in ordine decrescente
	bst t = NULL;
	t = cerca_solgia(radice,soglia_critica);
	//idea, salvare tutti Id sotto albero left in un char
	//poi lavorare con il char per il confronto
	//problema è che andare sempre verso sx e basta salto degli Id minori
	// oppure salvo id di quelli di sinistra e poi confronto con quelli di destra e uso search
	


	//resport B dispositivi con carico maggiore o uguale livello per livello BFS iterativa
}

bnode* cerca_solgia(bst b, float s){
	while (b != NULL)
	{
		if ( get_carico(get_value(b)) == s )
		{
			return b;
		}
		if ( get_carico(get_value(b)) < s )
		{
			b = get_right(b);
		} else
		{
			b=get_left(b);
		}

	}
	return NULL;
}


int main(){
	bst b=NULL;
	if (nuovo_albero("dispositivi.txt", b) == 0)
	{
		cout<<"albero fatto!"<<endl;
	}
	else
	{
		cout<<"hai fallito"<<endl;
	}
	

	stampa_albero(b);

	
	return 0;
}
