/*
 *  File:       mon-cast.h
 *  Summary:    Monster spell casting.
 *  Written by: Linley Henzell
 */

#ifndef MONCAST_H
#define MONCAST_H

#include "enum.h"

class monsters;
struct bolt;

void init_mons_spells();
bool is_valid_mon_spell(spell_type spell);

bool handle_mon_spell(monsters* mons, bolt &beem);

bolt mons_spells(monsters *mons, spell_type spell_cast, int power,
                 bool check_validity = false);
void mons_cast(monsters* mons, bolt &pbolt, spell_type spell_cast,
               bool do_noise = true, bool special_ability = false);
void mons_cast_noise(monsters* mons, const bolt &pbolt,
                     spell_type spell_cast, bool special_ability = false);
bool setup_mons_cast(monsters* mons, bolt &pbolt, spell_type spell_cast,
                     bool check_validity = false);

void mons_cast_haunt(monsters* mons);
void mons_cast_mislead(monsters* mons);
bool actor_is_illusion_cloneable(actor *target);
void mons_cast_spectral_orcs(monsters* mons);

#endif
