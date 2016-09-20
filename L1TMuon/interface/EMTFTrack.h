#ifndef __L1TMuon_EMTFTrack_h__
#define __L1TMuon_EMTFTrack_h__

#include <cstdint>
#include <vector>
#include <array>

#include "DataFormatsSep2016/L1TMuon/interface/EMTFHit.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFRoad.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFPtLUTData.h"


namespace L1TMuonEndCap {

  struct EMTFTrack {

    EMTFTrack() : endcap(0), sector(0), bx(0), first_bx(0), second_bx(0),
                  rank(0), winner(0),
                  mode(0), ptlut_address(0),
                  charge(0), pt_int(0), phi_int(0), theta_int(0), eta_int(0),
                  num_hits(0),
                  ptlut_data(),
                  road(),
                  hits(), hits_ph_diff(), hits_valid()
                  {}

    // DetId
    int16_t endcap;
    int16_t sector;

    // BX
    int16_t bx;
    int16_t first_bx;
    int16_t second_bx;

    // Rank
    uint16_t rank;
    uint16_t winner;  // 0: first winner, 1: second winner, ...

    // Mode
    uint16_t mode;

    // pT LUT address
    uint64_t ptlut_address;

    // Charge
    int16_t  charge;

    // Momentum
    uint32_t pt_int;
    uint32_t phi_int;
    uint32_t theta_int;
    uint32_t eta_int;

    // Number of hits
    uint16_t num_hits;

    // pT LUT data
    EMTFPtLUTData ptlut_data;

    // Road
    EMTFRoad road;

    // Hits
    std::vector<EMTFHit> hits;
    std::vector<int>     hits_ph_diff;
    std::vector<bool>    hits_valid;

  };  // class EMTFTrack

  // Define a vector of EMTFTrack
  typedef std::vector<EMTFTrack> EMTFTrackCollection;

}

#endif
