#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[]){
	struct rtcdate r;
	if(date(&r)){ //you must implement date system call
		printf(2,"date failed\n");
		exit();
	}
	printf(1,"%d - %d - %d, %d:%d:%d" ,r.year,r.month,r.day,r.hour,r.minute,r.second);
	
	exit();

}
