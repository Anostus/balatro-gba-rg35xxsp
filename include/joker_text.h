#ifndef JOKER_TEXT_H
#define JOKER_TEXT_H

#include <stddef.h>

// Returns a short display name for a Joker ID.
// Never returns NULL.
const char* joker_get_name(int joker_id);

// Returns a short gameplay description for a Joker ID.
// Never returns NULL (may return an empty string for unknown IDs).
const char* joker_get_desc(int joker_id);

// Number of Joker entries that have text.
size_t joker_text_get_count(void);

#endif // JOKER_TEXT_H
