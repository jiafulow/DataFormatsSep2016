#ifndef __L1TMuon_EMTFPtLUTData_h__
#define __L1TMuon_EMTFPtLUTData_h__

#include <cstdint>


namespace L1TMuonEndCap {

  struct EMTFPtLUTData {
    uint16_t delta_ph  [6]; // index: 0=12, 1=13, 2=14, 3=23, 4=24, 5=34
    uint16_t delta_th  [6]; // ^
    uint16_t sign_ph   [6]; // ^
    uint16_t sign_th   [6]; // ^
    uint16_t cpattern  [4]; // index: 0=ME1, 1=ME2, 2=ME3, 3=ME4
    uint16_t fr        [4]; // ^
    uint16_t ph        [4]; // ^
    uint16_t th        [4]; // ^
    uint16_t bt_chamber[4]; // ^
  };

}

#endif
