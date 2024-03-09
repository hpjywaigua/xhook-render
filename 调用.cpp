#include "xhook/xhook.h"

    xhook_register(".*\\.so$", "eglSwapBuffers", (void*)_eglSwapBuffers, (void **)&orig_eglSwapBuffers);
    xhook_refresh(0);
    //xhook库挂钩eglSwapBuffers