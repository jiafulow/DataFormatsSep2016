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
        endcap(-99), station(-99), ring(-99), sector(-99), sector_idx(-99), subsector(-99), 
        chamber(-99), csc_ID(-99), cscn_ID(-99), roll(-99), rpc_layer(-99), neighbor(-99), mpc_link(-99),
        pc_sector(-99), pc_station(-99), pc_chamber(-99), pc_segment(-99),
        wire(-99), strip(-99), strip_hi(-99), strip_low(-99), track_num(-99), quality(-99), 
        pattern(-99), bend(-99), valid(-99), sync_err(-99), bc0(-99), bx(-99), stub_num(-99),
        phi_fp(-99), theta_fp(-99), phzvl(-99), ph_hit(-99), zone_hit(-99), zone_code(-99),
        fs_segment(-99), fs_zone_code(-99), bt_station(-99), bt_segment(-99),
        phi_loc(-99), phi_glob(-99), theta(-99), eta(-99),
        phi_sim(-99), theta_sim(-99), eta_sim(-99),
        is_CSC(-99), is_RPC(-99), subsystem(-99),
        {};

    virtual ~EMTFHit() {};

  private:

    int endcap;
    int station;
    int ring;
    int sector;
    int sector_idx;
    int subsector;
    int chamber;
    int csc_ID;
    int cscn_ID;
    int roll;
    int rpc_layer;
    int neighbor;
    int mpc_link;
    int pc_sector;
    int pc_station;
    int pc_chamber;
    int pc_segment;
    int wire;
    int strip;
    int strip_hi;
    int strip_low;
    int track_num;
    int quality;
    int pattern;
    int bend;
    int valid;
    int sync_err;
    int bc0;
    int bx;
    int stub_num;
    int phi_fp;
    int theta_fp;
    int phzvl;
    int ph_hit;
    int zone_hit;
    int zone_code;
    int fs_segment;
    int fs_zone_code;
    int bt_station;
    int bt_segment;
    float phi_loc;
    float phi_glob;
    float theta;
    float eta;
    float phi_sim;
    float theta_sim;
    float eta_sim;
    int is_CSC;
    int is_RPC;
    int subsystem;

  }; // End of class EMTFHit
  
  // Define a vector of EMTFHit
  typedef std::vector<EMTFHit> EMTFHitCollection;
  
} // End of namespace l1t

#endif /* define __l1t_EMTFHit_h__ */
