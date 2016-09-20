#ifndef __L1TMuon_EMTFRoad_h__
#define __L1TMuon_EMTFRoad_h__

#include <cstdint>
#include <vector>

namespace L1TMuonEndCap {

  struct EMTFRoad {

    EMTFRoad() : endcap(0), sector(0), bx(0),
                 zone(0), key_zhit(0), pattern(0),
                 straightness(0), layer_code(0), quality_code(0),
                 ph_q(0), ph_num(0), winner(0)
                 {}

    // DetId
    int16_t endcap;
    int16_t sector;

    // BX
    int16_t bx;

    // Pattern detector ID
    uint16_t zone;
    uint16_t key_zhit;
    uint16_t pattern;

    uint16_t straightness;
    uint16_t layer_code;
    uint16_t quality_code;  // used to be 'rank'

    uint16_t ph_q;
    uint16_t ph_num;
    uint16_t winner;  // 0: first winner, 1: second winner, ...

  };  // class EMTFRoad

  // Define a vector of EMTFRoad
  typedef std::vector<EMTFRoad> EMTFRoadCollection;

}

#endif
