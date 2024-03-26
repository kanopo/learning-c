#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void* thread_function(void* arg);

int main(void) {
    pthread_t thread_id;
    printf("Before thread creation\n");

    pthread_create(&thread_id, NULL, thread_function, NULL);
    pthread_join(thread_id, NULL); // Wait for the thread to finish
    printf("After thread creation\n");

    return 0;
}

void* thread_function(void* arg) {
    sleep(1);
    printf("Hello from thread\n");
    return NULL;
}
