#ifndef ION_XIONTRACKER_H
#define ION_XIONTRACKER_H

#include "primitives/zerocoin.h"

class CxIONTracker
{
private:
    std::string strWalletFile;
    std::map<uint256, CMintMeta> mapSerialHashes;
public:
    CxIONTracker(std::string strWalletFile);
    bool Archive(CZerocoinMint& mint, bool fUpdateDB = true);
    bool HasPubcoin(const CBigNum& bnValue) const;
    bool HasPubcoinHash(const uint256& hashPubcoin) const;
    bool HasSerial(const CBigNum& bnSerial) const;
    bool HasSerialHash(const uint256& hashSerial) const;
    bool IsEmpty() const { return mapSerialHashes.empty(); }
    CMintMeta Get(const uint256& hashSerial);
    CAmount GetBalance(bool fConfirmedOnly, bool fUnconfirmedOnly) const;
    std::vector<uint256> GetSerialHashes();
    std::vector<CMintMeta> GetMints(bool fConfirmedOnly) const;
    CAmount GetUnconfirmedBalance() const;
    bool UpdateMint(CZerocoinMint& mint, bool fUpdateDB = true);
    void Clear();
};

#endif //ION_XIONTRACKER_H
