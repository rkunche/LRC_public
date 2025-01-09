MyAccount()
{
	web_cache_cleanup();
	web_cleanup_cookies();
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");	
	
	web_reg_find("Text=Hastings Direct", LAST);
	
	web_reg_find("Text=Enter your email address to register or log in", LAST);
	
	web_reg_save_param("c_pageCode_101",
	                   "LB=if (ajaxBrowserNavigationCheck('&",
	                   "RB==",
	                   LAST);	
	
	web_reg_save_param("c_pageCodeValue_101",
	                   "LB==",
	                   "RB=', '', 'servletcontroller', ''))",
	                   LAST);
	
	lr_start_transaction("DJ_MC_S02_CC_79_MyAccount_AppLaunch");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_79_MyAccount_AppLaunch;PC=servletcontroller");
	web_url("servletcontroller", 
		"URL={p_Host}/Portal/servletcontroller", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1003.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=DJ_MC_S02_CC_79_MyAccount_AppLaunch;PC=ajaxservletcontroller");
	web_submit_data("ajaxservletcontroller", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1004.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", ENDITEM, 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", ENDITEM, 
		"Name=namespace", "Value=", ENDITEM, 
		"Name=controllername", "Value=servletcontroller", ENDITEM, 
		"Name=SUBSESSIONID", "Value=0", ENDITEM, 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", ENDITEM, 
		LAST);
	
	lr_end_transaction("DJ_MC_S02_CC_79_MyAccount_AppLaunch", LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_80_MyAccount_Enter_Email_Clk_Continue");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_80_MyAccount_Enter_Email_Clk_Continue;PC=ajaxservletcontroller_2");
	web_custom_request("ajaxservletcontroller_2", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1005.inf", 
		"Mode=HTML", 
		"Body=MODE=AJXButtonAction&key=C8B576366733C3B6 FormButton 132&MODE=&{c_pageCode_101}={c_pageCodeValue_101}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400bpNfiPCR%2FAUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd%2FYSZ"
		"cuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXq59FNh3tdjW5mZwvTfjFe7rv8kF7JAwwUMBOSJmr%2F27jDzvR4i8p3w1%2FInDlj2XMVjrlVfBlfW56eziGPj%2BJ"
		"APZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayVKd2Q"
		"ck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw7pxTBTkfaY5kc4kzPEU8M1bqgkAAJ8MaNSYvU0ReYgl9zE0cYalMNuZBL66QRLJJ4kchY9fStvsQ4UzZkwlYcZ9l3dwV8dWkiQcp7l8EoPVZOWa7AmiMkRcWvEsMdd2%2Bko2xE2e5vthnNd6yV0dlGsdDEvpBKJ34P25mbkP9XifPSKB2tDqqunJF3zTPs6HQJaaZKFFjoz9wPpPV0ZSMv4UahKqHTgGouUKjzwNeG6VaeANSSKrfWM9wowANta1ss5E7bjygRzT6fFZfLrdMKQ%3D%3D&IOVATION[1].ERRORMESSAGE=&CONNECT_ACTIVE_TAB=&WORKINGELEMENTS[1].PORTAL[1].LOGINANDREGISTRATION[1].EMAIL={c_Email}&WORKINGELEMENTS[1]"
		".PAPERLESSPROMOTION[1].PROMOTEDEMAILADDRESS=&id=NewLoginContinue&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct | MyAccount Log in and Registration&SUBSESSIONID=0&{c_pageCode_101}={c_pageCodeValue_101}", 
		LAST);	

	lr_end_transaction("DJ_MC_S02_CC_80_MyAccount_Enter_Email_Clk_Continue", LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=ajaxservletcontroller_3");
	web_custom_request("ajaxservletcontroller_3", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1006.inf", 
		"Mode=HTML", 
		"Body=MODE=AJXButtonAction&key=A21C440CCE397724 FormButton 137&MODE=&{c_pageCode_101}={c_pageCodeValue_101}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400bpNfiPCR%2FAUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd%2FYSZ"
		"cuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXq59FNh3tdjW5mZwvTfjFe7rv8kF7JAwwUMBOSJmr%2F27jDzvR4i8p3w1%2FInDlj2XMVjrlVfBlfW56eziGPj%2BJ"
		"APZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayVKd2Q"
		"ck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw7pxTBTkfaY5kc4kzPEU8M1bqgkAAJ8MaNSYvU0ReYgl9zE0cYalMNuZBL66QRLJJ4kchY9fStvsQ4UzZkwlYcZ9l3dwV8dWkiQcp7l8EoPVZOWa7AmiMkRcWvEsMdd2%2Bko2xE2e5vthnNd6yV0dlGsdDEvpBKJ34P25mbkP9XifPSKB2tDqqunJF3zTPs6HQJaaZKFFjoz9wPpPV0ZSMv4UahKqHTgGouUKjzwNeG6VaeANSSKrfWM9wowANta1ss5E7bjygRzT6fFZfLrdMKQ%3D%3D&IOVATION[1].ERRORMESSAGE=&CONNECT_ACTIVE_TAB=&ISLPORTALWEBSERVICES[1].WEBSERVICES[1].ISLPORTALACCOUNTENDPOINTIMPLSERVICE[1].LOGINASYNC[1].INPUT_LOGINASYNC[1]"
		".REQUEST[1].PASSWORD=Testing%4012345&WORKINGELEMENTS[1].PORTAL[1].LOGINANDREGISTRATION[1].REMEMBERME=&id=New_LoginButton&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct | MyAccount Log in and Registration&SUBSESSIONID=0&{c_pageCode_101}={c_pageCodeValue_101}", 
		LAST);
	
	web_reg_find("Text=We are currently retrieving your account details", "SaveCount=Login_Count", LAST);
	
	web_reg_find("Text=Welcome to Hastings Direct", LAST);

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=servletcontroller_2");
	web_submit_data("servletcontroller_2", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1007.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=REDISPLAY", ENDITEM, 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", ENDITEM, 
		"Name=MENUSTATE", "Value=", ENDITEM, 
		"Name=BROWSER_FEATURES", "Value=csstransforms3d:1;", ENDITEM, 
		"Name=SUBSESSIONID", "Value=0", ENDITEM, 
		"Name=DisplayInfo", "Value=", ENDITEM, 
		"Name=DisplayInfo_Platform", "Value=", ENDITEM, 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400bpNfiPCR/AUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd/YSZcuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXq59FNh3tdjW5mZwvTfjFe7rv8kF7JAwwUMBOSJmr/27jDzvR4i8p3w1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzw7pxTBTkfaY5kc4kzPEU8M1bqgkAAJ8MaNSYvU0ReYgl9zE0cYalMNuZBL66QRLJJ4kchY9fStvsQ4UzZkwlYcZ9l3dwV8dWkiQcp7l8EoPVZOWa7AmiMkRcWvEsMdd2+ko2xE2e5vthnNd6yV0dlGsdDEvpBKJ34P25mbkP9XifPSKB2tDqqunJF3zTPs6HQJaaZKFFjoz9wPpPV0ZSMv4UahKqHTgGouUKjzwNeG6VaeANSSKrfWM9wowANta1ss5E7bjygRzT6fFZfLrdMKQ==", ENDITEM, 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", ENDITEM, 
		"Name=CONNECT_ACTIVE_TAB", "Value=", ENDITEM, 
		"Name=ISLPORTALWEBSERVICES[1].WEBSERVICES[1].ISLPORTALACCOUNTENDPOINTIMPLSERVICE[1].LOGINASYNC[1].INPUT_LOGINASYNC[1].REQUEST[1].PASSWORD", "Value=Testing@12345", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=ajaxservletcontroller_4");
	web_submit_data("ajaxservletcontroller_4", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1008.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", ENDITEM, 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", ENDITEM, 
		"Name=namespace", "Value=", ENDITEM, 
		"Name=controllername", "Value=servletcontroller", ENDITEM, 
		"Name=SUBSESSIONID", "Value=0", ENDITEM, 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", ENDITEM, 
		LAST);	
	
	web_reg_find("Text=renewal date", LAST);

	web_reg_save_param("c_pageCode_102",
	                   "LB=if (ajaxBrowserNavigationCheck('&",
	                   "RB==",
	                   LAST);	
	
	web_reg_save_param("c_pageCodeValue_102",
	                   "LB==",
	                   "RB=', '', 'servletcontroller', ''))",
	                   LAST);

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=servletcontroller_3");
	web_submit_data("servletcontroller_3", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1010.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=__8E81E3EF49E5F4C9 FormButton 61", ENDITEM, 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", ENDITEM, 
		"Name=MENUSTATE", "Value=", ENDITEM, 
		"Name=SUBSESSIONID", "Value=0", ENDITEM, 
		"Name=DisplayInfo", "Value=", ENDITEM, 
		"Name=DisplayInfo_Platform", "Value=", ENDITEM, 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd/YSZcuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXOmPSv1ucE7C5mZwvTfjFe7rv8kF7JAwwUMBOSJmr/27am6JvFwaI2Q1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzw1ORCqOFFAugn6gfj6XB1q6mFYaSaoF5oDOS8HIgNudy/+JfmN4aU9jAgjxchyt/cQGRiYdlPOF1PVClKG5StmtGYIj8/4Np4iQcp7l8EoPVZOWa7AmiMkQQy/m2yvWeDGYO24lwRJBxAGY6oI7n7pXrR8vp2gAirxkmFUdb3KY8B3pNo8li6oAXrzoQmZk1Ufb00QxX/nGTSJK1HmnZX9yA1cy1egaweM72zpBqOFjOK6/pdx/gqwnv0vudh8Ybc0DmEs+S/+0iXWXUG3xIjCY0vJ/fD9qkyQR03IzB7Fg8AyEkuqXCKjEVCcuAzYjmBgFEcupM4HapE03YUHvRRww5nBQxbOFpdb91oXvXOXEm9qcTW/Rcf0zIh1h4lvTAhlrdzeNWV2gQ=", ENDITEM, 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=ajaxservletcontroller_5");
	web_submit_data("ajaxservletcontroller_5", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1011.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", ENDITEM, 
		"Name={c_pageCode_102}", "Value={c_pageCodeValue_102}", ENDITEM, 
		"Name=namespace", "Value=", ENDITEM, 
		"Name=controllername", "Value=servletcontroller", ENDITEM, 
		"Name=SUBSESSIONID", "Value=0", ENDITEM, 
		"Name={c_pageCode_102}", "Value={c_pageCodeValue_102}", ENDITEM, 
		LAST);
	
	lr_end_transaction("DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login", LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_82_MyAccount_Clk_Logout");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_82_MyAccount_Clk_Logout;PC=servletcontroller_4");
	web_submit_data("servletcontroller_4", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1012.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=NAVMENU_8AFE80824037C5AA MenuItem 29", ENDITEM, 
		"Name={c_pageCode_102}", "Value={c_pageCodeValue_102}", ENDITEM, 
		"Name=MENUSTATE", "Value=", ENDITEM, 
		"Name=SUBSESSIONID", "Value=0", ENDITEM, 
		"Name=DisplayInfo", "Value=", ENDITEM, 
		"Name=DisplayInfo_Platform", "Value=", ENDITEM, 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd/YSZcuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXt56idEkiiEm5mZwvTfjFe7rv8kF7JAwwUMBOSJmr/273jYztMdsD7A1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzw3kRGv3XFtyPbep8lIljZlO3KqTMlYlOmDVu1gFzonvnfcvU8SobNrt4VYeqWzR4ZZC+7IgXLoIClgYnwtimTqJ0QFhG5UenOiQcp7l8EoPVZOWa7AmiMkQQy/m2yvWeDGYO24lwRJBxAGY6oI7n7pXrR8vp2gAirxkmFUdb3KY8B3pNo8li6oAXrzoQmZk1Ufb00QxX/nGTSJK1HmnZX9yA1cy1egaweM72zpBqOFjOK6/pdx/gqwnv0vudh8Ybc0DmEs+S/+0iXWXUG3xIjCY0vJ/fD9qkyQR03IzB7Fg8AyEkuqXCKjEVCcuAzYjmBgFEcupM4HapE03YUHvRRww5nBQxbOFpdb91oXvXOXEm9qcTW/Rcf0zIh1h4lvTAhlrdzeNWV2gQ=", ENDITEM, 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", ENDITEM, 
		"Name=scheme", "Value=HD", ENDITEM, 
		"Name=source", "Value=Login", ENDITEM, 
		"Name=email", "Value={c_Email}", ENDITEM, 
		"Name=dob", "Value={p_DMYDOB}", ENDITEM, 
		"Name=HD_domain", "Value=nft01.hastingsdirect.com", ENDITEM, 
		"Name=PC_domain", "Value=nft01.peopleschoice.co.uk", ENDITEM, 
		"Name=cid", "Value=", ENDITEM, 
		LAST);	

	web_reg_find("Text=Hastings Direct", LAST);
	
	web_reg_find("Text=Enter your email address to register or log in", LAST);
	
	web_reg_save_param("c_pageCode_103",
	                   "LB=if (ajaxBrowserNavigationCheck('&",
	                   "RB==",
	                   LAST);	
	
	web_reg_save_param("c_pageCodeValue_103",
	                   "LB==",
	                   "RB=', '', 'servletcontroller', ''))",
	                   LAST);

	addDynaTraceHeader("NA=DJ_MC_S02_CC_82_MyAccount_Clk_Logout;PC=servletcontroller_5");
	web_url("servletcontroller_5", 
		"URL={p_Host}/Portal/servletcontroller?action=login&door=open", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1013.inf", 
		"Mode=HTML", 
		LAST);	

	addDynaTraceHeader("NA=DJ_MC_S02_CC_82_MyAccount_Clk_Logout;PC=ajaxservletcontroller_6");
	web_submit_data("ajaxservletcontroller_6", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?action=login&door=open", 
		"Snapshot=t1014.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", ENDITEM, 
		"Name={c_pageCodeValue_103}", "Value={c_pageCodeValue_103}", ENDITEM, 
		"Name=namespace", "Value=", ENDITEM, 
		"Name=controllername", "Value=servletcontroller", ENDITEM, 
		"Name=SUBSESSIONID", "Value=1", ENDITEM, 
		"Name={c_pageCodeValue_103}", "Value={c_pageCodeValue_103}", ENDITEM, 
		LAST);	

	lr_end_transaction("DJ_MC_S02_CC_82_MyAccount_Clk_Logout", LR_AUTO);	
	
	
	return 0;
}