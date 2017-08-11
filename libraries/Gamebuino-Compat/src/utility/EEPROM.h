#ifndef _GAMEBUINO_COMPAT_EEPROM_H_
#define _GAMEBUINO_COMPAT_EEPROM_H_

#include <Arduino.h>

namespace Gamebuino_Compat {


class EEPROM_Class {
private:
	uint8_t* buffer;
	void flush();
	uint32_t blocks;
	uint32_t size;
public:
	void begin(uint32_t _size);
	uint8_t read(uint32_t address);
	void write(uint32_t address, uint8_t value);
	void update(uint32_t address, uint8_t value);
	
	template< typename T > T& get(uint32_t address, T& var);
	template< typename T > T& put(uint32_t address, T& var);
};

}; // namespace Gamebuino_Compat

using Gamebuino_Compat::EEPROM_Class;
extern EEPROM_Class EEPROM;

#endif // _GAMEBUINO_COMPAT_EEPROM_H_
