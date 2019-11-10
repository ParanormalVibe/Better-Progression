#include "cwmods/cwmods.h"

class BetterProgressionWrapper : GenericMod {
	virtual void Initialize() override {
		LoadLibraryA("Mods/cubemod.cwmod");
	}
};

EXPORT BetterProgressionWrapper* MakeMod() {
	return new BetterProgressionWrapper();
}
