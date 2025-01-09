#ifndef _GLOBALS_H 
#define _GLOBALS_H

//--------------------------------------------------------------------
// Include Files
#include <time.h>

#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

void
random_Generator(char* paramname, int length)
{
	char buffer[32] = "";
	int r, i;
	char c;
	
	srand((unsigned int)time(0));
	
	for (i = 0; i < length; i++) {
		r = rand() % 25 + 65;
		c = (char)r;
		buffer[i] = c;
		
		if (buffer[i] == buffer[i-1]) {
			r = rand() % 25 + 65;
			c = (char)r;
			buffer[i] = c;
		}
	}
	
	lr_save_string(buffer, paramname);
	
	//return 0;
}

char
*string_replace(char *input_string, char *substring_to_be_replaced, char *substitution_string)
{
	// strstr function declaration
	char *strstr(const char *s1, const char *s2); 
	
	// newstring variable the new string to be returned
	// increase the buffer size if needed. Default is 200
	char newstring[200]=""; 
	
	// str is a temporary pointer to aid in creation of newstring;
	// it points at the beginning of each substring that
	// needs to be included in the new string.
	char *str; 
	
	// ptr is a pointer to hold strstr result.
	char *ptr; 
	
	str = input_string;
	// search for substring_to_be_replaced and
	// replace with substitution_string
	
	while((ptr = strstr(input_string, substring_to_be_replaced)) != NULL) {
		input_string = &ptr[strlen(substring_to_be_replaced)];
		ptr[0] = '\0';
		strcat(newstring, str);
		strcat(newstring, substitution_string);
		str = input_string;
	}
	
	// concatenate the rest of the string
	strcat(newstring, input_string);
	
	return newstring;
	
}

void
newNameGen()
{
	int x;
	time_t t;
	struct tm * now;
	
	char strs[74][3] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "Aa", "Ab", "Ac", "Ad", "Ae", "Af", "Ag", "Ah", "Ai", "Aj", "Ak", "Al", "Am", "An", "Ao", "Ap", "Aq", "Ar", "As", "At", "Au"};
	char tmp[128], ampm[] = "AM";
	
	// Sets variables used by localtime 
	_tzset(); 
	time(&t);
	
	// Convert to time structure and adjust for PM if necessary
	now = (struct tm *)localtime(&t);
	
	//if (now->tm_hour > 12) {
	//	strcpy (ampm, "PM");
	//	now->tm_hour -= 12;
	//}
	
	//// Adjust if midnight hour 
	//if (now->tm_hour == 0) 
	//	now->tm_hour = 12;

	//lr_message ("12-hour time: %.8s %s", asctime(now) + 11, ampm);
	
	//// Use strftime to build a customized time string 
	//strftime (tmp, 128, "Today is %A, day %d of %B in the year %Y.", now);
	//lr_message (tmp);
	
	// Get year digits
	strftime(tmp, 128, "%y", now);
	x = atoi(tmp);

	switch(x) {
		case 21:
			lr_save_string("TWON", "nameGenYr");
			break;
		case 22:
			lr_save_string("TWTW", "nameGenYr");
			break;
		case 23:
			lr_save_string("TWTH", "nameGenYr");
			break;
		default:
			lr_save_string("NULL", "nameGenYr");
			break;
	}
	
	// Month
	strftime (tmp, 128, "%b", now);
	lr_save_string(tmp, "nameGenMn");
	
	// day
	strftime (tmp, 128, "%d", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenDy");
	
	// hour
	strftime (tmp, 128, "%H", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenHr");
	
	// min
	strftime (tmp, 128, "%M", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenMi");
	
	// sec
	strftime (tmp, 128, "%S", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenSc");
	
	random_Generator("p_LastName", 5);
	lr_save_string(lr_eval_string("{p_LastName}{nameGenYr}{nameGenMn}{nameGenDy}{nameGenHr}{nameGenMi}{nameGenSc}"), "p_FirstName");
}


void
addDynaTraceHeader(char* header)
{
	char* headerValue;
	int headerValueLength;
	int vuserid, scid;
	char *groupid, *timestamp;
	char* vuserstring=(char*) malloc(sizeof(char) * 10);

	web_save_timestamp_param("TimeStamp", LAST);
	timestamp = lr_eval_string("{TimeStamp}");

	lr_whoami(&vuserid, &groupid, &scid);
	itoa(vuserid,vuserstring,10);

	headerValueLength = strlen(header) + 4 + strlen(vuserstring) + 4 + strlen(timestamp) + 1;
	headerValue = (char*) malloc(sizeof(char) * headerValueLength);
	
	strcpy(headerValue, header);
	strcat(headerValue, ";VU=");
	strcat(headerValue, vuserstring);
	strcat(headerValue, ";ID=");
	strcat(headerValue, timestamp);

	web_add_header("X-dynaTrace", headerValue);
	free(headerValue);
	free(vuserstring);
}


int
diff_days(char * dateString, char * dateFormat)
{
	int year, month, day; 
	struct tm info;
	double delta;
	double days=0;
	
	time_t today;
	
	time(&today);
	
	sscanf(dateString, dateFormat, &year, &month, &day);
	
	info.tm_year = year - 1900;
	info.tm_mon = month - 1;
	info.tm_mday = day;
	//info.tm_hour = 0;
	//info.tm_min = 0;
	//info.tm_sec = 0;
	info.tm_isdst = -1;
	
	mktime(&info);
	//delta = difftime(mktime(&info),today);
	delta = difftime(0,today);
	
	lr_save_int(today, "te1");
	//lr_save_int(mktime(&info), "te2");
	
	if (delta >= 0)  {
		days = difftime(0,today)/ 86400.0 +1;
		//lr_save_int(days, "te2");			
	} else {
		days = difftime(0,today)/ 86400.0;
		//lr_save_int(days, "te4");
	}
	
	//lr_save_int(days, "P_thisTWE");
	
	
	return (int)days;
}

//--------------------------------------------------------------------
// Global Variables

#endif // _GLOBALS_H
