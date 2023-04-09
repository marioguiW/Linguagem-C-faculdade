float f(int num[], int tam) {
    int i, j, min, aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
    for (j = (i+1); j < tam; j++) {
        if(num{j} < num[min]){
            min = j;
        }
        if (i !=min) {
            aux = num{i};
            num[i] = num[min];
            num[min] = aux;
        }
    }
    }
}
int main(){
    int v [10]={55, 7, 8, 1, 77, 99, 5, 2, 100, 3};
    f(v,3);
    for(int i=0;i<10;i++){
        printf("%d ",v[i]);
    }
}
