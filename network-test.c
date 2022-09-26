#include <errno.h>
#include <sys/socket.h>
#include <stdio.h>

#define SERVER "www.google.com"
#define PORT 80

int main(int argc, char *argv[])
{
	int fd = socket(AF_INET, SOCK_STREAM, 0);
	int ret;

	if (fd == -1) {
		ret = -errno;
		perror("failed to create socket");
		goto exit;
	}

	res = bind()

exit:
	return ret;
}
