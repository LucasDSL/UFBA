// Feito por Adrielle Andrade Carvalho
#include <stdlib.h>
#include <stdio.h>

int dia(char data[10]){
	int dia=(data[0]-48)*10+(data[1]-48);
	return dia;
}
int mes(char data[10]){
	int mes=(data[3]-48)*10+(data[4]-48);
	return mes;
}
int ano(char data[10]){
  	int ano=(data[6]-48)*1000+(data[7]-48)*100+(data[8]-48)*10+(data[9]-48);
  	return ano;
}
int DataValida(char data[10]){
	int i, v=1;
	for(i = 0; i < 10; i++){
	    if(i==2 || i==5) {
	    	if(data[i]!='/') {
	        	v=0;
	    	}
	    }else {
	    	if(data[i]<48 || data[i]>57){
	    		v=0; 
			}	
    	}   
	}
	if(mes(data)>12 || mes(data)<1){
    	v=0;
	}
	if(mes(data)==2){
    	if((ano(data)%4==0 && ano(data)%100!=0) || ano(data)%400==0) {
			if(dia(data)>29 || dia(data)<1){
        		v=0;
      		}
    	}else{
    	    if(dia(data)>28 || dia(data)<1){
        		v=0;
      		}
   		}
  	}else if(mes(data)==4 || mes(data)==6 || mes(data)==9 || mes(data) == 11){
    	if(dia(data)>30 || dia(data)<1){
      		v=0;
    	}
  	}else {
    	if(dia(data)>31 || dia(data)<1){
      		v=0;
    	}
  	}
  	return v;
}
void DiaSeguinte(int d, int m, int a){
	d++;
	if(d>31){
		d=1;
		m++;
		if(m>12){
			m=1;
			a++;
		}
	}else if(d>30 && (m==4 || m==6 || m==9 || m==11)){
		d=1;
		m++;
	}else if(d>28 && m==2){
		if(a%4!=0 || a%100==0){
			d=1;
			m=3;
		}
	}
	if(d<10){
		printf("0%d/", d);
	}else{
		printf("%d/", d);
	}
	if(m<10){
		printf("0%d/", m);
	}else{
		printf("%d/", m);
	}
	printf("%d", a);
}

int main(){
	char data[10];
	int d, m, a;
	scanf("%s", &data);
	if(DataValida(data)==1){
		d=dia(data);
		m=mes(data);
		a=ano(data);
		DiaSeguinte(d, m, a);
	}else{
		printf("A data n�o � v�lida\n");
	}
    return 0;
}
