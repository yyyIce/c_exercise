#include <stdio.h>
#include <stdlib.h>

typedef unsigned long (*bf_hash_handler_type)(void *element);
struct bloom_filter {
    bf_hash_handler_type *handlers;
    unsigned char *bitmap;
    unsigned long k, m;
};
typedef struct bloom_filter *bf_core_type;


bf_core_type bf_create(bf_hash_handler_type handlers[], unsigned long k, unsigned long m) {
    bf_core_type bf;
    bf=(bf_core_type)malloc(sizeof(struct bloom_filter));
    bf->k=k;
    bf->m=m;
    bf->handlers=handlers;
    bf->bitmap=(unsigned char *)malloc((m+7)>>3);
    return bf;
}
static inline unsigned char bitget(unsigned char *bitmap, unsigned long index) {
    return 1&(bitmap[index>>3]>>(index&7));
}
int bf_has(bf_core_type bf, void *element) {
    int i;
    for(i=0; i<bf->k; i++) {
        if(!bitget(bf->bitmap, bf->handlers[i](element)%bf->m)) {
            return 0;
        }
    }
    return 1;
}
unsigned long simple_hash(void *element) {
    return *(unsigned long*)element;
}
//...

int main()
{
    bf_core_type bf;
    bf_hash_handler_type handlers[]= {simple_hash};
    unsigned long handlers_len=sizeof(handlers)/sizeof(bf_hash_handler_type);
    printf("sizeof unsigned long:%d\n",sizeof(unsigned long));
    printf("sizeof unsigned long *:%d\n",sizeof(unsigned long *));
    printf("sizeof handlers:%d\n",sizeof(handlers));
	printf("sizeof bf_hash_handler_type:%d\n",sizeof(bf_hash_handler_type));
    bf=bf_create(handlers, handlers_len, 100);
    //....
    return 0;
}
