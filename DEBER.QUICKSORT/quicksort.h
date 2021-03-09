
int mitad (int a[], int inicial, int fina){

return a[((inicial+fina)/2)];
}
void ordenar(int a[], int inicial, int fina){

int i =inicial;
int j=fina;


int piv=mitad(a,inicial,fina);
int tem;

do{
    while(a[i]<piv)
    {
        i++;
    }
    while(a[j]>piv){
        j--;
    }
    if(i<=j){



        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
        i++;
        j--;
    }
    }while(i<=j);
    if(inicial<j)
        ordenar(a,inicial,j);
    if(i>fina)
        ordenar(a,i,fina);












}



