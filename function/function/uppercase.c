#include <stdio.h>
#include <string.h>
void UpperCase(char);
int main() {

	char buf[] = "i am a student";

	int length;

	int i;

	//printf("%s\n",buf);

	/*printf("%c\n", buf[0]);
	printf("%c\n", buf[1]);
	printf("%c\n", buf[2]);*/

	char c1 = 'a';
	char c2 = 'A';
	printf("%c %d\n",c1,c2);
	printf("%c %d\n",c1,c2);
	length = strlen(buf);
	//printf("문자열이 개수: %d\n",length);

	for (i = 0; i < length; i++) {
		/*printf("%c\n", buf[i]);*/
		UpperCase(buf[i]);
	}
	return 0;
}

void UpperCase(char data){
	if (data >= 'a' && data <= 'z') {
		data = data - ('a' - 'A');
	}
	printf("%c", data);
}