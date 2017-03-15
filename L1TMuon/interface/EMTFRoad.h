#ifndef __l1t_EMTFRoad_h__
#define __l1t_EMTFRoad_h__

#include <vector>
#include <boost/cstdint.hpp> 
#include <cmath>
#include <iostream>

namespace l1t {
  
  class EMTFRoad {
  public:

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

  }; // End of class EMTFRoad
  
  // Define a vector of EMTFRoad
  typedef std::vector<EMTFRoad> EMTFRoadCollection;
  
} // End of namespace l1t

#endif /* define __l1t_EMTFRoad_h__ */
