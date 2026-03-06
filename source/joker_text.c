#include "joker_text.h"

#include <stddef.h>

#define COUNT_OF(arr) (sizeof(arr) / sizeof((arr)[0]))

typedef struct
{
    const char* name;
    const char* desc;
} JokerTextEntry;

static const JokerTextEntry s_joker_text[] = {
    {"Joker", "Adds +4 mult."},
    {"Greedy Joker", "Played Diamonds give +3 mult when scored."},
    {"Lusty Joker", "Played Hearts give +3 mult when scored."},
    {"Wrathful Joker", "Played Spades give +3 mult when scored."},
    {"Gluttonous Joker", "Played Clubs give +3 mult when scored."},
    {"Jolly Joker", "Adds +8 mult if the played hand contains a Pair."},
    {"Zany Joker", "Adds +12 mult if the played hand contains Three of a Kind."},
    {"Mad Joker", "Adds +10 mult if the played hand contains Two Pair."},
    {"Crazy Joker", "Adds +12 mult if the played hand contains a Straight."},
    {"Droll Joker", "Adds +10 mult if the played hand contains a Flush."},
    {"Sly Joker", "Adds +50 chips if the played hand contains a Pair."},
    {"Wily Joker", "Adds +100 chips if the played hand contains Three of a Kind."},
    {"Clever Joker", "Adds +80 chips if the played hand contains Two Pair."},
    {"Devious Joker", "Adds +100 chips if the played hand contains a Straight."},
    {"Crafty Joker", "Adds +80 chips if the played hand contains a Flush."},
    {"Half Joker", "Adds +20 mult if the played hand has 3 or fewer cards."},
    {"Joker Stencil", "Gains xmult for empty Joker slots, plus extra for each Joker Stencil you own."},
    {"Photograph", "The first scored face card gives x2 mult."},
    {"Walkie Talkie", "Played 10s and 4s give +10 chips and +4 mult when scored."},
    {"Banner", "Adds +30 chips for each remaining discard."},
    {"Blackboard", "Gives x3 mult if every card in hand is a Spade or Club."},
    {"Mystic Summit", "Adds +15 mult if no discards remain."},
    {"Misprint", "Adds a random amount of mult from 0 to 23."},
    {"Even Steven", "Played even-valued cards give +4 mult."},
    {"Blue Joker", "Adds +2 chips for each card left in the deck."},
    {"Odd Todd", "Played odd-valued cards give +31 chips."},
    {"Shortcut", "Straights can skip one rank between cards."},
    {"Business Card", "Face cards have a 1 in 2 chance to earn $2 when scored."},
    {"Scary Face", "Played face cards give +30 chips."},
    {"Bootstraps", "Adds +2 mult for every $5 you have."},
    {"Pareidolia", "All cards are treated as face cards."},
    {"Reserved Parking", "Held face cards have a 1 in 2 chance to earn $1."},
    {"Abstract Joker", "Adds +3 mult for each owned Joker."},
    {"Bull", "Adds +2 chips for each dollar you have."},
    {"The Duo", "Gives x2 mult if the played hand contains a Pair."},
    {"The Trio", "Gives x3 mult if the played hand contains Three of a Kind."},
    {"The Family", "Gives x4 mult if the played hand contains Four of a Kind."},
    {"The Order", "Gives x3 mult if the played hand contains a Straight."},
    {"The Tribe", "Gives x2 mult if the played hand contains a Flush."},
    {"Blueprint", "Copies the ability of the Joker to the right."},
    {"Brainstorm", "Copies the ability of the leftmost Joker."},
    {"Raised Fist", "Held lowest-value card adds double its value as mult."},
    {"Smiley Face", "Played face cards give +5 mult."},
    {"Acrobat", "Gives x3 mult on the final hand of the round."},
    {"Dusk", "Retriggers all played cards on the final hand of the round."},
    {"Sock and Buskin", "Retriggers scored face cards."},
    {"Hack", "Retriggers played 2s, 3s, 4s, and 5s."},
    {"Hanging Chad", "Retriggers the first scored card two extra times."},
    {"Four Fingers", "Flushes and Straights can be made with 4 cards."},
    {"Scholar", "Played Aces give +20 chips and +4 mult."},
    {"Fibonacci", "Played Aces, 2s, 3s, 5s, and 8s give +8 mult."},
    {"Seltzer", "Retriggers all played cards for 10 hands, then is destroyed."},
};

static const JokerTextEntry s_unknown_joker = {"Unknown Joker", ""};

const char* joker_get_name(int joker_id)
{
    if (joker_id < 0 || (size_t)joker_id >= COUNT_OF(s_joker_text))
        return s_unknown_joker.name;
    return s_joker_text[joker_id].name;
}

const char* joker_get_desc(int joker_id)
{
    if (joker_id < 0 || (size_t)joker_id >= COUNT_OF(s_joker_text))
        return s_unknown_joker.desc;
    return s_joker_text[joker_id].desc;
}

size_t joker_text_get_count(void)
{
    return COUNT_OF(s_joker_text);
}
