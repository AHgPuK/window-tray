#include <napi.h>
#include "tray.h"

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    NodeTray::Init(env, exports);
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)