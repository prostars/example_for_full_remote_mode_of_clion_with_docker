#include <sys/epoll.h>
#include <unistd.h>
#include <iostream>

int main()
{
	int epollFd = epoll_create1(0);

	if (epollFd == -1)
	{
		std::cout << "Error: failed to open an epoll file descriptor" << std::endl;
		return EXIT_FAILURE;
	}

	return close(epollFd);
}