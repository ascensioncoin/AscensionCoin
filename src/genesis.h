#ifndef GENESIS_H
#define GENESIS_H

#include "bignum.h"

// Genesis block 0 hash

static const uint256 hashGenesisBlock("000005d98bd5b7308b8650d8052d075fcf3dabba6b64c3f5877580112ab4b83d");
static const uint256 hashGenesisBlockTestNet("000005d98bd5b7308b8650d8052d075fcf3dabba6b64c3f5877580112ab4b83d");
static const uint256 fCheckPoint1("0000000e1eb8a8285e8aa83e943a452840d482a03eccb4d653f0a79dca96065f"); // new chain checkpoint at block 70
static const uint256 fCheckPoint2("a8f2a857e2150bd82745c191cd9decc0f722392954f07817e601f33b4a90cb63"); // checkpoint at block 8300
static const uint256 fCheckPoint3("a3079dc8e174ee0461a9e88e99efed05df0fb21a6822c8f4e2b9af57ee480a6c"); // checkpoint at block 12000
static const uint256 fCheckPoint4("3d88428b2d12fb31c8ee673e0febdb2a2c05e315886eb767f2150e47cf466752"); // checkpoint at block 20000
static const uint256 fCheckPoint5("4606fc5da7816ed65a61e859ed2bb55bd34690a080442b9a3cc0fa37f3d7b70c"); // checkpoint at block 20001
static const uint256 fCheckPoint6("c7e7125fd4ba32ea147f740510a820433daf27834e9f5a3cb8d7750e24741bcc"); // checkpoint at block 30000
// TODO: Move Kernel checksum in here


#endif // GENESIS_H
