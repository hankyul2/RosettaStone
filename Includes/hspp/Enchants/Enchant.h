// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_ENCHANT_H
#define HEARTHSTONEPP_ENCHANT_H

#include <hspp/Enchants/Effect.h>

#include <vector>

namespace Hearthstonepp
{
class Character;

//!
//! \brief Enchant class.
//!
//! This class stores some effects of enchantment card.
//!
class Enchant
{
 public:
    //! Default constructor.
    Enchant() = default;

    //! Constructs enchant with given \p effect.
    //! \param effect The effect of the card.
    Enchant(Effect& effect);

    //! Constructs enchant with given \p effects.
    //! \param effects A list of effect.
    Enchant(std::vector<Effect>& effects);

    //! Activates enchant to \p character.
    //! \param character The character to which enchant is activated.
    void ActivateTo(Character* character);

 private:
    std::vector<Effect> m_effects;
};
}  // namespace Hearthstonepp

#endif