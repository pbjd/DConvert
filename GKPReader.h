#ifndef _GKPREADER_H_
#define _GKPREADER_H_

#include "AS_PER_gkpStore.H"

#include "Read.h"
#include <string>
#include <vector>

class GKPReader {
  public:
    GKPReader(std::string gkp_store_name);
    ~GKPReader();

    int next_read(Read_T* read);

  private:
    gkStore* gk_store;    
    gkStream* gk_stream;
    int read_counter;
    int num_reads;
};

#endif
