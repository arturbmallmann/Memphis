#include <api.h>
#include <stdlib.h>

Message msg;

int main()
{

int j;

	for(j=0;j<128;j++) msg.msg[j]=j;

	/*Comm NR 640*/
	msg.length=128;
	for(j=0;j<5;j++) Receive(&msg,NR);
	/*Comm NR 640*/
	msg.length=128;
	for(j=0;j<5;j++) Send(&msg,NR);

return 0;

}
