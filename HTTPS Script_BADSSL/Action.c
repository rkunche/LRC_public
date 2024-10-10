Action()
{
	//Kate docker test non-prod  5.6 101024 10:26
	//Kate docker test non-prod 5.6 autosycn 101024 10:37
	
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