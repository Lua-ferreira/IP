#include <stdio.h>
#include <string.h>

#define N 100000-1

void str_mirror(char str[] ) {
	int sz = strlen(str);
	int esq, dir;

	dir = sz;
	for(esq=sz-1; esq>=0; esq--) {
		str[dir] = str[esq];
		dir++;
	}
	str[dir] = '\0';
}

int main() {
	int k;
	char str[N], tmp[6];
	int I, F, sz, i;

	scanf("%d", &k);

	while(k--) {
		str[0] = '\0';
		scanf("%d%d", &I, &F);
		for( ; I<=F; I++) {
			sprintf(tmp, "%d", I);
			strcat(str, tmp);
		}
		str_mirror(str);
		printf("%s\n", str);
	}
    
	return 0;
}