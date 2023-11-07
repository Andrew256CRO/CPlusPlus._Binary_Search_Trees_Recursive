#include<iostream>
#include"Functii.hpp"

void inserareIterativ(nod*& radacina, int valoare) {
	if (radacina == nullptr) {
		radacina = new nod;
		radacina->fs = nullptr;
		radacina->fd = nullptr;
		radacina->data = valoare;
	}
	else {
		nod* q = new nod;
		nod* p = radacina;
		while (p->fs != nullptr && valoare<p->data || p->fd != nullptr && valoare>p->data) {
			if (valoare < p->data) {
				p = p->fs;
			}
			else {
				p = p->fd;
			}
		}
		q->data = valoare;
		if (p->data > q->data) {
			p->fs = q;
		}
		else {
			p->fd = q;
		}
	}
}

void inserare(nod*& radacina, int valoare) {
	if (radacina == nullptr) {
		radacina = new nod;
		radacina->data = valoare;
		radacina->fs = nullptr;
		radacina->fd = nullptr;
	}
	else {
		if (valoare < radacina->data) {
			inserare(radacina->fs, valoare);
		}
		else {
			inserare(radacina->fd, valoare);
		}
	}
}

void inordine(nod*& radacina) {
	if (radacina != nullptr) {
		inordine(radacina->fs);
		std::cout << radacina->data << " ";
		inordine(radacina->fd);
	}
}

void preordine(nod*& radacina) {
	if (radacina != nullptr) {
		std::cout << radacina->data << " ";
		preordine(radacina->fs);
		preordine(radacina->fd);
	}
}

void postordine(nod*& radacina) {
	if (radacina != nullptr) {
		postordine(radacina->fs);
		postordine(radacina->fd);
		std::cout << radacina->data << " ";
	}
}

bool cautare(nod*& radacina, int valoare) {
	if (radacina == nullptr) {
		return 0;
	}
	if (radacina->data == valoare) {
		return 1;
	}
	if (valoare < radacina->data) {
		cautare(radacina->fs, valoare);
	}
	if (valoare > radacina->data) {
		cautare(radacina->fd, valoare);
	}
	return 0;
}