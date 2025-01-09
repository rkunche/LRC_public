Registration()
{
	
	web_reg_save_param("c_userId",
	                   "LB={\"userId\":\"",
	                   "RB=\",\"passwordToken",
	                   LAST);

	lr_start_transaction("DJ_MC_S02_CC_77_Registration_GetSetPasswordToken");
	
	web_rest("getSetPasswordToken",
		"URL=http://ad1-nft-pcclus-sor.test.hastings.local:9080/pc/service/unauthenticated/edgev10/account/account",
		"Method=POST",
		"ResType=JSON",
		"Snapshot=t1001.inf",
		"Body={"
		"\"id\": \"4\","
		"\"method\": \"getSetPasswordToken\","
		"\"params\": [{"
		"\"brand\": \"HD\","
		"\"dateOfBirth\": \"{p_DMYDOB}\","
		"\"emailAddress\": \"{c_Email}\""
		"}],"
		"\"jsonrpc\": \"2.0\""
		"}",
		LAST);

	lr_end_transaction("DJ_MC_S02_CC_77_Registration_GetSetPasswordToken", LR_AUTO);
	
	lr_think_time(10);
		
	web_reg_find("Text=and brand HD was verified", LAST);

	lr_start_transaction("DJ_MC_S02_CC_78_Registration_VerifyEmail");
	
	web_rest("verifyEmail",
		"URL=http://ad1-nft-pcclus-sor.test.hastings.local:9080/pc/service/unauthenticated/edgev10/account/account",
		"Method=POST",
		"ResType=JSON",
		"Snapshot=t1002.inf",
		"Body={"
		"\"id\": \"4\","
		"\"method\": \"verifyEmail\","
		"\"params\": [{"
		"\"brand\": \"HD\","
		"\"userId\": \"{c_userId}\""
		"}],"
		"\"jsonrpc\": \"2.0\""
		"}",
		LAST);

	lr_end_transaction("DJ_MC_S02_CC_78_Registration_VerifyEmail", LR_AUTO);
	
	lr_think_time(10);	
	
	
	return 0;
}