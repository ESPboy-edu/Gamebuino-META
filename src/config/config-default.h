
///////////////
// save defines
///////////////

#ifndef SAVEBLOCK_NUM
#define SAVEBLOCK_NUM 128
#endif


///////////////
// display defines
///////////////

//#ifndef DISPLAY_MODE
//#define DISPLAY_MODE DISPLAY_MODE_RGB565
//#endif

#ifndef DISPLAY_DEFAULT_BACKGROUND_COLOR
#define DISPLAY_DEFAULT_BACKGROUND_COLOR Color::black
#endif

#ifndef DISPLAY_DEFAULT_COLOR
#define DISPLAY_DEFAULT_COLOR Color::white
#endif

//#ifndef DEFAULT_FONT_SIZE
//#if DISPLAY_MODE == DISPLAY_MODE_INDEX
//#define DEFAULT_FONT_SIZE 2
//#else
#define DEFAULT_FONT_SIZE 1
//#endif
//#endif



///////////////
// language defines
///////////////

#ifndef LANGUAGE_DEFAULT_SIZE
#define LANGUAGE_DEFAULT_SIZE 0
#endif

///////////////
// Fault Handler defines
///////////////

#ifndef HARDFAULT_DEBUG_HANDLER
#define HARDFAULT_DEBUG_HANDLER 0
#endif

