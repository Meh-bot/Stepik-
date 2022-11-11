#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int k = 0, y = 0;
  scanf("%d", &k);
  y = k%2;
  	switch (y) {
    case 1 : printf("Любит\n"); break; 
    case 0 : printf("Не любит\n"); break;
  	}

	return 0;
}
