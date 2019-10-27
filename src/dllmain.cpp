#include "cwmods.h"
#include "core/main.h"
#include "dllmain.h"
static bool modInitFinished = false;
void Start()
{
	Main::GetInstance().Start();
}

EXPORT void ModInitialize() {
	if (modInitFinished)
		return;
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Start, nullptr, 0, 0);
	modInitFinished = true;
}
