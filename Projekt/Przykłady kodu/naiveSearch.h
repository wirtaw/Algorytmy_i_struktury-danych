#ifndef NAIVE_SEARCH_H
#define NAIVE_SEARCH_H

#include <stdio.h>
#include <string.h>

// Naiwny algorytm do poszukiwania wzorców w łańcuchu tekstowym
void search(char* pat, char* txt)
{
	int m = strlen(pat);
	int n = strlen(txt);

	for (int i = 0; i <= n - m; i++) {
		int j;

		for (j = 0; j < m; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == m) {
			printf("Wzor znajdziony pod indeksem: %d\n", i);
		}
	}
}

#endif
