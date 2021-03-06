/**
 * Non-metric Space Library
 *
 * Authors: Bilegsaikhan Naidan (https://github.com/bileg), Leonid Boytsov (http://boytsov.info).
 * With contributions from Lawrence Cayton (http://lcayton.com/) and others.
 *
 * For the complete list of contributors and further details see:
 * https://github.com/searchivarius/NonMetricSpaceLib 
 * 
 * Copyright (c) 2014
 *
 * This code is released under the
 * Apache License Version 2.0 http://www.apache.org/licenses/.
 *
 */
#ifndef PARAMS_CMDLINE_H
#define PARAMS_CMDLINE_H

#include <string>
#include <vector>
#include <limits>
#include <map>
#include <set>
#include <memory>
#include <sstream>
#include <algorithm>
#include <stdexcept>

#include "logging.h"
#include "utils.h"
#include "params.h"

namespace similarity {

void ParseCommandLine(int argc, char *argv[], bool& bPrintProgress,
                      string&                         LogFile,
                      string&                         LoadIndexLoc,
                      string&                         SaveIndexLoc,
                      string&                         DistType,
                      string&                         SpaceType,
                      shared_ptr<AnyParams>&          SpaceParams,
                      unsigned&                       ThreadTestQty,
                      bool&                           AppendToResFile, 
                      string&                         ResFilePrefix,
                      unsigned&                       TestSetQty,
                      string&                         DataFile,
                      string&                         QueryFile,
                      string&                         CacheGSFilePrefix,
                      float&                          MaxCacheGSQty,
                      bool&                           recallOnly,
                      unsigned&                       MaxNumData,
                      unsigned&                       MaxNumQuery,
                      vector<unsigned>&               knn,
                      float&                          eps,
                      string&                         RangeArg,
                      string&                         MethodName,
                      shared_ptr<AnyParams>&          IndexTimeParams,
                      vector<shared_ptr<AnyParams>>&  QueryTimeParams);
};

#endif
