
#define DEBUG

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
		f.modello = (char *) malloc( sizeof(strlen(buffer) + 1) );
		strcpy(f.modello, buffer);
		bst_insert(t,bst_newNode(k,f));
	}
	
	
	fclose(fp);
	return 0;
}

int main(){
	bst b;
	if (nuovo_albero("dispositivi.txt", b) == 0)
	{
		cout<<"albero fatto!"<<endl;
	}
	else
	{
		cout<<"hai fallito"<<endl;
	}
	
	
	
	return 0;
}
