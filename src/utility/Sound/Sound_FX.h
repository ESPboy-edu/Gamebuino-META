#ifndef _GAMEBUINO_META_SOUND_FX_H_
#define	_GAMEBUINO_META_SOUND_FX_H_

#include "Sound.h"
#include "../../config/config.h"

namespace Gamebuino_Meta {

class Sound_Handler_FX{
  public:
	void init();
	void update();
	void play();
	uint8_t getVolume();
	int32_t getFrequency();
};

};	// Namespace Gamebuino_META


#endif // _GAMEBUINO_META_SOUND_FX_H_
