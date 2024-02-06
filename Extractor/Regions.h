#pragma once

#include <string>
#include <stdint.h>

constexpr int GameTitleIdLength = 0xB;

enum ENUM_GAME_TITLE
{
  GAME_TITLE_ZERO_1 = 0,
  GAME_TITLE_ZERO_2,
  GAME_TITLE_ZERO_3
};

enum ENUM_GAME_VERSION
{
  GAME_VERSION_NTSCU,
  GAME_VERSION_NTSCJ,
  GAME_VERSION_PAL,
  GAME_VERSION_DEBUG,
  GAME_VERSION_PROTO
};

struct ZeroGameLookupData
{
  uint32_t game_title_offset;
  std::string game_serial;
  ENUM_GAME_TITLE game_title;
  ENUM_GAME_VERSION game_version;
};

const ZeroGameLookupData GAME_VERSION_TABLE[8] = {
  // FATAL FRAME 1 US
    {0x20000010, "SLUS_203.88", GAME_TITLE_ZERO_1, GAME_VERSION_NTSCU},

 // FATAL FRAME 1 JP
    {0x20000010, "SLPS_250.74", GAME_TITLE_ZERO_1, GAME_VERSION_NTSCJ},

 // FATAL FRAME 1 EU
    {0x00200010, "SLES_508.21", GAME_TITLE_ZERO_1,   GAME_VERSION_PAL},

 // FATAL FRAME 2 US
    {0x0008A010, "SLUS_207.66", GAME_TITLE_ZERO_2, GAME_VERSION_NTSCU},

 // FATAL FRAME 2 JP
    {0x0008A010, "SLPS_253.03", GAME_TITLE_ZERO_2, GAME_VERSION_NTSCJ},

 // FATAL FRAME 2 EU
    {0x00089810, "SLES_523.84", GAME_TITLE_ZERO_2,   GAME_VERSION_PAL},

 // FATAL FRAME 2 DEBUG
    {0x0019C810, "SLES_523.84", GAME_TITLE_ZERO_2, GAME_VERSION_DEBUG},

 // FATAL FRAME 2 PROTOTYPE
    {0x00088810, "SLPS_999.99", GAME_TITLE_ZERO_2, GAME_VERSION_PROTO}

  // FATAL FRAME 3
};