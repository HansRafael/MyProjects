#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct 
{
    char texto[3000]
} string;

int comp(const void *p1, const void *p2){
    string *i
}

void main ()
{

	unsigned short casos;
	unsigned short i, j, k;

	scanf("%hu", &casos);
	string palavras[60];
	char entrada[3000];

	while (casos--)
	{
		memset(palavras, 0, sizeof(palavras));
		memset(entrada, 0, sizeof(entrada));
		scanf(" %[^\n]", entrada);

		i = j = k = 0;
		while (true)
		{
			while (entrada[i] != ' ')
			{
				if (entrada[i] == '\0')
					break;
				else
					palavras[j].texto[k++] = entrada[i++];
			}

			// caractere nulo na posição atual para marcar o fim da string de saída;
			palavras[j].texto[k] = '\0';

			// Se o caractere na posição atual for o caractere nulo, pare o
			// laço mais externo;
			if (entrada[i] == '\0')
				break;

			// Se não, o código segue e os índices incrementam;
			i++; j++;
			k = 0;

		}

		j++;


    }
}
