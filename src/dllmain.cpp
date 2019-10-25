#include <cwmods.h>
#include <main.h>
#include <dllmain.h>

#define CUBE_VERSION "1.0.0.-1"

void Start()
{
	Main::GetInstance().Start();
}

EXPORT void ModInitialize() {
	Start();
}