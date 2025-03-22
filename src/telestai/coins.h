// Copyright (c) 2017-2025 The Telestai Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TELESTAI_TELESTAI_COINS_H
#define TELESTAI_TELESTAI_COINS_H

#include "compressor.h"
#include "core_memusage.h"
#include "hash.h"
#include "memusage.h"
#include "primitives/transaction.h"
#include "serialize.h"
#include "uint256.h"

#include <assert.h>
#include <stdint.h>

#include <assets/assetdb.h>
#include <assets/assets.h>
#include <unordered_map>

namespace Telestai
{
namespace Coins
{
void AddCoins_Transaction(CCoinsViewCache& cache, const CTransaction& tx, int nHeight, uint256 blockHash, bool check, CAssetsCache* assetsCache, std::pair<std::string, CBlockAssetUndo>* undoAssetData, const uint256& txid);
void AddCoins_Outputs(CCoinsViewCache& cache, const CTransaction& tx, int nHeight, uint256 blockHash, bool check, CAssetsCache* assetsCache, std::pair<std::string, CBlockAssetUndo>* undoAssetData, const uint256& txid, size_t i);
bool SpendCoin(const COutPoint& outpoint, Coin& tempCoin, CAssetsCache* assetsCache);
}; // namespace Coins
}; // namespace Telestai
#endif // TELESTAI_TELESTAI_COINS_H