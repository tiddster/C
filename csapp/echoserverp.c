#include "csapp.h"
void echo(int connfd);

void sigchld_handler(int sig){
	while(waitpid(-1,0,WNOHANG)>0)
		;
	return;
}

int main(int argc, char **argv){
	int listenfd,connfd;
	socklen_t clientlen;
	struct sockaddr_storage clientaddr;

	if(argc != 2){
		fprintf(stderr, "usage: %s<port>\n",argv[0]);
		exit(0);
	}

	signal(SIGCHLD,sigchld_handler);
	listenfd = open_listenfd(argv[1]);
	while(1){
		clientlen = sizeof(struct sockaddr_storage);
		connfd = accept(listenfd, (SA *) &clientaddr, &clientlen);
		if (fork() == 0){
			close(listenfd);
			echo(connfd);
			close(connfd);
			exit(0);
		}
		close(connfd);
	}
}
