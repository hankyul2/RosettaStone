// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_CARD_ENUMS_HPP
#define ROSETTASTONE_CARD_ENUMS_HPP

#ifdef _MSC_VER
#define ROSETTASTONE_EXPAND_LARGE_ENUMS
#else  // _MSC_VER
#undef BETTER_ENUMS_MACRO_FILE
#define BETTER_ENUMS_MACRO_FILE "Rosetta/Commons/EnumMacros.hpp"
#endif  // _MSC_VER

#include <better-enums/enum.h>

#include <string>

namespace RosettaStone
{
//! \brief An enumerator for identifying the class of the card.
#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(CardClass, int, INVALID = 0, DEATHKNIGHT = 1, DRUID = 2, HUNTER = 3,
            MAGE = 4, PALADIN = 5, PRIEST = 6, ROGUE = 7, SHAMAN = 8,
            WARLOCK = 9, WARRIOR = 10, DREAM = 11, NEUTRAL = 12, WHIZBANG = 13)
#else
enum class CardClass
{
    INVALID = 0,
    DEATHKNIGHT = 1,
    DRUID = 2,
    HUNTER = 3,
    MAGE = 4,
    PALADIN = 5,
    PRIEST = 6,
    ROGUE = 7,
    SHAMAN = 8,
    WARLOCK = 9,
    WARRIOR = 10,
    DREAM = 11,
    NEUTRAL = 12,
    WHIZBANG = 13
};
#endif

//! \brief An enumerator for identifying the set of the card.
enum class CardSet
{
#define X(a) a,
#include "CardSet.def"
#undef X
};

const std::string CARD_SET_STR[] = {
#define X(a) #a,
#include "CardSet.def"
#undef X
};

//! \brief An enumerator for identifying the type of the card.
#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(CardType, int, INVALID = 0, GAME = 1, PLAYER = 2, HERO = 3,
            MINION = 4, SPELL = 5, ENCHANTMENT = 6, WEAPON = 7, ITEM = 8,
            TOKEN = 9, HERO_POWER = 10)
#else
enum class CardType
{
    INVALID = 0,
    GAME = 1,
    PLAYER = 2,
    HERO = 3,
    MINION = 4,
    SPELL = 5,
    ENCHANTMENT = 6,
    WEAPON = 7,
    ITEM = 8,
    TOKEN = 9,
    HERO_POWER = 10
};
#endif

//! \brief An enumerator for identifying the set of the card.
#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(ChoiceType, int, INVALID = 0, MULLIGAN = 1, GENERAL = 2)
#else
enum class ChoiceType
{
    INVALID = 0,
    MULLIGAN = 1,
    GENERAL = 2
};
#endif

#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(DeckType, int, CLIENT_ONLY_DECK = -1, UNKNOWN_DECK_TYPE = 0,
            NORMAL_DECK = 1, AI_DECK = 2, DRAFT_DECK = 4, PRECON_DECK = 5,
            TAVERN_BRAWL_DECK = 6, FSG_BRAWL_DECK = 7,
            FRIENDLY_TOURNAMENT_DECK = 8, HIDDEN_DECK = 1000)

BETTER_ENUM(DungeonRewardOption, int, INVALID = 0, LOOT = 1, TREASURE = 2)

BETTER_ENUM(EnchantmentVisual, int, INVALID = 0, POSITIVE = 1, NEGATIVE = 2,
            NEUTRAL = 3)

BETTER_ENUM(Faction, int, INVALID = 0, HORDE = 1, ALLIANCE = 2, NEUTRAL = 3)

BETTER_ENUM(FormatType, int, UNKNOWN = 0, WILD = 1, STANDARD = 2)
#endif

//! \brief An enumerator for identifying the game tag of the card.
enum class GameTag
{
#define X(a) a,
#include "GameTag.def"
#undef X
};

const std::string GAME_TAG_STR[] = {
#define X(a) #a,
#include "GameTag.def"
#undef X
};

#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(Locale, int, UNKNOWN = -1, enUS = 0, enGB = 1, frFR = 2, deDE = 3,
            koKR = 4, esES = 5, esMX = 6, ruRU = 7, zhTW = 8, zhCN = 9,
            itIT = 10, ptBR = 11, plPL = 12, ptPT = 13, jaJP = 14, thTH = 15)

BETTER_ENUM(Mulligan, int, INVALID = 0, INPUT = 1, DEALING = 2, WAITING = 3,
            DONE = 4)
#endif

//! \brief An enumerator for identifying the play requirement of the card.
enum class PlayReq
{
#define X(a) a,
#include "PlayReq.def"
#undef X
};

const std::string PLAY_REQ_STR[] = {
#define X(a) #a,
#include "PlayReq.def"
#undef X
};

#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(PlayState, int, INVALID = 0, PLAYING = 1, WINNING = 2, LOSING = 3,
            WON = 4, LOST = 5, TIED = 6, DISCONNECTED = 7, CONCEDED = 8)
#endif

//! \brief An enumerator for identifying the race of the card.
enum class Race
{
#define X(a) a,
#include "Race.def"
#undef X
};

const std::string RACE_STR[] = {
#define X(a) #a,
#include "Race.def"
#undef X
};

//! \brief An enumerator for identifying the rarity of the card.
#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(Rarity, int, INVALID = 0, COMMON = 1, FREE = 2, RARE = 3, EPIC = 4,
            LEGENDARY = 5, UNKNOWN_6 = 6)
#else
enum class Rarity
{
    INVALID = 0,
    COMMON = 1,
    FREE = 2,
    RARE = 3,
    EPIC = 4,
    LEGENDARY = 5,
    UNKNOWN_6 = 6
};
#endif

#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(State, int, INVALID = 0, LOADING = 1, RUNNING = 2, COMPLETE = 3)
#endif

//! \brief An enumerator for indicating the game state.
#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(Step, int, INVALID = 0, BEGIN_FIRST = 1, BEGIN_SHUFFLE = 2,
            BEGIN_DRAW = 3, BEGIN_MULLIGAN = 4, MAIN_BEGIN = 5, MAIN_READY = 6,
            MAIN_RESOURCE = 7, MAIN_DRAW = 8, MAIN_START = 9, MAIN_ACTION = 10,
            MAIN_COMBAT = 11, MAIN_END = 12, MAIN_NEXT = 13, FINAL_WRAPUP = 14,
            FINAL_GAMEOVER = 15, MAIN_CLEANUP = 16, MAIN_START_TRIGGERS = 17)
#else
enum class Step
{
    INVALID = 0,
    BEGIN_FIRST = 1,
    BEGIN_SHUFFLE = 2,
    BEGIN_DRAW = 3,
    BEGIN_MULLIGAN = 4,
    MAIN_BEGIN = 5,
    MAIN_READY = 6,
    MAIN_RESOURCE = 7,
    MAIN_DRAW = 8,
    MAIN_START = 9,
    MAIN_ACTION = 10,
    MAIN_COMBAT = 11,
    MAIN_END = 12,
    MAIN_NEXT = 13,
    FINAL_WRAPUP = 14,
    FINAL_GAMEOVER = 15,
    MAIN_CLEANUP = 16,
    MAIN_START_TRIGGERS = 17
};
#endif

#ifndef ROSETTASTONE_DOXYGEN
BETTER_ENUM(Zone, int, INVALID = 0, PLAY = 1, DECK = 2, HAND = 3, GRAVEYARD = 4,
            REMOVEDFROMGAME = 5, SETASIDE = 6, SECRET = 7)
#endif

template <class T>
T StrToEnum(std::string);
template <class T>
std::string EnumToStr(T);

#define STR2ENUM(TYPE, ARRAY)                                                \
    template <>                                                              \
    inline TYPE StrToEnum<TYPE>(std::string str)                             \
    {                                                                        \
        for (std::size_t i = 0; i < (sizeof(ARRAY) / sizeof(ARRAY[0])); ++i) \
        {                                                                    \
            if (ARRAY[i] == str)                                             \
            {                                                                \
                return TYPE(i);                                              \
            }                                                                \
        }                                                                    \
                                                                             \
        return TYPE(0);                                                      \
    }

#define ENUM2STR(TYPE, ARRAY)                  \
    template <>                                \
    inline std::string EnumToStr<TYPE>(TYPE v) \
    {                                          \
        return ARRAY[static_cast<int>(v)];     \
    }

#define ENUM_AND_STR(TYPE, ARRAY) \
    STR2ENUM(TYPE, ARRAY)         \
    ENUM2STR(TYPE, ARRAY)

ENUM_AND_STR(CardSet, CARD_SET_STR)
ENUM_AND_STR(GameTag, GAME_TAG_STR)
ENUM_AND_STR(PlayReq, PLAY_REQ_STR)
ENUM_AND_STR(Race, RACE_STR)
}  // namespace RosettaStone

#endif  // ROSETTASTONE_CARD_ENUMS_HPP
