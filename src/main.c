#include <stdio.h>

int main() {
  int a[5];
  int n;
  int aux;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

    for (int i=1; i<(n+1); i++) {
        aux = 0;
        for(int j =0; j<=4; j++){
            if((i%a[j])==0){
                printf("%i",j);
                aux ++;
            }
        }
        if(aux == 0) printf("-");
        printf("\n");
    }
  return 0;
}
