/* Copyright (c) 2017, 2018 Gabriel Lampa da Cunha <gabriellampa@gmail.com>
 **
 ** This file is part of tooldoce.
 **
 ** tooldoce is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** tooldoce is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with tooldoce.  If not, see <http://www.gnu.org/licenses/>.
 ** */

#ifndef INCLUIDO_MUNICIO_H
#define INCLUIDO_MUNICIO_H

#include<libnfe/erros.h>
typedef struct pais_s Pais;
typedef struct uf_s Uf;
typedef struct municipio_s Municipio;
typedef struct endereco_s Endereco;

Endereco *  NewEndereco(void);
void DelEndereco(Endereco* t);
unsigned int SetCEP(Endereco * end, unsigned int c);
unsigned int GetCEP(Endereco * end);





#endif

