cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 17)

project(BetterProgression)

include_directories(src/core)

include_directories(lib)
link_directories("lib/xed")

include_directories(src)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_CXX_FLAGS "-m64 -masm=intel -static -static-libgcc -static-libstdc++")
set(CMAKE_SHARED_LIBRARY_PREFIX "")

add_library(BetterProgression SHARED src/dllmain.cpp src/cwmods.cpp src/dllmain.h src/core/main.h src/core/memory/memory_helper.h src/core/game_structures.h src/core/hook/hooks/item_generation/hook_create_weapon.h src/core/hook/hooks/scaling/hook_get_item_modifier.h src/core/hook/hooks/scaling/hook_get_item_regen.h src/core/hook/hooks/pvp/hook_can_attack_entity.h src/core/hook/hooks/scaling/hook_get_item_haste.h src/core/hook/hooks/item_generation/hook_create_armor.h src/core/main.cpp src/core/hook/hooks/scaling/hook_get_item_crit.h src/core/hook/hooks/artifact/display/hook_concat_artifact_suffix.h src/core/hook/hooks/artifact/display/hook_artifact_display_roundf.h src/core/hook/hooks/artifact/display/hook_round_artifact_thing.h src/core/hook/hooks/artifact/base_stats/hook_get_hit_points.h src/core/hook/hooks/artifact/base_stats/hook_get_player_armor.h src/core/hook/hooks/artifact/hook_set_artifact_stats.h src/core/hook/hooks/artifact/base_stats/hook_get_attack_power.h src/core/hook/hooks/artifact/base_stats/hook_get_spell_power.h src/core/hook/hooks/artifact/base_stats/hook_get_player_resistance.h src/core/hook/hooks/artifact/base_stats/hook_get_player_haste.h src/core/hook/hooks/artifact/base_stats/hook_get_player_regeneration.h src/core/hook/hook.h src/core/hook/hooks/artifact/base_stats/hook_get_player_crit.h src/core/hook/hooks/command/hook_send_chat.h src/cwmods.h src/msvc/allocator.h src/msvc/list.h src/msvc/string.h src/msvc/vector.h src/msvc/wstring.h src/IDA/types.h src/gfx/Chunk.h src/gfx/D3D11Graphics.h src/gfx/D3D11Renderer.h src/cube/ChatWidget.h src/cube/Client.h src/cube/constants.h src/cube/Creature.h src/cube/Database.h src/cube/Field.h src/cube/Game.h src/cube/Gui.h src/cube/Host.h src/cube/Item.h src/cube/ItemStack.h src/cube/Speech.h src/cube/Spirit.h src/cube/SpriteManager.h src/cube/World.h src/cube/WorldMap.h src/cube/Zone.h src/common/ByteRGBA.h src/common/FloatRGBA.h src/common/FloatVector3.h src/common/IntVector2.h src/common/LongVector3.h src/plasma/Array.h src/plasma/Attribute.h src/plasma/ContinuousAttribute.h src/plasma/D3D11Engine.h src/plasma/DiscreteAttribute.h src/plasma/Display.h src/plasma/Engine.h src/plasma/Keyable.h src/plasma/NamedObject.h src/plasma/Node.h src/plasma/Object.h src/plasma/ObjectManager.h src/plasma/Vector.h src/plasma/Widget.h)
set_target_properties(BetterProgression PROPERTIES SUFFIX ".dll")

target_link_libraries(BetterProgression psapi xed)