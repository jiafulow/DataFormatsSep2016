#ifndef __L1TMuon_EMTFHit_h__
#define __L1TMuon_EMTFHit_h__

#include <cstdint>
#include <vector>

namespace L1TMuonEndCap {

  struct EMTFHit {

    EMTFHit() : endcap(0), station(0), ring(0), chamber(0), sector(0), subsector(0), csc_ID(0), cscn_ID(0),
                bx(0), subsystem(0), pc_station(0), pc_chamber(0),
                valid(0), strip(0), wire(0), quality(0), pattern(0), bend(0),
                phi_fp(0), theta_fp(0), phzvl(0), ph_hit(0), zone_hit(0), zone_code(0),
                bc0(0), mpc_link(0), sync_err(0), track_num(0), stub_num(0), bx0(0), layer(0)
                {}

    // DetId
    int16_t endcap;
    int16_t station;
    int16_t ring;
    int16_t chamber;
    int16_t sector;
    int16_t subsector;
    int16_t csc_ID;
    int16_t cscn_ID;

    // BX
    int16_t bx;

    // Subsystem
    int16_t subsystem;

    // Station and chamber in firmware
    uint16_t pc_station;
    uint16_t pc_chamber;

    // Input to PrimitiveConversion
    uint16_t valid;
    uint16_t strip;
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

    // Other
    uint16_t bc0;
    uint16_t mpc_link;
    uint16_t sync_err;
    uint16_t track_num;
    uint16_t stub_num;
    uint16_t bx0;
    uint16_t layer;

  };  // class EMTFHit

  // Define a vector of EMTFHit
  typedef std::vector<EMTFHit> EMTFHitCollection;

}

#endif
