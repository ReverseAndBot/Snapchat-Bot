//
// SnapchatGenerateTokens.cpp
//
// $Id: ... $
//
// This class generates the Snapchat signature variables x-snap-access-token and x-snapchat-att-token
//
// Requirements: no external API, no external service
//
// Copyright (C) 2023 - 2024 by ReverseEngineering & Partners, West Europe (GitHub: github.com/ReverseAndBot - E-Mail: info@reverseandbot.com - Telegram: ReverseEngineeringBHW)



#include "SnapchatGenerateTokens.h"



std::string SnapchatGenerateTokens::generateHTTPHeaderSignature (std::string strJob) {

   std::string strHTTPHeaderSignature = "";


   if (strJob == "accept-friend-request") {

      // Code removed due to privacy/security reasons
      // GitHub: https://github.com/ReverseAndBot - Telegram: ReverseEngineeringBHW - Email: info@reverseandbot.com

   } else if (strJob == "add-friend") {

      // retrieve x-snap-access-token ("hCgw...") from global variable
      strHTTPHeaderSignature += "x-snap-access-token:" + m_strSnapAccessToken + "\n";

      // generate x-snapchat-att-token ("Ci...") with reverse engineered native library code
      if (generateXSnapchatAttToken()) {
         strHTTPHeaderSignature += "x-snapchat-att-token: " + retrieveXSnapchatAttToken() + "\n";
      }

      // "BgAAAA..." HTTP body (cGRPC Protobuf variable) follows at ::generateHTTPBody()

   }


   return strHTTPHeaderSignature;

}
