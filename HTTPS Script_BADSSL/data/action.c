Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("badssl.com", 
		"URL=https://badssl.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/front-page-icons/good-white.svg", ENDITEM, 
		"Url=/front-page-icons/bad-white.svg", ENDITEM, 
		"Url=/front-page-icons/dubious-white.svg", ENDITEM, 
		"Url=/front-page-icons/page-white.svg", ENDITEM, 
		"Url=/front-page-icons/bullet-list-white.svg", ENDITEM, 
		"Url=/front-page-icons/external-white.svg", ENDITEM, 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=99", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("CONSENT=YES+shp.gws-20211018-0-RC1.en+FX+057; DOMAIN=accounts.google.com");

	web_add_cookie("LSOLH=_SVI_ELXRsN_s9vQCGAMiP01BRURIZl9xYzNWTlVueEI5YWV0Umgwc0FoekZjVnU2TjNfS3AzdFRVLUFvTUc5dTVlNlg0a1RLNXRueXdSbw_:27335964:d013; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIp5QB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:g5s2vP5Bxo64WjzMNx12r0PUwVyCMxdwJ_gpMXFoDLQWse-lXBxLEAgGL8IJIKx-RMTrksWZNJ2YjxFgbupOfDk9rVMA5g:AkX-Kk1JvHc5UY1W; DOMAIN=accounts.google.com");

	web_add_cookie("OGPC=19027681-1:; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AVQQ_LBZD1C70plGX5FOfuJObjQ7zbQtd-EwysWFdulY7-v36Nyyik5VNQ; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=Qnr12iZxoVf1SdEOql8YsQbtU6_znlgBB-w8Fo6AcpcgbfDzFNmoSMyELoDOjXTOhtmPRhHX8C4HWZtZwYIqX7OwQWTR2gckkIHOdavqKnBL8ZKFa9z8qbplTMBKwyejmM4MzhJCtS6K1YJ7BgVWQIuqDEhWk486s6mMRvY-7Mk; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2022-03-29-09; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:vFjbTsAs2zf65PppyTyJCe3I6SL0bVovdtwAtZ4cFLo&cup2hreq=c5f5570147e7f2ae88a93b231611d3807323c4a56fa4c62c71aecc74f54d074b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"efaidnbmnnnibpcajpcglclefindmkaj\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.9952bcd38dbfdaf1360b459faeede49f5f9be2fa2e07fdf327d2174627e601f2\"}]},\"ping\":{\"ping_freshness\":\"{fe38f9ce-f0f6-4476-a1c0-70accfab7b56}\",\"rd\":5566},\"updatecheck\":{},\"version\":\"15.1.3.10\"},{\"appid\":\""
		"jjkchpdmjjdmalgembblgafllbpcjlei\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"2.10.7.0.2277\"}]},\"ping\":{\"ping_freshness\":\"{e607e39a-538f-4a96-b8e5-072d54bc3acd}\",\"rd\":5566},\"updatecheck\":{},\"version\":\"10.7.0.2277\"},{\"appid\":\"kcehcblfpidimbihdfophhhdejckolgh\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"packages\":{\"package\":[{\""
		"fp\":\"1.5bf96cfc76f102354cc06c7b50ced2164f4888dec5b5dca67c41bef735fe4006\"}]},\"ping\":{\"ping_freshness\":\"{68959b86-866f-439f-bf2b-49656e56ee34}\",\"rd\":5566},\"updatecheck\":{},\"version\":\"121.11102.11325.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\""
		"{61a36578-231c-4938-bf8d-cfbaec2b8ceb}\",\"rd\":5566},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":64,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19042.1586\"},\"prodversion\":\"99.0.4844.84\",\"protocol\":\"3.1\",\"requestid\":\""
		"{15c37e17-8b9f-4b05-9849-64344715eb73}\",\"sessionid\":\"{0550d1a0-ad00-48e3-8971-3dab144bcebe}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.122\"},\"updaterversion\":\"99.0.4844.84\"}}", 
		EXTRARES, 
		"Url=https://badssl.com/front-page-icons/bullet-list.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		"Url=https://badssl.com/front-page-icons/dubious.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		"Url=https://badssl.com/front-page-icons/bad.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		"Url=https://badssl.com/front-page-icons/good.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		"Url=https://badssl.com/front-page-icons/external.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		"Url=https://badssl.com/front-page-icons/dubious-white.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		"Url=https://badssl.com/front-page-icons/good-white.svg", "Referer=https://badssl.com/index.css", ENDITEM, 
		LAST);

	web_url("tls-v1-2.badssl.com:1012", 
		"URL=https://tls-v1-2.badssl.com:1012/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://badssl.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}