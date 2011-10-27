#include "Convertion.h"
#include "base58.h"
using namespace std;

uint160 protobufTo160(const std::string& buf)
{
	uint160 ret;
	// TODO:
	return(ret);
}

uint256 protobufTo256(const std::string& hash)
{
	uint256 ret;
	// TODO:
	return(ret);
}

uint160 humanTo160(const std::string& buf)
{
	vector<unsigned char> retVec;
	DecodeBase58(buf,retVec);
	uint160 ret;
	for(unsigned int n=0; n<retVec.size(); n++)
	{
		if(n>=ret.GetSerializeSize()) break;
		ret.begin()[n]=retVec[n];
	}

	return(ret);
}

bool humanToPK(const std::string& buf,std::vector<unsigned char>& retVec)
{
	return(DecodeBase58(buf,retVec));
}

bool u160ToHuman(uint160& buf, std::string& retStr)
{
	retStr=EncodeBase58(buf.begin(),buf.end());
	return(true);
}