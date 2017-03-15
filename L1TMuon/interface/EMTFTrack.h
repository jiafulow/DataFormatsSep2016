// Class for muon tracks in EMTF - AWB 04.01.16
// Mostly copied from L1Trigger/L1TMuonEndCap/interface/MuonInternalTrack.h

#ifndef __l1t_EMTFTrack_h__
#define __l1t_EMTFTrack_h__

#include <vector>
#include <boost/cstdint.hpp>
 
#include "DataFormats/GeometryVector/interface/Pi.h"
#include "DataFormats/L1TMuon/interface/EMTFHit.h"
#include "DataFormats/L1TMuon/interface/EMTF/SP.h"


namespace l1t {

  struct EMTFPtLUT {
    uint64_t address;
    uint16_t mode;
    uint16_t theta;
    uint16_t eta;
    uint16_t delta_ph  [6]; // index: 0=12, 1=13, 2=14, 3=23, 4=24, 5=34
    uint16_t delta_th  [6]; // ^
    uint16_t sign_ph   [6]; // ^
    uint16_t sign_th   [6]; // ^
    uint16_t cpattern  [4]; // index: 0=ME1, 1=ME2, 2=ME3, 3=ME4
    uint16_t fr        [4]; // ^
    uint16_t bt_vi     [5]; // index: 0=ME1sub1, 1=ME1sub2, 2=ME2, 3=ME3, 4=ME4
    uint16_t bt_hi     [5]; // ^
    uint16_t bt_ci     [5]; // ^
    uint16_t bt_si     [5]; // ^
  };


  class EMTFTrack {
  public:

    EMTFTrack() : 
        endcap(-99), sector(-99), sector_idx(-99), mode(-99), mode_inv(-99),
        rank(-99), winner(-99), charge(-99), bx(-99), first_bx(-99), second_bx(-99),
        pt(-99), pt_XML(-99), zone(-99), ph_num(-99), ph_q(-99),
        theta_fp(-99), theta(-99), eta(-99), phi_fp(-99), phi_loc(-99), phi_glob(-99),
        track_num(-99), has_neighbor(-99), all_neighbor(-99), numHits(-99)
        {};

    explicit ~EMTFTrack() {};


  private:

    EMTFPtLUT _PtLUT;

    EMTFHitCollection _Hits;

    int endcap;
    int sector;
    int sector_idx;
    int mode;
    int mode_inv;
    int rank;
    int winner;  // 0: first winner, 1: second winner, ...
    int charge;
    int bx;
    int first_bx;
    int second_bx;
    float pt;
    float pt_XML;
    int zone;
    int ph_num;
    int ph_q;
    int theta_fp;
    float theta;
    float eta;
    int phi_fp;
    float phi_loc;
    float phi_glob;
    int track_num;  // the final position after removing invalid tracks and ghosts
    int has_neighbor;
    int all_neighbor;
    int numHits;

  }; // End of class EMTFTrack
  
  // Define a vector of EMTFTrack
  typedef std::vector<EMTFTrack> EMTFTrackCollection;
  
} // End of namespace l1t

#endif /* define __l1t_EMTFTrack_h__ */
