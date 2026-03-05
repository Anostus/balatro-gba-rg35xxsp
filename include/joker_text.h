#ifndef JOKER_TEXT_H
#define JOKER_TEXT_H

// Auto-added by build fix: this repo references joker_text.h but does not ship it.
// Provides display names and short (paraphrased) descriptions for the implemented jokers.

#include <stddef.h>

static const char* const JOKER_DISPLAY_NAMES[] = {
    "JOKER",
    "GREEDY JOKER",
    "LUSTY JOKER",
    "WRATHFUL JOKER",
    "GLUTTONOUS JOKER",
    "JOLLY JOKER",
    "ZANY JOKER",
    "MAD JOKER",
    "CRAZY JOKER",
    "DROLL JOKER",
    "SLY JOKER",
    "WILY JOKER",
    "CLEVER JOKER",
    "DEVIOUS JOKER",
    "CRAFTY JOKER",
    "HALF JOKER",
    "JOKER STENCIL",
    "PHOTOGRAPH",
    "WALKIE TALKIE",
    "BANNER",
    "BLACKBOARD",
    "MYSTIC SUMMIT",
    "MISPRINT",
    "EVEN STEVEN",
    "BLUE JOKER",
    "ODD TODD",
    "SHORTCUT",
    "BUSINESS CARD",
    "SCARY FACE",
    "BOOTSTRAPS",
    "PAREIDOLIA",
    "RESERVED PARKING",
    "ABSTRACT JOKER",
    "BULL",
    "THE DUO",
    "THE TRIO",
    "THE FAMILY",
    "THE ORDER",
    "THE TRIBE",
    "BLUEPRINT",
    "BRAINSTORM",
    "RAISED FIST",
    "SMILEY FACE",
    "ACROBAT",
    "DUSK",
    "SOCK AND BUSKIN",
    "HACK",
    "HANGING CHAD",
    "FOUR FINGERS",
    "SCHOLAR",
    "FIBONACCI",
    "SELTZER",
    "SHOOT THE MOON",
};

static const char* const JOKER_DESCRIPTIONS[] = {
    "Basic Joker. Adds a small Mult bonus when scoring.",
    "Scored Diamonds grant bonus Mult.",
    "Scored Hearts grant bonus Mult.",
    "Scored Spades grant bonus Mult.",
    "Scored Clubs grant bonus Mult.",
    "Bonus Mult if played hand contains a Pair.",
    "Bonus Mult if played hand contains Three of a Kind.",
    "Bonus Mult if played hand contains Two Pair.",
    "Bonus Mult if played hand contains a Straight.",
    "Bonus Mult if played hand contains a Flush.",
    "Bonus Chips if played hand contains a Pair.",
    "Bonus Chips if played hand contains Two Pair.",
    "Bonus Chips if played hand contains Three of a Kind.",
    "Bonus Chips if played hand contains a Straight.",
    "Bonus Chips if played hand contains a Flush.",
    "Bonus Mult if you play 3 or fewer cards.",
    "XMult based on empty Joker slots.",
    "First scored face card gets a Mult multiplier.",
    "Scored 4s and 10s grant bonus scoring.",
    "Chips based on remaining discards.",
    "XMult if all held cards are black suits.",
    "Bonus Mult when you have no discards left.",
    "Grants a random Mult bonus.",
    "Scored even ranks grant bonus Mult.",
    "Chips based on cards left in your deck.",
    "Scored odd ranks grant bonus Chips.",
    "Straights can skip a rank.",
    "Played face cards can grant money.",
    "Scored face cards grant bonus Chips.",
    "Mult increases with money.",
    "All cards count as face cards.",
    "Held face cards can grant money.",
    "Mult increases with number of Jokers owned.",
    "Chips increase with money.",
    "XMult if played hand contains a Pair.",
    "XMult if played hand contains Three of a Kind.",
    "XMult if played hand contains Four of a Kind.",
    "XMult if played hand contains a Straight.",
    "XMult if played hand contains a Flush.",
    "Copies ability of the Joker to the right.",
    "Copies ability of the leftmost Joker.",
    "Mult based on the lowest-ranked held card.",
    "Scored face cards grant bonus Mult.",
    "XMult on your final hand of the round.",
    "Retrigger played cards on your final hand.",
    "Retrigger played face cards.",
    "Retrigger played 2, 3, 4, and 5.",
    "Retrigger the first scored card.",
    "Straights/Flushes can be made with 4 cards.",
    "Scored Aces grant bonus scoring.",
    "Scored A,2,3,5,8 grant bonus Mult.",
    "Retrigger effects briefly, then expires.",
    "Queens held in hand grant bonus Mult.",
};

static inline const char* joker_get_display_name(unsigned int joker_id)
{
    if (joker_id < (sizeof(JOKER_DISPLAY_NAMES) / sizeof(JOKER_DISPLAY_NAMES[0])))
        return JOKER_DISPLAY_NAMES[joker_id];
    return "UNKNOWN";
}

static inline const char* joker_get_description(unsigned int joker_id)
{
    if (joker_id < (sizeof(JOKER_DESCRIPTIONS) / sizeof(JOKER_DESCRIPTIONS[0])))
        return JOKER_DESCRIPTIONS[joker_id];
    return "No description available.";
}

#endif // JOKER_TEXT_H
