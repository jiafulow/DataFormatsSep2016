#ifndef __l1t_EMTFRoad_h__
#define __l1t_EMTFRoad_h__

#include <vector>
#include <boost/cstdint.hpp> 
#include <cmath>
#include <iostream>

namespace l1t {
  
  class EMTFRoad {
  public:

    EMTFRoad() : 
        endcap(-99), sector(-99), sector_idx(-99), bx(-99), zone(-99),
        key_zhit(-99), pattern(-99), straightness(-99), 
        layer_code(-99), quality_code(-99), winner(-99)
        {};

    virtual ~EMTFRoad() {};


  private:

    int endcap;
    int sector;
    int sector_idx;
    int bx;
    int zone;
    int key_zhit;      // also called 'ph_num' or 'ph_pat'
    int pattern;
    int straightness;
    int layer_code;
    int quality_code;  // used to be 'rank'. also called 'ph_q'
    int winner;  // 0: first winner, 1: second winner, ...

  }; // End of class EMTFRoad
  
  // Define a vector of EMTFRoad
  typedef std::vector<EMTFRoad> EMTFRoadCollection;
  
} // End of namespace l1t

#endif /* define __l1t_EMTFRoad_h__ */
