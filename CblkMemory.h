#ifndef HARDWARE_CBLK_MEMORY_H
#define HARDWARE_CBLK_MEMORY_H

#include <stdint.h>
#include <strings.h>
#include <sys/cdefs.h>
#include <sys/types.h>
//audio added for mutex
#include <pthread.h>


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cblk_memory {
    volatile int32_t mFront;
    volatile int32_t mRear;
	size_t 		mMaxFrames;
	void * 	mBuffer;
};
typedef struct cblk_memory CblkMemory;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif //HARDWARE_CBLK_MEMORY_H

