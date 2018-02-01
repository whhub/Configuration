#pragma once
#include "XAConfiguration/IUserConfiguration.h"
#include "XAUserConfigurationExportMacro.h"

class XA_UserConfiguration_Export XAUserConfiguration : public IUserConfiguration
{
public:
	virtual int LoadUserConfig(unsigned category);
	virtual int SaveUserConfig(unsigned category);
	virtual int SetUserConfig(unsigned category, unsigned tag, const std::string& value);
	virtual int GetUserConfig(unsigned category, unsigned tag, std::string& value);
	virtual ~XAUserConfiguration();
};
