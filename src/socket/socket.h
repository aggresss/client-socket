

typedef void Socket_writeComplete(int socket, int rc);

void Socket_outInitialize(Sockets* s);
void Socket_outTerminate(Sockets* s);
int Socket_getReadySocket(Sockets* s, int more_work, struct timeval *tp, mutex_type mutex);
int Socket_getch(Sockets* s, int socket, char* c);
char *Socket_getdata(Sockets* s, int socket, size_t bytes, size_t* actual_len);
int Socket_putdatas(Sockets* s, int socket, char* buf0, size_t buf0len, int count, char** buffers, size_t* buflens, int* frees);
void Socket_close(Sockets* s, int socket);
int Socket_new(Sockets* s, const char* addr, size_t addr_len, int port, int* socket);
int Socket_noPendingWrites(Sockets* s, int socket);
void Socket_addPendingWrite(Sockets* s, int socket);
void Socket_clearPendingWrite(Sockets* s, int socket);
void Socket_setWriteCompleteCallback(Sockets* s, Socket_writeComplete*);
