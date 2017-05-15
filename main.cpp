#include <cstdio>
#include <linux/unistd.h>
#include <string.h>
#include <iostream>
#include <pthread.h>

using namespace std;

void *MyThreadFunc(void *ap_data)
{
	cout << "Begin MyThread" << endl;
	*(int *)ap_data = 5;
	cout << "End MyThread" << endl;
	return NULL;
}

int main()
{
    printf("hello from PiThread!\n");
	pthread_t ntid;
	int data = 1;

	cout << "data = " << data << endl;
	cout << "Thread create" << endl;

	pthread_create(&ntid, NULL, MyThreadFunc, &data);

	sleep(1);

	cout << "data = " << data << endl;
	cout << "End" << endl;

    return 1;
}