#include <windows.h>

extern "C" __declspec(dllexport) void* CreateSnowman(void* parent)
{
    return nullptr;
}

extern "C" __declspec(dllexport) void DecompileAt(void* snowman, void* start, void* end)
{
}

extern "C" __declspec(dllexport) void DecompileRanges(void* snowman, void* ranges, void* count)
{
}

extern "C" __declspec(dllexport) void CloseSnowman(void* snowman)
{
}

BOOL WINAPI DllMain(
    _In_ HINSTANCE hinstDLL,
    _In_ DWORD     fdwReason,
    _In_ LPVOID    lpvReserved
    )
{
    return TRUE;
}