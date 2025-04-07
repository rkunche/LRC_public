//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Mon Jul  4 12:34:34 2022
//"                       
//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

function Action()
{
	//Kate Sync Across project
	//Remove Kate project from shared agents.

	//Adding new comment and syncying projects
	web.url(
		{
			name : 'advantageonlineshopping.com', 
			url : 'http://advantageonlineshopping.com/', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : '', 
			snapshot : 't1.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : '/main.min.js'},
				{url : '/services.properties'},
				{url : '/css/images/logo.png'},
				{url : '/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff', referer : 'http://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/images/closeDark.png'},
				{url : '/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff', referer : 'http://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff', referer : 'http://advantageonlineshopping.com/css/main.min.css'},
				{url : 'https://www.google-analytics.com/analytics.js'},
				{url : '/catalog/fetchImage?image_id=speakers'},
				{url : '/catalog/fetchImage?image_id=tablets'},
				{url : '/catalog/fetchImage?image_id=laptops'},
				{url : '/css/images/arrow_right.png', referer : 'http://advantageonlineshopping.com/css/main.min.css'},
				{url : '/catalog/fetchImage?image_id=mice'},
				{url : '/catalog/fetchImage?image_id=headphones'},
				{url : '/css/images/Special-offer.jpg'},
				{url : 'https://www.google-analytics.com/collect?v=1&_v=j96&a=1743053746&t=pageview&_s=2&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=KEBAAEABAAAAAC~&jid=&gjid=&cid=1195912750.1656909195&tid=UA-81334227-1&_gid=2032250741.1656909195&z=1110997822'},
				{url : '/css/images/GoUp.png'},
				{url : '/css/images/facebook.png'},
				{url : '/css/images/linkedin.png'},
				{url : '/css/images/twitter.png'},
				{url : '/css/images/Banner2.jpg'},
				{url : '/css/images/Banner1.jpg'},
				{url : '/css/images/Banner3.jpg'},
				{url : '/css/images/category_banner_1.png'},
				{url : '/catalog/fetchImage?image_id=1600'},
				{url : '/catalog/fetchImage?image_id=1249'},
				{url : '/catalog/fetchImage?image_id=1250'},
				{url : '/catalog/fetchImage?image_id=1700'},
				{url : '/catalog/fetchImage?image_id=1100'},
				{url : '/catalog/fetchImage?image_id=11100'},
				{url : '/catalog/fetchImage?image_id=1300'},
				{url : '/catalog/fetchImage?image_id=1200'},
				{url : '/catalog/fetchImage?image_id=1245'},
				{url : '/catalog/fetchImage?image_id=1400'},
				{url : '/css/images/Popular-item3.jpg'},
				{url : '/css/images/Popular-item2.jpg'},
				{url : '/css/images/Popular-item1.jpg'},
				{url : '/css/images/Filter.png'},
				{url : '/catalog/fetchImage?image_id=1800'},
				{url : '/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff', referer : 'http://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff', referer : 'http://advantageonlineshopping.com/css/main.min.css'},
				{url : 'https://www.google-analytics.com/collect?v=1&_v=j96&a=1743053746&t=pageview&_s=3&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2Fcategory%2FLaptops%2F1&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=KEBAAEABAAAAAC~&jid=&gjid=&cid=1195912750.1656909195&tid=UA-81334227-1&_gid=2032250741.1656909195&z=1802992700'}
			]
		}
	);

	web.setSocketsOption('SSL_VERSION', 'AUTO');
// after sync
	web.url(
		{
			name : 'seed', 
			url : 'https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=103', 
			resource : 0, 
			referer : '', 
			snapshot : 't2.inf', 
			mode : 'HTML'
		}
	);

	web.addCookie('CONSENT=YES+shp.gws-20211018-0-RC1.en+FX+057; DOMAIN=accounts.google.com');

	web.addCookie('LSOLH=_SVI_ELXRsN_s9vQCGAMiP01BRURIZl9xYzNWTlVueEI5YWV0Umgwc0FoekZjVnU2TjNfS3AzdFRVLUFvTUc5dTVlNlg0a1RLNXRueXdSbw_:27335964:d013; DOMAIN=accounts.google.com');

	web.addCookie('SEARCH_SAMESITE=CgQIv5UB; DOMAIN=accounts.google.com');

	web.addCookie('HSID=AH77mjVwvI0S58KKZ; DOMAIN=accounts.google.com');

	web.addCookie('SSID=AdHcn7tbRCm18N9hi; DOMAIN=accounts.google.com');

	web.addCookie('APISID=YBa1z08Wx6IYxHzY/AedOLAiSh8zfP2juX; DOMAIN=accounts.google.com');

	web.addCookie('SAPISID=rlsCXMKkgDqVewK5/AwkezW79_klbvBr0D; DOMAIN=accounts.google.com');

	web.addCookie('__Secure-1PAPISID=rlsCXMKkgDqVewK5/AwkezW79_klbvBr0D; DOMAIN=accounts.google.com');

	web.addCookie('__Secure-3PAPISID=rlsCXMKkgDqVewK5/AwkezW79_klbvBr0D; DOMAIN=accounts.google.com');

	web.addCookie('ACCOUNT_CHOOSER=AFx_qI6NR4irE-07ZUt1sIHG2z-hPs-ZK3DRSTTG5bT8Uqj6Uuxng2Ksok44gIZMVWworx8Ceq5iXUUCxywoGfpmh28vcGToL9OeeCppU_fJYR7Wfkn_U9qZWrU0CgcvzOPxx9ZUwHxknRcF0qpGpXN08y46Ext0KOtSid24LYkB7tkM2Tti_RujkgUgp7_rzTaTLtVKix_8J5_VVkRC47YTavmWg1eJ5tPST7BEJZSRBLGgPpgp08Eh-CP8UNdY_97n3U0UzXtVdZ4cmygWcPzR6kWUbyutafoNsVcUO4Rd7daAU7lEXlFKpdQi7JY5wzhRqQJR3luVihxeLz-n8FqtegGk71MH4DOoZ3g2ys1VBHbya8S7evE; DOMAIN=accounts.google.com');

	web.addCookie('LSID=o.calendar.google.com|o.chat.google.com|o.groups.google.com|o.mail.google.com|o.myaccount.google.com:KggZINamvYkVKL9j8wRR4CiXoJqCFXXfrapfynlUDtgPqbKrOXpZeGoND3yXDWwslfl30g.; DOMAIN=accounts.google.com');

	web.addCookie('__Host-1PLSID=o.calendar.google.com|o.chat.google.com|o.groups.google.com|o.mail.google.com|o.myaccount.google.com:KggZINamvYkVKL9j8wRR4CiXoJqCFXXfrapfynlUDtgPqbKrlpfRdsCaeVn4CFVioobMAQ.; DOMAIN=accounts.google.com');

	web.addCookie('__Host-GAPS=1:tnGSMBLunfbZnafueZTxYmOEleP06vrXgI3p09c4PwWE8-DQOzi-5_3-RgslMW9OGIpa7CxLMz00iSqoPIHaeCdn_w57Dg:QLLmSvdRsNJhrvhd; DOMAIN=accounts.google.com');

	web.addCookie('__Host-3PLSID=o.calendar.google.com|o.chat.google.com|o.groups.google.com|o.mail.google.com|o.myaccount.google.com|s.youtube:KggZINamvYkVKL9j8wRR4CiXoJqCFXXfrapfynlUDtgPqbKrLRHYuR-YTMl3UVWevG5pow.; DOMAIN=accounts.google.com');

	web.addCookie('SID=LggZII7kKZc_RMI2Ps8kHV6dWQhshzRVJvjm6mRyxqUjPw-CdOlbnH7ikhORaKo6WNpCqw.; DOMAIN=accounts.google.com');

	web.addCookie('__Secure-1PSID=LggZII7kKZc_RMI2Ps8kHV6dWQhshzRVJvjm6mRyxqUjPw-COhF2TM2sFXzXX2xDOan3RA.; DOMAIN=accounts.google.com');

	web.addCookie('__Secure-3PSID=LggZII7kKZc_RMI2Ps8kHV6dWQhshzRVJvjm6mRyxqUjPw-CcqZiE8NncJM4ixanGAU9jg.; DOMAIN=accounts.google.com');

	web.addCookie('OGPC=19022539-1:; DOMAIN=accounts.google.com');

	web.addCookie('AEC=AakniGM9ifzE3aJd_zmTexGYmlIFxN6v44vLf70vaZXw6hn23PenolXMuuQ; DOMAIN=accounts.google.com');

	web.addCookie('1P_JAR=2022-07-04-04; DOMAIN=accounts.google.com');

	web.addCookie('SIDCC=AJi4QfEhuXdQnu8OQFIQDTMAXcDfn-mTHbZnJ9vZyp_N4x4q3XZnYRb91jM0vLUw8mNt7xjj55M; DOMAIN=accounts.google.com');

	web.addCookie('__Secure-1PSIDCC=AJi4QfF0hPjiQZScIO1AJzhtRFwjn2rt91kym_wck27VYUZr87PJJlVJ-PEtvsW_ejI8_o4mipQ; DOMAIN=accounts.google.com');

	web.addCookie('__Secure-3PSIDCC=AJi4QfG6QRTL83-EJn7N8Md-aPWGcGI64ezGZuB7VOBZQ5ly-uZhCvyw3xD8D2P8YsIqqXncf9U; DOMAIN=accounts.google.com');

	web.addCookie('NID=511=qDfVqspnog3XbxgGdOgteLUqnIgnIPMfKs7eaMc9Vr_poCbvGK6hacETTNADjN73w6CkasAFGOBTtSR1tlO6dgvOn0W5Mfy9SUvS5M-iY94uED2KOIqJH1mut6vInFJJK02IvqgQg0nFUTeR6MquQ4LlluFWysbzLm0-xEOKQm9nV3oHECVvZHpyEsyubqxK0kmNCq1PN8Uqq9Q693DoE9S2_L8q03-cwwdZx_wAy6mXTMJpfL8; DOMAIN=accounts.google.com');
//uncommented
	web.customRequest(
		{
			name : 'ListAccounts', 
			url : 'https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : '', 
			snapshot : 't3.inf', 
			mode : 'HTML', 
			body : ' '
		}
	);

	// Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.
	web.customRequest(
		{
			name : 'token', 
			url : 'https://www.googleapis.com/oauth2/v4/token', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : '', 
			snapshot : 't4.inf', 
			mode : 'HTML', 
			body : 'client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//09s0j4TxZBI9tCgYIARAAGAkSNwF-L9IrTYbDnzcmufWN6MOvjoX6JDJPv1hOzpSMqHI__NZnakyDh-N_I4d9N_6qYAcbngnTMxQ&scope=https://www.googleapis.com/auth/chromesync'
		}
	);

	web.submitData(
		{
			name : 'register3', 
			action : 'https://android.clients.google.com/c2dm/register3', 
			method : 'POST', 
			recContentType : 'text/plain', 
			referer : '', 
			snapshot : 't5.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'app', value : 'com.google.android.gms'},
				{name : 'device', value : '5617302015433549554'},
				{name : 'sender', value : '745476177629'}
			]
		}
	);

	web.customRequest(
		{
			name : 'json', 
			url : 'https://update.googleapis.com/service/update2/json?cup2key=12:VA9RPjpkut3YDxGB4fleANgNmRNPVv35ZgzTqVaIhW8&cup2hreq=7a573f74fa3af2e82050edc96d624eef82051e5a2672b2a81aa6aeb322398b43', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : '', 
			snapshot : 't6.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"efaidnbmnnnibpcajpcglclefindmkaj\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3270c3472a3d4254b475435e970032bdfca1a0cd27e9d9475a39ab244022bd8a\"}]},\"ping\":{\"ping_freshness\":\"{183029cd-b195-47b1-be09-f01c99d0dcf9}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"' + 
		'15.1.3.15\"},{\"appid\":\"kcehcblfpidimbihdfophhhdejckolgh\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5bf96cfc76f102354cc06c7b50ced2164f4888dec5b5dca67c41bef735fe4006\"}]},\"ping\":{\"ping_freshness\":\"{73cda85b-f8f3-4c1c-9d67-50dbaf8eb40a}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"121.11102.11325.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"' + 
		'enabled\":true,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\"{e44ab021-2b86-4ef0-9f6a-81965870765d}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":64,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"' + 
		'nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19042.1766\"},\"prodversion\":\"103.0.5060.66\",\"protocol\":\"3.1\",\"requestid\":\"{a4d05167-54c7-465e-ba9d-cc7e2968334a}\",\"sessionid\":\"{86e4f508-1a38-418e-a50e-cd9f3a7eaee5}\",\"updaterversion\":\"103.0.5060.66\"}}'
		}
	);

	web.customRequest(
		{
			name : 'command', 
			url : 'https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=UC0f1QxWQMrxeGVssuT2dA%3D%3D', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/vnd.google.octet-stream-compressible', 
			referer : '', 
			snapshot : 't7.inf', 
			contentEncoding : 'gzip', 
			mode : 'HTML', 
			encType : 'application/octet-stream', 
			bodyBinary : '\n\\x1Copsloadrunnercloud@gmail.com\\x10c\\x18\\x02*8\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122!\\x08\\x81\\xF5\\x02\\x12\\x1B \\x00H\\xE8\\xA4\\xB0\\xB7\\x9C0p\\xE8\\xA4\\xB0\\xB7\\x9C0\\x88\\x01\\xCF\\xC5\\xDB\\xF9\\xEB\\xB7\\xC9\\xB4\\x01@\\x00H\\x07\\xC0>\\x01:%z00000181-1829-54e0-0000-000062958b9aR\\x18\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\x9A\\xB7\t\\x10\\x01\\x18\\x00 \\x00Z\\x80\\x01\n~\\x12|Chrome WIN 103.0.5060.66 ' + 
		'(20b1569438a85e631d15e83eb355e3e326e5da6f-refs/branch-heads/5060@{#1066}) channel(stable),gzip(gfe)b\'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00r\\x0Bdj85bfqrPSA'
		}
	);

	web.customRequest(
		{
			name : 'command_2', 
			url : 'https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=UC0f1QxWQMrxeGVssuT2dA%3D%3D', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/vnd.google.octet-stream-compressible', 
			referer : '', 
			snapshot : 't8.inf', 
			contentEncoding : 'gzip', 
			mode : 'HTML', 
			encType : 'application/octet-stream', 
			bodyBinary : '\n\\x1Copsloadrunnercloud@gmail.com\\x10c\\x18\\x02*\\xBC\\x03\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x0120\\x08\\xDE\\xD8\\x12\\x12\\x1A \\x00H\\xA5\\xDF\\xEE\\xBB\\x9C0p\\xA5\\xDF\\xEE\\xBB\\x9C0x\\x00\\x80\\x01\\xA4\\xE0\\xEE\\xBB\\x9C0*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xA1\\x01\\x08\\x9A\\xB7\t\\x12\\x88\\x01\\x12v\\x08\\x02\\x128\n\\x06\n\\x02di\\x10\\x00\\x103\\x1A\\x12\t\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x00' + 
		'!\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x002\\x18\n\\x16\\x08\\x02\\x11X\\xE2(\n\\xF1\\xE2\\x05\\x00\\x18\\x00!\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x128\n\\x06\n\\x02bd\\x10\\x00\\x103\\x1A\\x12\t\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x00!\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x002\\x18\n\\x16\\x08\\x02\\x11X\\xE2(\n\\xF1\\xE2\\x05\\x00\\x18\\x00!\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00 \\x00H\\xE8\\xA4\\xB0\\xB7\\x9C0p\\xE8\\xA4\\xB0\\xB7\\x9C0\"\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01' + 
		'(\\x000\\x008\\x00@\\x002\\x9F\\x01\\x08\\xFC\\xDE$\\x12\\x88\\x01\\x12v\\x08\\x02\\x128\n\\x06\n\\x02st\\x10\\x00\\x103\\x1A\\x12\t\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x00!\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x002\\x18\n\\x16\\x08\\x02\\x11X\\xE2(\n\\xF1\\xE2\\x05\\x00\\x18\\x00!\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x128\n\\x06\n\\x02bd\\x10\\x00\\x103\\x1A\\x12\t\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x00!\\x80\\xAC\\x87\\xF9\\xF0\\xE2\\x05\\x002\\x18\n\\x16\\x08\\x02\\x11X\\xE2(\n' + 
		'\\xF1\\xE2\\x05\\x00\\x18\\x00!\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00 \\x00H\\xE8\\xA4\\xB0\\xB7\\x9C0p\\xE8\\xA4\\xB0\\xB7\\x9C0*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x0021\\x08\\x81\\xF5\\x02\\x12\\x1B \\x00H\\xA5\\xDF\\xEE\\xBB\\x9C0p\\xA5\\xDF\\xEE\\xBB\\x9C0\\x88\\x01\\xCF\\xC5\\xDB\\xF9\\xEB\\xB7\\xC9\\xB4\\x01*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:%z00000181-1829-54e0-0000-000062958b9aR\\x16\n' + 
		'\\x0E\\x12\\x0C8\\x00@\\x00R\\x04\\x08\\x00\\x10\\x01`\\x07\\x10\\x01\\x18\\x00 \\x00Z\\x80\\x01\n~\\x12|Chrome WIN 103.0.5060.66 (20b1569438a85e631d15e83eb355e3e326e5da6f-refs/branch-heads/5060@{#1066}) channel(stable),gzip(gfe)b\'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00r\\x0Bdj85bfqrPSA'
		}
	);

	web.customRequest(
		{
			name : 'command_3', 
			url : 'https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=UC0f1QxWQMrxeGVssuT2dA%3D%3D', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/vnd.google.octet-stream-compressible', 
			referer : '', 
			snapshot : 't9.inf', 
			contentEncoding : 'gzip', 
			mode : 'HTML', 
			encType : 'application/octet-stream', 
			bodyBinary : '\n\\x1Copsloadrunnercloud@gmail.com\\x10c\\x18\\x01\"\\x99\\x08\n\\xD5\\x05\nfZ:ADqtAZxeNJm4IPpXIQ9GAJTnv8fdeHaD/xTEe2N/xu7TE5y63CVusyKeh6DWD1/xetW5cijLtYY8lqeveolVChINPXRyr8IpNQ== \\xD3\\x97\\xB0\\xE4\\xF4\\xD6\\xF8\\x02(\\x8A\\x9A\\xCE\\x94\\x9C00\\xCF\\xB7\\xA5\\xC1\\x910:\\x0EPrecision 5550\\x90\\x01\\x00\\xAA\\x01\\xA0\\x04\\xD2\\xB9K\\x9B\\x04\n\\x18UC0f1QxWQMrxeGVssuT2dA==\\x12\\x0EPrecision 5550\\x18\\x01\"rChrome WIN 103.0.5060.66 ' + 
		'(20b1569438a85e631d15e83eb355e3e326e5da6f-refs/branch-heads/5060@{#1066}) channel(stable)*\r103.0.5060.66:$3804cf6e-ad09-4c66-bb47-5eddc02858e2@\\x8A\\x9A\\xCE\\x94\\x9C0J\\x02\\x08\\x01R\\xFA\\x01\n\\x00\\x12\\x00\\x1A\\x00 \\x04 \\x08B\\x98\\x01eY877W6q5YY:APA91bGFJr-fTrtHlu6fj0UOAk9H5NMfSLS0Uj8ywtbnaRTnYYpeT2uWwtFfbBWwZMHlQ-mf2glWB-b3nN-uoMzKZDJ3WN23hHK95Z5zeMIovh6L0HT3EK4_as4GoB8ak46-v_WOkXE2JA\\x04b44\\xEErM/Z\\x03\\x86C\\xFE*\\xE2\\xE6E\\xC4\\xEB\\xC9\\x80\\x1D\\xB3\\xBC*+v\\x8D)' + 
		'\\x84sf\\xE0\\x80\\xAF\\x0B\\x94\\xBAsk\\xBC\\xBEs\\x81\\xB6y\\x99\t\\xD0\\xCB\\xF7w\\x91Q\n\\x0CnJ\\x80\\xC5Vuq\\xF4uR\\x10\\xCC\\xAF\\xD1\\x0B&\\xDBaH\\x9D98\\xF6;\\xA1\\x0CsZ\\x0EPrecision 5550b\tDell Inc.h\\xA0\\x0Br\\x0C\\x10\\xB1\\xE6\\x02\\x10\\x9A\\xB7\t\\x10\\xFC\\xDE$\\x8A\\x01\\x0F\n\r103.0.5060.66\\xBA\\x01\\x1Cu/R0GVkYfiC1HJFD5pSCihv16bc=\\x12\\x18UC0f1QxWQMrxeGVssuT2dA==\"\"\\x08\\xDE\\xD8\\x12\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xB4\\xD2$\\x08\\xA2\\xBE,' + 
		'\\x08\\x81\\xF5\\x02\\x10\\x00\\x18\\x00 \\x012\\x80\\x02Av;vB8HE\\\\q405e@J|Ay{JVlzuWZBh7sdayM.hdm[P;<)\'9?Y-s\\\\evcPFv7#:u];/u/I>I_5?Tc,.nt6,!PV%1+S=-3Qf0V99fl;&;s;$V1N\"%W[6SrW%/+W\"qMA:g4XlF&q)=@0&> hOJfRi!`t@~FxzJWj]`m[Y34pj\"y2#X\\\\FH:k=/teQ|J0e_y:jn3^>IpL 8Qgc`\\\\LPIUm{k]#Hx,;Yv7tS*Zyr<C4;*<TCspn[]I]4PsdTz0OyuVhZ\"=$W#:%z00000181-1829-54e0-0000-000062958b9aR\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x80\\x01\n~\\x12|Chrome WIN 103.0.5060.66 (20b1569438a85e631d15e83eb355e3e326e5da6f-refs/' + 
		'branch-heads/5060@{#1066}) channel(stable),gzip(gfe)b\'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00r\\x0Bdj85bfqrPSA'
		}
	);

	web.customRequest(
		{
			name : 'v1_GetModels', 
			url : 'https://optimizationguide-pa.googleapis.com/v1_GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/x-protobuf', 
			referer : '', 
			snapshot : 't10.inf', 
			mode : 'HTML', 
			encType : 'application/x-protobuf', 
			bodyBinary : '\nl\\x08\\x08\\x10\\xC1\\xD2\\x8E\\xB4\\x9B0 \t2_\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageEntitiesModelMetadata\\x12\\x02\\x08\\x0B\\x18\\x06*\\x05en-US'
		}
	);

	web.addCookie('userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com');

	web.url(
		{
			name : 'ALL', 
			url : 'http://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't11.inf', 
			mode : 'HTML'
		}
	);

	web.customRequest(
		{
			name : 'GetAccountConfigurationRequest', 
			url : 'http://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'text/xml', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't12.inf', 
			mode : 'HTML', 
			encType : 'text/xml; charset=UTF-8', 
			body : '<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>'
		}
	);

	web.url(
		{
			name : 'categories', 
			url : 'http://advantageonlineshopping.com/catalog/api/v1/categories', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't13.inf', 
			mode : 'HTML'
		}
	);

	web.customRequest(
		{
			name : 'collect', 
			url : 'https://www.google-analytics.com/j/collect?v=1&_v=j96&a=1743053746&t=pageview&_s=1&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=IEBAAEABAAAAAC~&jid=541781372&gjid=984602362&cid=1195912750.1656909195&tid=UA-81334227-1&_gid=2032250741.1656909195&_r=1&_slc=1&z=927377494', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'text/plain', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't14.inf', 
			mode : 'HTML', 
			encType : 'text/plain', 
			extraRes :  [
				{url : 'https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAzLjAuNTA2MC42NhIlCYUHFcrkecL4EgUN541ADhIFDc5BTHoSBQ14bxIZEgUNDxa-KxirqcoB?alt=proto', referer : ''}
			]
		}
	);

	web.addCookie('_ga=GA1.2.1195912750.1656909195; DOMAIN=advantageonlineshopping.com');

	web.addCookie('_gid=GA1.2.2032250741.1656909195; DOMAIN=advantageonlineshopping.com');

	web.addCookie('_gat=1; DOMAIN=advantageonlineshopping.com');

	web.url(
		{
			name : 'search', 
			url : 'http://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't15.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'popularProducts.json', 
			url : 'http://advantageonlineshopping.com/app/tempFiles/popularProducts.json', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't16.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'home-page.html', 
			url : 'http://advantageonlineshopping.com/app/views/home-page.html', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't17.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAzLjAuNTA2MC42NhJICTjttzVXNodrEgUN541ADhIFDc5BTHoSBQ14bxIZEgUNDxa-KxIFDYTmmOASBQ32cphZEgUNx3Y4UBIFDVrGPO0SBQ1yl1wvGKupygE=?alt=proto', referer : ''}
			]
		}
	);

	web.customRequest(
		{
			name : 'json_2', 
			url : 'https://update.googleapis.com/service/update2/json?cup2key=12:NZPbMM-Xq1RfseDCzU9hsZzdpZ5UTq4oWbXylCLesso&cup2hreq=26e706e9b36c1d8651afbada300b7d424b6da1166c11b09a8c23db5e5b3a0295', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : '', 
			snapshot : 't18.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBD\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{c0b7b239-8828-4bdc-85db-30d1d5c73435}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBD\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname' + 
		'\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{915cd301-fb5e-42ae-a55a-30e9304a608b}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"CHBD\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"' + 
		'lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.54844d49d9cfb51f6f9f83c3f50d07cc708b940c41c4e30cd68e246909f136db\"}]},\"ping\":{\"ping_freshness\":\"{b532acfd-f313-49c5-9c96-615851534eeb}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"20220610.454585284\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBD\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"' + 
		'ping\":{\"ping_freshness\":\"{cdc3a37c-d7a1-43f9-9e0a-ac0620db6801}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBD\",\"cohort\":\"1:bm1/15rx:\",\"cohorthint\":\"HundredPercent\",\"cohortname\":\"HundredPercent\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.34ff2e9d7a7ce81c5d760d4b0f4b59a0237dd5db0d1e84ccd5103a30687eac17\"}]},\"ping\":{\"ping_freshness\":\"' + 
		'{95d55f47-613e-4f0c-831d-f626ebc0bcc3}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"9.36.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBD\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0835331e67dfbac434441ed07a3afbbea7671820ce2c0dbc1f351fd20c3f8a05\"}]},\"ping\":{\"ping_freshness\":\"{02c95e48-4f69-46b6-ab98-09954c578bc6}\",\"rd\":5662},\"tag\":\"default\",\"updatecheck\":{}' + 
		',\"version\":\"51\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBD\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{007e814c-7d63-4714-bb90-58cb05342eaa}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBD\",\"cohort' + 
		'\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{e8967f5d-588a-4eec-bad6-f3983993cbac}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBD\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"' + 
		'1.0d3c81d4e4b15dd4ccd7b470fe5f7665c81a3cbc7d707b93205b6851fc273b3e\"}]},\"ping\":{\"ping_freshness\":\"{73059a9e-bf71-4d61-9262-559e03dda8d9}\",\"rd\":5662},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"102.286.200\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"CHBD\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"' + 
		'1.a08c2493974983cdf74f6ec995aeb9931994314cdfe5e3e3876e4af301842e7e\"}]},\"ping\":{\"ping_freshness\":\"{34c84145-7b92-4441-86ef-a3950d6645d1}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"338\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"CHBD\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"' + 
		'ping_freshness\":\"{47d6ad89-ba48-4553-bae0-3f4b2c7c8580}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"CHBD\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c79aca47ef6e04cddcce03abc84ac4049d3cb6d405fd0db67cd7bb101557f427\"}]},\"ping\":{\"ping_freshness\":\"{81700935-3679-49ec-81e1-d222f1a09979}\",\"rd\":5662},\"' + 
		'updatecheck\":{},\"version\":\"2022.6.6.1142\"},{\"appid\":\"dnhnnofocefcglhjeigmkhcgfoaipbaa\",\"brand\":\"CHBD\",\"cohort\":\"1:16bx:\",\"cohorthint\":\"Default/Stable\",\"cohortname\":\"Default/Stable\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.99b9135efef548415566845e4045e9e6ff35201620230887ab684638970f5285\"}]},\"ping\":{\"ping_freshness\":\"{fb8a9a67-7382-4e3e-b711-e6b24717ab6b}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"2022.4.13.0\"},{\"appid\":\"' + 
		'ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBD\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3c878276-a778-43b9-8bc0-571a4e24b8e4}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"CHBD\",\"cohort\":\"1:148r:\",\"' + 
		'cohorthint\":\"desktop_1\",\"cohortname\":\"desktop_1\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ee6f8b3406cbb58430c74d59b4408d8dfdaed9902082bbfe55b0cd2cdd1a18fd\"}]},\"ping\":{\"ping_freshness\":\"{1f16c5c1-46a8-4aa4-8b80-47d1b682fad6}\",\"rd\":5662},\"tag\":\"desktop_1\",\"updatecheck\":{},\"version\":\"29.4\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"CHBD\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true' + 
		',\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{765030ad-f07b-400f-ad81-43b1999306f7}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"CHBD\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"' + 
		'1.29661be65c8fb50d3d4df2fe040a1cc6dd525f50a95850aae6a191301c3de744\"}]},\"ping\":{\"ping_freshness\":\"{338c9f1f-382d-47b6-9c2c-7a35e9463c89}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"CHBD\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":' + 
		'{\"ping_freshness\":\"{5c4c07dd-3c90-4590-896a-2deae5713b2b}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"CHBD\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fe8217f883659c9ec475866990895d0224884ff55a0c52812dffe46650fbd8e9\"}]},\"ping\":{\"ping_freshness\":\"{405ff5b1-064e-4a04-8d72-2b4c36451b40}\",\"rd\":5662},\"' + 
		'updatecheck\":{},\"version\":\"291\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBD\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c666af7b5a6493c125ecbb678f40aed025a67fc6df2203181bccb2d46b442b61\"}]},\"ping\":{\"ping_freshness\":\"{6eaa3fcd-be55-4da9-9c69-fb20ffd46713}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"2833\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand' + 
		'\":\"CHBD\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6a42cc7b1f18602bffe47ec2d913019bb65af62d256923dfcfd976818c06dd49\"}]},\"ping\":{\"ping_freshness\":\"{8a42a71c-55bf-4fa6-81e2-7fd667ed87ea}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"105.0.5158.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBD\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"' + 
		'enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a71610bc33a2fb34f2b25887417f803711abbe83589a6b6d8c8abf756453e9e1\"}]},\"ping\":{\"ping_freshness\":\"{545e141e-6acc-4fe6-9d72-ddcc656a3d33}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"7437\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"CHBD\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"lang\":\"' + 
		'en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{381a6c77-0cc1-459b-b4f3-5592bfc9ba46}\",\"rd\":5662},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":64,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"' + 
		'x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19042.1766\"},\"prodversion\":\"103.0.5060.66\",\"protocol\":\"3.1\",\"requestid\":\"{7b8fc15d-811e-4a0f-bce9-b87f25fe2fe3}\",\"sessionid\":\"{aa91bbfe-c6d0-423f-a2b1-d3f7b2e6c315}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\"updaterversion\":\"103.0.5060.66\"}}'
		}
	);

	lr.thinkTime(4);
	web.url(
		{
			name : 'products', 
			url : 'http://advantageonlineshopping.com/catalog/api/v1/categories/1/products', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't19.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'attributes', 
			url : 'http://advantageonlineshopping.com/catalog/api/v1/categories/attributes', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't20.inf', 
			mode : 'HTML'
		}
	);

 /*	web.url(
		{
			name : 'category-page.html', 
			url : 'http://advantageonlineshopping.com/app/views/category-page.html', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://advantageonlineshopping.com/', 
			snapshot : 't21.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req=' + 
		'Ch0KDGdvb2dsZWNocm9tZRINMTAzLjAuNTA2MC42NhopCAUQARobCg0IBRAGGAEiAzAwMTABEKb8DRoCGAS4EjUVIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCW6goaAhgEL9I_yiIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQlbkLGgIYBF-ElG8iBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgET11C7iIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQgykaAhgEG3MEQiIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ9nEaAhgEJKnuDiIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGATvnpdlIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYBHyN5fwiBCABIAIoARooCAgQARoaCg' + 
		'0ICBAGGAEiAzAwMTABEPsPGgIYBOUFim0iBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEMnAARoCGASZpePFIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARCBxgoaAhgEP0YlZSIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ578GGgIYBMa_srAiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEN8SGgIYBOLbU7AiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw', referer : ''}
			]
		}*/
	);

	return 0;
}

