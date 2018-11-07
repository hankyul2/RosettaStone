// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_CHARACTER_H
#define HEARTHSTONEPP_CHARACTER_H

#include <hspp/Cards/Entity.h>

namespace Hearthstonepp
{
//!
//! \brief Abstract character class that stores hero and minion data.
//!
//! This class inherits from Entity class. Also, it stores some
//! attributes that only characters have such as attack and health.
//!
class Character : public Entity
{
 public:
    //! Default constructor.
    Character() = default;

    //! Constructs character with given \p card.
    //! \param card A reference to the card.
    Character(Card& card);

    //! Default destructor.
    virtual ~Character() = default;

    //! Copy constructor.
    Character(const Character& c);

    //! Copy assignment operator.
    Character& operator=(const Character& c);

    //! Clones member variables.
    Character* Clone() const override;

    size_t GetAttack() const;

    void SetAttack(size_t attack);

    size_t attackableCount = 0;
    size_t remainTurnToThaw = 0;
    size_t health = 0;
    size_t maxHealth = 0;

 private:
    size_t m_attack = 0;
};
}  // namespace Hearthstonepp

#endif