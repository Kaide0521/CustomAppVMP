//
// Created by liu meng on 2018/8/31.
//

#include "Thread.h"
 dvmThreadSelf_func dvmThreadSelfHook;
 dvmCheckSuspendPending_func dvmCheckSuspendPendingHook;

 bool initThreadFuction(void *dvm_hand,int apilevel){

    if (dvm_hand) {
        dvmThreadSelfHook = (dvmThreadSelf_func)dlsym(dvm_hand,
                                                      apilevel > 10 ? "_Z13dvmThreadSelfv" : "dvmThreadSelf");
        if (!dvmThreadSelfHook) {
            return JNI_FALSE;
        }
        dvmCheckSuspendPendingHook= (dvmCheckSuspendPending_func)dlsym(dvm_hand,"dvmCheckSuspendPending");
        if (!dvmCheckSuspendPendingHook) {
            return JNI_FALSE;
        }
        return JNI_TRUE;
    } else {
        return JNI_FALSE;
    }
}
