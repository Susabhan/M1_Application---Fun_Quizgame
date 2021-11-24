#define BUFSIZE 1024
#include "Auth.h"
#include <stdio.h>
#include <string.h>

int checkAuth(char* username, char* password) {
	//returns 1 for success, 0 for fail (true/false system)
	FILE *ptr = fopen("auth.txt", "r");
	if (ptr == NULL) {
		return 0;
	}
	int found = 0; //because we loop round for every space/line in file we have to see if line/space before was a valid username if so check password NOW.
	char buf[BUFSIZE];
	while (fscanf(ptr, "%s", buf) == 1){
		if (found == 1 && strlen(buf) == strlen(password) && strcmp(buf,password) == 0) {
			//strcmp is not enough on its own, as it can have whole parts of the string missing and still be valid, so check string length as well.
			fclose(ptr);
			return 1;
		} else {
			if(found == 1) return 0;
		}
		if (strlen(buf) == strlen(username) && strcmp(buf,username) == 0) {
			found = 1;
		}
	}
	fclose(ptr);
	return 0;
}