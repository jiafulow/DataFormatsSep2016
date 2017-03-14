#ifndef __L1TMuon_EMTFRoadExtra_h__
#define __L1TMuon_EMTFRoadExtra_h__

#include <cstdint>
#include <vector>

namespace L1TMuonEndCap {

  struct EMTFRoadExtra {

    EMTFRoadExtra() : endcap(0), sector(0), bx(0),
                      zone(0), key_zhit(0), pattern(0),
                      straightness(0), layer_code(0), quality_code(0),
                      winner(0)
                      {}

    // DetId
    int16_t endcap;
    int16_t sector;

    // BX
    int16_t bx;

    // Pattern detector ID
    uint16_t zone;
    uint16_t key_zhit;      // also called 'ph_num' or 'ph_pat'
    uint16_t pattern;

    uint16_t straightness;
    uint16_t layer_code;
    uint16_t quality_code;  // used to be 'rank'. also called 'ph_q'

    uint16_t winner;  // 0: first winner, 1: second winner, ...

  };  // class EMTFRoadExtra

  // Define a vector of EMTFRoadExtra
  typedef std::vector<EMTFRoadExtra> EMTFRoadExtraCollection;

}

#endif
