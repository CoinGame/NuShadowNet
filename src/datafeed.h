#ifndef DATA_FEED_H
#define DATA_FEED_H

#include <string>
#include "json/json_spirit_value.h"
#include "serialize.h"

class CVote;

class CDataFeed
{
public:
    int nVersion;
    std::string sURL;
    std::string sSignatureURL;
    std::string sSignatureAddress;

    CDataFeed()
    {
    }

    CDataFeed(const std::string sURL, const std::string sSignatureURL, const std::string sSignatureAddress) :
        sURL(sURL),
        sSignatureURL(sSignatureURL),
        sSignatureAddress(sSignatureAddress)
    {
    }

    IMPLEMENT_SERIALIZE
    (
        READWRITE(this->nVersion);
        nVersion = this->nVersion;
        READWRITE(sURL);
        READWRITE(sSignatureURL);
        READWRITE(sSignatureAddress);
    )

};

CVote ParseVote(const json_spirit::Object& objVote);
void StartUpdateFromDataFeed();
void UpdateFromDataFeed();

extern std::string strDataFeedError;

#endif
