// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2018 The Ion Core developers

#ifndef ION_BLOCKSIGNATURE_H
#define ION_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //ION_BLOCKSIGNATURE_H
