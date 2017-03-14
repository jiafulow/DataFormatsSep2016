// Class for input trigger primitives to EMTF - AWB 04.01.16
// Based on L1Trigger/L1TMuon/interface/deprecate/MuonTriggerPrimitive.h
// In particular, see struct CSCData

#ifndef __l1t_EMTFHit_h__
#define __l1t_EMTFHit_h__

#include <vector>
#include <boost/cstdint.hpp> 
#include <cmath>
#include <iostream>

#include "DataFormats/MuonDetId/interface/CSCDetId.h"
#include "DataFormats/MuonDetId/interface/RPCDetId.h"
#include "DataFormats/CSCDigi/interface/CSCCorrelatedLCTDigi.h"
#include "DataFormats/RPCDigi/interface/RPCDigi.h"
#include "DataFormats/L1TMuon/interface/EMTF/ME.h"

namespace l1t {
  
  class EMTFHit {
  public:
    
    EMTFHit() :
        endcap(0), station(0), ring(0), roll(0), chamber(0), sector(0), subsector(0), csc_ID(0), cscn_ID(0),
        bx(0), subsystem(0),
        pc_sector(0), pc_station(0), pc_chamber(0), pc_segment(0),
        valid(0), strip(0), strip_low(0), strip_hi(0), wire(0), quality(0), pattern(0), bend(0),
        phi_fp(0), theta_fp(0), phzvl(0), ph_hit(0), zone_hit(0), zone_code(0),
        fs_segment(0), fs_zone_code(0), bt_station(0), bt_segment(0),
        phi_loc_deg(0), phi_glob_deg(0), theta_deg(0), eta(0)
        {};

    virtual ~EMTFHit() {};

  private:

    int16_t endcap;
    int16_t station;
    int16_t ring;
    int16_t roll;
    int16_t chamber;
    int16_t sector;
    int16_t subsector;
    int16_t csc_ID;
    int16_t cscn_ID;

    // BX
    int16_t bx;

    // Subsystem
    int16_t subsystem;

    // Labels for the PrimitiveConversion processing unit
    uint16_t pc_sector;
    uint16_t pc_station;
    uint16_t pc_chamber;
    uint16_t pc_segment;

    // Input to PrimitiveConversion
    uint16_t valid;
    uint16_t strip;
    uint16_t strip_low;
    uint16_t strip_hi;
    uint16_t wire;
    uint16_t quality;
    uint16_t pattern;
    uint16_t bend;

    // Output from PrimitiveConversion
    uint16_t phi_fp;
    uint16_t theta_fp;
    uint16_t phzvl;
    uint16_t ph_hit;
    uint16_t zone_hit;
    uint16_t zone_code;

    // Variables used in PrimitiveMatching
    uint16_t fs_segment;
    uint16_t fs_zone_code;

    // Variables used in BestTrackSelection
    uint16_t bt_station;
    uint16_t bt_segment;

    // Coordinates
    float phi_loc_deg;
    float phi_glob_deg;
    float theta_deg;
    float eta;

  }; // End of class EMTFHit
  
  // Define a vector of EMTFHit
  typedef std::vector<EMTFHit> EMTFHitCollection;
  
} // End of namespace l1t

#endif /* define __l1t_EMTFHit_h__ */
