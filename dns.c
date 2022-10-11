#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){

	if(argc <= 1){
		printf("Use: ./dns www.site.com \n");
		return 0;
	} else {
		struct hostent *alvo = gethostbyname(argv[1]);
		if (alvo == NULL){
			printf("Erro 404 ;-; \n");
	} else {
		printf("IP: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));
	}
}
}
