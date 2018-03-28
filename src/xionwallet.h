// Copyright (c) 2017 The ION developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ION_XIONWALLET_H
#define ION_XIONWALLET_H

#include <map>
#include "libzerocoin/Coin.h"
#include "mintpool.h"
#include "uint256.h"
#include "primitives/zerocoin.h"

class CDeterministicMint;

class CxIONWallet
{
private:
    uint256 seedMaster;
    uint32_t nCount;
    std::string strWalletFile;
    CMintPool mintPool;

public:
    CxIONWallet(std::string strWalletFile, bool fFirstRun);
    bool SetMasterSeed(const uint256& seedMaster, bool fResetCount = false);
    uint256 GetMasterSeed() { return seedMaster; }
    void SyncWithChain(bool fGenerateMintPool = true);
    void GenerateDeterministicXION(libzerocoin::CoinDenomination denom, libzerocoin::PrivateCoin& coin, CDeterministicMint& dMint, bool fGenerateOnly = false);
    void GenerateMint(const uint32_t& nCount, const libzerocoin::CoinDenomination denom, libzerocoin::PrivateCoin& coin, CDeterministicMint& dMint);
    bool RegenerateMint(const CDeterministicMint& dMint, CZerocoinMint& mint);
    void GenerateMintPool(int nCountStart = -1, int nCountEnd = -1);
    bool LoadMintPoolFromDB();
    void RemoveMintsFromPool(const std::vector<uint256>& vPubcoinHashes);
    bool SetMintSeen(const CBigNum& bnValue, const int& nHeight, const uint256& txid, const libzerocoin::CoinDenomination& denom);
    bool IsInMintPool(const CBigNum& bnValue) { return mintPool.Has(bnValue); }

private:
    uint512 GetNextZerocoinSeed();
    uint512 GetZerocoinSeed(uint32_t n);
    void UpdateCount();
    void SeedToXION(const uint512& seed, CBigNum& bnSerial, CBigNum& bnRandomness, CKey& key);
};

#endif //ION_XIONWALLET_H
