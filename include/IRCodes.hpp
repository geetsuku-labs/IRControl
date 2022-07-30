#include <IRremoteInt.h>

namespace IR {
  IRData   YAMAHA_POWER   = { NEC, 0x7EU, 0x2AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
  IRData   YAMAHA_VOL_INC = { NEC, 0x7AU, 0x1AU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
  IRData   YAMAHA_VOL_DEC = { NEC, 0x7AU, 0x1BU, 0x0, 0x0, IRDATA_FLAGS_EMPTY, 0x0, NULL};
};