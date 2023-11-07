#pragma once
struct nod {
	int data;
	nod* fs, * fd;
};
void inserare(nod*& radacina, int valoare);
void inordine(nod*& radacina);
void preordine(nod*& radacina);
void postordine(nod*& radacina);
bool cautare(nod*& radacina, int valoare);
