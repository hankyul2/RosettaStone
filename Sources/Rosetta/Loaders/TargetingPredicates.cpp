// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Rosetta/Loaders/TargetingPredicates.hpp>
#include <Rosetta/Models/Player.hpp>

namespace RosettaStone
{
TargetingPredicate TargetingPredicates::ReqMurlocTarget()
{
    return [](Character* character) { return character->IsRace(Race::MURLOC); };
}

TargetingPredicate TargetingPredicates::ReqDemonTarget()
{
    return [](Character* character) { return character->IsRace(Race::DEMON); };
}

TargetingPredicate TargetingPredicates::ReqMechanicalTarget()
{
    return [](Character* character) {
        return character->IsRace(Race::MECHANICAL);
    };
}

TargetingPredicate TargetingPredicates::ReqElementalTarget()
{
    return
        [](Character* character) { return character->IsRace(Race::ELEMENTAL); };
}

TargetingPredicate TargetingPredicates::ReqBeastTarget()
{
    return [](Character* character) { return character->IsRace(Race::BEAST); };
}

TargetingPredicate TargetingPredicates::ReqTotemTarget()
{
    return [](Character* character) { return character->IsRace(Race::TOTEM); };
}

TargetingPredicate TargetingPredicates::ReqPirateTarget()
{
    return [](Character* character) { return character->IsRace(Race::PIRATE); };
}

TargetingPredicate TargetingPredicates::ReqDragonTarget()
{
    return [](Character* character) { return character->IsRace(Race::DRAGON); };
}

TargetingPredicate TargetingPredicates::ReqTargetWithRace(Race race)
{
    switch (race)
    {
        case Race::MURLOC:
            return ReqMurlocTarget();
        case Race::DEMON:
            return ReqDemonTarget();
        case Race::MECHANICAL:
            return ReqMechanicalTarget();
        case Race::ELEMENTAL:
            return ReqElementalTarget();
        case Race::BEAST:
            return ReqBeastTarget();
        case Race::TOTEM:
            return ReqTotemTarget();
        case Race::PIRATE:
            return ReqPirateTarget();
        case Race::DRAGON:
            return ReqDragonTarget();
        case Race::UNDEAD:
        case Race::EGG:
            return []([[maybe_unused]] Character* character) { return true; };
        default:
            throw std::invalid_argument(
                "TargetingPredicates::ReqTargetWithRace() - "
                "Race is not implemented!");
    }
}

AvailabilityPredicate TargetingPredicates::ReqTargetForCombo()
{
    return [](Player* player, [[maybe_unused]] Card* card) {
        return player->IsComboActive();
    };
}
}  // namespace RosettaStone
