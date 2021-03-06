#include "../fsm.h"
#include "multi.h"
#include "half_final.h"
#include "simple.h"
#include "slow.h"
#include "loaded.h"

namespace Pire {

const SimpleScanner* SimpleScanner::m_null = &SimpleScanner::Null();
const SlowScanner*   SlowScanner  ::m_null = &SlowScanner::Null();
const LoadedScanner* LoadedScanner::m_null = &LoadedScanner::Null();

}
