# 1 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "globals.h" 1



 
 
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/time.h" 1

 








# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/stddef.h" 1













typedef unsigned int uintptr_t;








typedef int intptr_t;








typedef int ptrdiff_t;





typedef unsigned short wchar_t;




typedef long time_t;




typedef long clock_t;




typedef wchar_t wint_t;
typedef wchar_t wctype_t;




typedef char *	va_list;



 





# 11 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/time.h" 2




struct tm
{
  int	tm_sec;
  int	tm_min;
  int	tm_hour;
  int	tm_mday;
  int	tm_mon;
  int	tm_year;
  int	tm_wday;
  int	tm_yday;
  int	tm_isdst;
};








char	  *_asctime_r(struct tm *_tblock, void *_p);


clock_t clock(void);
double	  _difftime32(time_t _time2, time_t _time1);
time_t _mktime32(struct tm *_timeptr);
time_t _time32(time_t *_timer);
char	  *asctime(const struct tm *_tblock);
char	  *_ctime32(const time_t *_time);
struct tm *_gmtime32(const time_t *_timer);
struct tm *_localtime32(const time_t *_timer);
unsigned int   strftime(char *_s, size_t _maxsize, char *_fmt, struct tm *_t);



# 6 "globals.h" 2



# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 9 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 10 "globals.h" 2


void
random_Generator(char* paramname, int length)
{
	char buffer[32] = "";
	int r, i;
	char c;
	
	srand((unsigned int)_time32(0));
	
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
	
	 
}

char
*string_replace(char *input_string, char *substring_to_be_replaced, char *substitution_string)
{
	 
	char *strstr(const char *s1, const char *s2); 
	
	 
	 
	char newstring[200]=""; 
	
	 
	 
	 
	char *str; 
	
	 
	char *ptr; 
	
	str = input_string;
	 
	 
	
	while((ptr = strstr(input_string, substring_to_be_replaced)) != 0) {
		input_string = &ptr[strlen(substring_to_be_replaced)];
		ptr[0] = '\0';
		strcat(newstring, str);
		strcat(newstring, substitution_string);
		str = input_string;
	}
	
	 
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
	
	 
	_tzset(); 
	_time32(&t);
	
	 
	now = (struct tm *)_localtime32(&t);
	
	 
	 
	 
	 
	
	 
	 
	 

	 
	
	 
	 
	 
	
	 
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
	
	 
	strftime (tmp, 128, "%b", now);
	lr_save_string(tmp, "nameGenMn");
	
	 
	strftime (tmp, 128, "%d", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenDy");
	
	 
	strftime (tmp, 128, "%H", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenHr");
	
	 
	strftime (tmp, 128, "%M", now);
	x = atoi(tmp);
	lr_save_string(strs[x], "nameGenMi");
	
	 
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

	web_save_timestamp_param("TimeStamp", "LAST");
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
	
	_time32(&today);
	
	sscanf(dateString, dateFormat, &year, &month, &day);
	
	info.tm_year = year - 1900;
	info.tm_mon = month - 1;
	info.tm_mday = day;
	 
	 
	 
	info.tm_isdst = -1;
	
	_mktime32(&info);
	delta = _difftime32(0,today);
	
	if (delta >= 0)  {
		days = _difftime32(0,today)/ 86400.0 +1;
	} else {
		days = _difftime32(0,today)/ 86400.0;
	}
	
	return (int)days;
}

 
 


# 3 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "Action.c" 1
Action()
{
	 
	int plus, nonzeroday, nonzeromonth;
	char month[10], dayTest[10], year[10], startDate[10];
	int day = rand() % 180;
	 
	
	 
	newNameGen();
	
	 
	plus = diff_days(lr_eval_string("{p_DOB}"), "%d-%d-%d");
	
	lr_save_datetime("%Y-%m-%d", 0 + 86400*(day+plus), "p_YMDDOB");
	lr_save_datetime("%d/%m/%Y", 0 + 86400*(day+plus), "p_DMYDOB");
	lr_save_datetime("%Y", 0 + 86400*(day+plus), "p_YDOB");
	lr_save_datetime("%m", 0 + 86400*(day+plus), "p_MDOB");
	lr_save_datetime("%d", 0 + 86400*(day+plus), "p_DDOB");
	
	nonzeromonth = atoi(lr_eval_string("{p_MDOB}"));
	lr_save_int(nonzeromonth, "p_MDOBm");
	
	nonzeroday = atoi(lr_eval_string("{p_DDOB}"));
	lr_save_int(nonzeroday, "p_DDOBm");
	
	 
	lr_save_string(lr_eval_string("{p_FirstName}@hd-no-email-{p_LastName}.com"), "p_Email");
	
	 
	lr_save_string(
		string_replace(
			lr_eval_string("{p_Email}"),
			"@",
			"%40"),
		"p_EmailHTML");
	 
	
	web_cache_cleanup();
	web_cleanup_cookies();
	
	lr_start_transaction("DJ_MC_S02_CC_01_AppLaunch");
	
	 
	web_reg_save_param(
		"c_target",
		"LB=lob=TW90b3JDeWNsZV9FeHQ=",
		"RB=\" class=\"a-btn a-btn--primary",
		"LAST");
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	web_reg_find("Text=Hastings Direct","SaveCount=AppLaunch_Count", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_01_AppLaunch;PC=nft01.hastingsdirect.com");
	web_url("nft01.hastingsdirect.com", 
		"URL={p_Host}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	if(atoi(lr_eval_string("{AppLaunch_Count}")) > 0) {
		lr_end_transaction("DJ_MC_S02_CC_01_AppLaunch", 0);
	} else {
		lr_end_transaction("DJ_MC_S02_CC_01_AppLaunch", 1);
		lr_exit(5, 1);
	}
	
	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_02_Clk_Get_BikeInsuranceQuote");

	web_reg_find("Text=Registration number", "SaveCount=Clk_BikeInsuranceQuote_Count", "LAST");
	
	 
	web_reg_save_param(
		"c_pageCode_01",
		"LB=if (ajaxBrowserNavigationCheck('&",
		"RB==",
		"Notfound=warning",
		"LAST");
	
	 
	web_reg_save_param(
		"c_pageCodeValue_01",
		"LB==",
		"RB=', '', 'servletcontroller', ''))",
		"Notfound=warning",
		"LAST");
	
	 
	web_reg_save_param(
		"c_qNB",
		"LB=quote",
		"RB=buy",
		"Ord=1",
		"NotFound=Warning",
		"Search=Headers",
		"LAST" );
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_02_Clk_Get_BikeInsuranceQuote;PC=servletcontroller");
	web_url("servletcontroller", 
		"URL={p_Host}/Portal/servletcontroller?action=direct&lob=TW90b3JDeWNsZV9FeHQ={c_target}",
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_Host}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_02_Clk_Get_BikeInsuranceQuote;PC=ajaxservletcontroller");
	web_submit_data("ajaxservletcontroller", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_01}", "Value={c_pageCodeValue_01}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_01}", "Value={c_pageCodeValue_01}", "ENDITEM", 
		"LAST");
	
	if(atoi(lr_eval_string("{Clk_BikeInsuranceQuote_Count}")) > 0) {
		lr_end_transaction("DJ_MC_S02_CC_02_Clk_Get_BikeInsuranceQuote", 2);
	} else if ((strcmp(lr_eval_string("{c_qNB}"), "-and-") == 0)){
		lr_fail_trans_with_error("[QnB Journey] Flow End");
		lr_end_transaction("DJ_MC_S02_CC_02_Clk_Get_BikeInsuranceQuote", 2);
		lr_exit(5, 1);
	} else {
		lr_end_transaction("DJ_MC_S02_CC_02_Clk_Get_BikeInsuranceQuote", 1);
		lr_exit(5, 1);
	}
	
	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_04_Enter_Vehicle_Reg_No");

	web_reg_find("Text=Manufacturer", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_04_Enter_Vehicle_Reg_No;PC=ajaxservletcontroller_5");
	web_custom_request("ajaxservletcontroller_5", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C1__AJXQuestionAction&key=991B5474A8CE6E70 Question 153&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&QLR_FOCUS_ELEMENT=C1__C1__SPC_FCCAE97FBEA1B71F402864&id=C1__C1__LookupLicensePlate&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&"
		"SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_04_Enter_Vehicle_Reg_No", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_05_VRN_Clk_Search");

	web_reg_find("Text=Manufacturer", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_05_VRN_Clk_Search;PC=ajaxservletcontroller_6");
	web_custom_request("ajaxservletcontroller_6", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C1__AJXButtonAction&key=C1__C1__991B5474A8CE6E70 FormButton 88&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__C1__VEHICLE[1].VEHICLESPECS[1].TRANSMISSION[1].TRANSMISSION=&id=C1__C1__SearchLicensePlate&namespace=&controllername=servletcontroller&disable=true&title=Hastings "
		"Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_05_VRN_Clk_Search", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_06_Clk_MDLF");

	web_reg_find("Text=Is the bike imported", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_06_Clk_MDLF;PC=ajaxservletcontroller_7");
	web_custom_request("ajaxservletcontroller_7", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C1__AJXButtonAction&key=C1__C1__259F780DC723B365 FormButton 4&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__C1__VEHICLE[1].VEHICLESPECS[1].TRANSMISSION[1].TRANSMISSION=002&id=C1__C1__BUT_DetailsFine&namespace=&controllername=servletcontroller&disable=true&title=Hastings "
		"Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_06_Clk_MDLF", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_07_Clk_No_Imported_Bike");

	web_reg_find("Text=Does the bike have any modifications", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_07_Clk_No_Imported_Bike;PC=ajaxservletcontroller_8");
	web_custom_request("ajaxservletcontroller_8", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__909019550D2C4605 FormButton 448&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&id=C1__BUT_FB55D530D9C28AAB205501&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}="
		"{c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_07_Clk_No_Imported_Bike", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_08_Clk_Vehicle_Modification_No");

	web_reg_find("Text=Does your bike have any additional security markings", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_08_Clk_Vehicle_Modification_No;PC=ajaxservletcontroller_9");
	web_custom_request("ajaxservletcontroller_9", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__06031F7DEC6024D0 FormButton 58&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&id=C1__BUT_06031F7DEC6024D031348&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}="
		"{c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_08_Clk_Vehicle_Modification_No", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_09_Select_No_Immobiliser_Clk_Continue");

	web_reg_find("Text=Is the bike fitted with a tracker", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_09_Select_No_Immobiliser_Clk_Continue;PC=ajaxservletcontroller_10");
	web_custom_request("ajaxservletcontroller_10", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__909019550D2C4605 FormButton 445&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&id=C1__BUT_143C0572AFB19144240070&namespace=&controllername="
		"servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_09_Select_No_Immobiliser_Clk_Continue", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_10_Tracker_Clk_No");

	web_reg_find("Text=When did you buy the bike", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_10_Tracker_Clk_No;PC=ajaxservletcontroller_11");
	web_custom_request("ajaxservletcontroller_11", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__1B0607AAC06299C4 FormButton 632&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&id=C1__BUT_1B0607AAC06299C4429486&namespace=&controllername="
		"servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_10_Tracker_Clk_No", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_11_Select_Bike_Buy_Date");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_11_Select_Bike_Buy_Date;PC=ajaxservletcontroller_12");
	web_custom_request("ajaxservletcontroller_12", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=7F8751502B44A97A Question 147&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&QLR_FOCUS_ELEMENT=C1__QUE_7F8751502B44A97A89651.YEAR&id=C1__QUE_7F8751502B44A97A89651.YEAR&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_11_Select_Bike_Buy_Date", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_12_Bike_Buy_Date_Clk_Continue");

	web_reg_find("Text=How much is the bike worth", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_12_Bike_Buy_Date_Clk_Continue;PC=ajaxservletcontroller_14");
	web_custom_request("ajaxservletcontroller_14", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__06031F7DEC6024D0 FormButton 59&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&id=C1__BUT_06031F7DEC6024D032057&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_12_Bike_Buy_Date_Clk_Continue", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_13_Enter_Bike_Worth_Clk_Go");

	web_reg_find("Text=Where do you keep the bike overnight", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_13_Enter_Bike_Worth_Clk_Go;PC=ajaxservletcontroller_15");
	web_custom_request("ajaxservletcontroller_15", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__06031F7DEC6024D0 FormButton 61&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&id=C1__ConfirmVehicleValue&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_13_Enter_Bike_Worth_Clk_Go", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_14_Select_Vehicle_Kept_Over_Night");

	web_reg_find("Text=Are you the registered keeper and legal owner", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_14_Select_Vehicle_Kept_Over_Night;PC=ajaxservletcontroller_16");
	web_custom_request("ajaxservletcontroller_16", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=3F04C29ED7F45A19 Question 128&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&QLR_FOCUS_ELEMENT=C1__QUE_3F04C29ED7F45A1969660&id="
		"C1__QUE_3F04C29ED7F45A1969660&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_14_Select_Vehicle_Kept_Over_Night", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_15_Select_Legal_Owner");

	web_reg_find("Text=How many vehicles are in your household in total", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_15_Select_Legal_Owner;PC=ajaxservletcontroller_17");
	web_custom_request("ajaxservletcontroller_17", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__EAD2E0BFE9507D16 FormButton 81&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&id=C1__BUT_EAD2E0BFE9507D16139190&namespace=&controllername="
		"servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_15_Select_Legal_Owner", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_16_Enter_Vehicle_House_Hold_Clk_Go");

	web_reg_find("Text=insure or regularly use another vehicle", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_16_Enter_Vehicle_House_Hold_Clk_Go;PC=ajaxservletcontroller_18");
	web_custom_request("ajaxservletcontroller_18", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 100&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&QLR_FOCUS_ELEMENT=C1__NumberOfCars&id=C1__NumberOfCars&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_16_Enter_Vehicle_House_Hold_Clk_Go", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_17_Select_Insure_Use_Another_Vehicle");

	web_reg_find("Text=Some information about you", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_17_Select_Insure_Use_Another_Vehicle;PC=ajaxservletcontroller_19");
	web_custom_request("ajaxservletcontroller_19", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 105&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&QLR_FOCUS_ELEMENT=C1__QUE_06031F7DEC6024D087383&id=C1__QUE_06031F7DEC6024D087383&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_17_Select_Insure_Use_Another_Vehicle", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_18_SomeInfo_Select_Title");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_18_SomeInfo_Select_Title;PC=ajaxservletcontroller_20");
	web_custom_request("ajaxservletcontroller_20", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 106&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME=&C1__WEBSERVICES[1]"
		".DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1]"
		".DATEOFBIRTH.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.MONTH()=&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=&QLR_FOCUS_ELEMENT=C1__QUE_06031F7DEC6024D088863&id=C1__QUE_06031F7DEC6024D088863&namespace=&controllername=servletcontroller&disable="
		"true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_18_SomeInfo_Select_Title", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_19_SomeInfo_Enter_Firstname");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_19_SomeInfo_Enter_Firstname;PC=ajaxservletcontroller_21");
	web_custom_request("ajaxservletcontroller_21", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 107&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1]"
		".DATEOFBIRTH[1].DATEOFBIRTH.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1]"
		".SINCEDATE.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=&QLR_FOCUS_ELEMENT=form1&id=C1__QUE_06031F7DEC6024D088873&namespace=&controllername=servletcontroller&disable=true&"
		"title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_19_SomeInfo_Enter_Firstname", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_20_SomeTnfo_Enter_Surname");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_20_SomeTnfo_Enter_Surname;PC=ajaxservletcontroller_22");
	web_custom_request("ajaxservletcontroller_22", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 108&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1]"
		".DATEOFBIRTH[1].DATEOFBIRTH.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1]"
		".SINCEDATE.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=&QLR_FOCUS_ELEMENT=C1__p4_QUE_06031F7DEC6024D088873&id=C1__QUE_06031F7DEC6024D088881&namespace=&controllername="
		"servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_20_SomeTnfo_Enter_Surname", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_21_SomeInfo_Select_DOB");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_21_SomeInfo_Select_DOB;PC=ajaxservletcontroller_23");
	web_custom_request("ajaxservletcontroller_23", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=963990CB76C787A6 Question 587&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1]"
		".DATEOFBIRTH[1].DATEOFBIRTH.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1]"
		".SINCEDATE.MONTH()=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()=&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()=&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=&QLR_FOCUS_ELEMENT=C1__FMT_EAD2E0BFE9507D16156633&id=C1__QUE_963990CB76C787A6399578.YEAR&namespace=&controllername="
		"servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_21_SomeInfo_Select_DOB", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_22_SomeInfo_Select_Marital_Status");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_22_SomeInfo_Select_Marital_Status;PC=ajaxservletcontroller_24");
	web_custom_request("ajaxservletcontroller_24", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=8C586C4B29CC7794 Question 577&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&QLR_FOCUS_ELEMENT=C1__QUE_8C586C4B29CC7794435375&id=C1__QUE_8C586C4B29CC7794435375&namespace=&"
		"controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_22_SomeInfo_Select_Marital_Status", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_23_SomeInfo_Clk_Continue");

	web_reg_find("Text=Where do you live", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_23_SomeInfo_Clk_Continue;PC=ajaxservletcontroller_25");
	web_custom_request("ajaxservletcontroller_25", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__D83B9D1C7301DE57 FormButton 84&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&id=C1__BUT_AboutYouContinue&namespace=&controllername=servletcontroller&disable=true&title=Hastings"
		" Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_23_SomeInfo_Clk_Continue", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_24_CurrentlyLive_Enter_Postcode");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_24_CurrentlyLive_Enter_Postcode;PC=ajaxservletcontroller_26");
	web_custom_request("ajaxservletcontroller_26", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 113&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&QLR_FOCUS_ELEMENT="
		"C1__SPC_B4060999CE6031BC105583&id=C1__FindPostCode&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_24_CurrentlyLive_Enter_Postcode", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_25_CurrentlyLive_Select_Address");

	web_reg_find("Text=Address line 1", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_25_CurrentlyLive_Select_Address;PC=ajaxservletcontroller_27");
	web_custom_request("ajaxservletcontroller_27", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 114&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&QLR_FOCUS_ELEMENT=C1__QUE_06031F7DEC6024D088998&id=C1__QUE_06031F7DEC6024D088998&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_25_CurrentlyLive_Select_Address", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_26_CurrentlyLive_Clk_Continue");

	web_reg_find("Text=Do you own your own home", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_26_CurrentlyLive_Clk_Continue;PC=ajaxservletcontroller_28");
	web_custom_request("ajaxservletcontroller_28", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__A4CDA9F1A16BCE57 FormButton 88&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=%20&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=%20Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=%20BRIDGWATER&id=C1__BUT_AddressContinue&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_26_CurrentlyLive_Clk_Continue", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_27_Clk_Own_Your_Own_Home");

	web_reg_find("Text=How many years have you lived at this address", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_27_Clk_Own_Your_Own_Home;PC=ajaxservletcontroller_29");
	web_custom_request("ajaxservletcontroller_29", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__7F8751502B44A97A FormButton 82&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&id=C1__BUT_7F8751502B44A97A133603&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_27_Clk_Own_Your_Own_Home", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_28_Select_Years_Lived_Address");

	web_reg_find("Text=Do you have any children under the age of 16", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_28_Select_Years_Lived_Address;PC=ajaxservletcontroller_30");
	web_custom_request("ajaxservletcontroller_30", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=06031F7DEC6024D0 Question 120&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&QLR_FOCUS_ELEMENT=C1__QUE_06031F7DEC6024D089086&id=C1__QUE_06031F7DEC6024D089086&namespace=&"
		"controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_28_Select_Years_Lived_Address", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_29_Select_Children_Under_Age16");

	web_reg_find("Text=Do you keep the bike at this address overnight", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_29_Select_Children_Under_Age16;PC=ajaxservletcontroller_31");
	web_custom_request("ajaxservletcontroller_31", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__06031F7DEC6024D0 FormButton 80&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&id=C1__BUT_06031F7DEC6024D095269&namespace=&controllername=servletcontroller&disable=false&title="
		"Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_29_Select_Children_Under_Age16", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_30_Select_Vehicle_kept_At_Address_Over_Night");

	web_reg_find("Text=your employment status", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_30_Select_Vehicle_kept_At_Address_Over_Night;PC=ajaxservletcontroller_32");
	web_custom_request("ajaxservletcontroller_32", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__06031F7DEC6024D0 FormButton 78&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&id=C1__BUT_06031F7DEC6024D095261&namespace=&controllername=servletcontroller&disable=false&title="
		"Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_30_Select_Vehicle_kept_At_Address_Over_Night", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_31_Select_Employment_Status");

	web_reg_find("Text=your primary occupation", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_31_Select_Employment_Status;PC=ajaxservletcontroller_33");
	web_custom_request("ajaxservletcontroller_33", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXQuestionAction&key=06031F7DEC6024D0 Question 124&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&QLR_FOCUS_ELEMENT="
		"C1__C2__QUE_60BC839902790A6376418&id=C1__C2__QUE_60BC839902790A6376418&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_31_Select_Employment_Status", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_32_Select_Primary_Occuption");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_32_Select_Primary_Occuption;PC=ajaxservletcontroller_34");
	web_submit_data("ajaxservletcontroller_34", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=C1__C2__AJXComplete", "ENDITEM", 
		"Name=id", "Value=C1__C2__MainOccupation", "ENDITEM", 
		"Name=value", "Value=Accountant", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_01}", "Value={c_pageCodeValue_01}", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_32_Select_Primary_Occuption;PC=ajaxservletcontroller_36");
	web_custom_request("ajaxservletcontroller_36", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXValidate&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&namespace=&controllername=servletcontroller&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");
	
	web_reg_find("Text=What industry do you work in", "LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_32_Select_Primary_Occuption;PC=ajaxservletcontroller_37");
	web_custom_request("ajaxservletcontroller_37", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXQuestionAction&key=06031F7DEC6024D0 Question 125&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&QLR_FOCUS_ELEMENT=C1__C2__p4_MainOccupation&=Accountant&id=C1__C2__MainOccupation&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_32_Select_Primary_Occuption", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_33_Enter_Industry_Type");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_33_Enter_Industry_Type;PC=ajaxservletcontroller_38");
	web_submit_data("ajaxservletcontroller_38", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=C1__C2__AJXComplete", "ENDITEM", 
		"Name=id", "Value=C1__C2__MainIndustryType", "ENDITEM", 
		"Name=value", "Value=Accountancy", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_01}", "Value={c_pageCodeValue_01}", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_33_Enter_Industry_Type;PC=ajaxservletcontroller_40");
	web_custom_request("ajaxservletcontroller_40",
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXValidate&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&namespace=&controllername=servletcontroller&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");
	
	web_reg_find("Text=Do you have another job", "LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_33_Enter_Industry_Type;PC=ajaxservletcontroller_41");
	web_custom_request("ajaxservletcontroller_41", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXQuestionAction&key=06031F7DEC6024D0 Question 126&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&QLR_FOCUS_ELEMENT=C1__C2__p4_MainIndustryType&=Accountancy&id=C1__C2__MainIndustryType&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_33_Enter_Industry_Type", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_34_Clk_Another_Job");

	web_reg_find("Text=What type of driving licence do you have", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_34_Clk_Another_Job;PC=ajaxservletcontroller_42");
	web_custom_request("ajaxservletcontroller_42", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXButtonAction&key=C1__C2__05AB123D80110FAD FormButton 91&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&id=C1__C2__BUT_60BC839902790A6376499&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_34_Clk_Another_Job", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_35_Select_Driving_Licence_Type");

	web_reg_find("Text=your driving licence number", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_35_Select_Driving_Licence_Type;PC=ajaxservletcontroller_43");
	web_custom_request("ajaxservletcontroller_43", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=263FD52B9B69BB16 Question 155&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&QLR_FOCUS_ELEMENT=C1__QUE_263FD52B9B69BB1622042&id=C1__QUE_263FD52B9B69BB1622042&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&"
		"{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_35_Select_Driving_Licence_Type", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_36_Your_Driving_Licence_Number_Clk_Continue");

	web_reg_find("Text=How long have you had your driving licence", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_36_Your_Driving_Licence_Number_Clk_Continue;PC=ajaxservletcontroller_44");
	web_custom_request("ajaxservletcontroller_44", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__6A60731FA48A9AAB FormButton 593&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&id=C1__BUT_DLNContinue&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_36_Your_Driving_Licence_Number_Clk_Continue", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_37_Select_Held_Driving_Licence");

	web_reg_find("Text=Do you have any additional riding qualifications", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_37_Select_Held_Driving_Licence;PC=ajaxservletcontroller_45");
	web_custom_request("ajaxservletcontroller_45", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=263FD52B9B69BB16 Question 157&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&QLR_FOCUS_ELEMENT="
		"C1__QUE_263FD52B9B69BB1623951&id=C1__QUE_263FD52B9B69BB1623951&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_37_Select_Held_Driving_Licence", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_38_Riding_Qual_Select_None");

	web_reg_find("Text=Have you had any motor accidents", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_38_Riding_Qual_Select_None;PC=ajaxservletcontroller_46");
	web_custom_request("ajaxservletcontroller_46", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=909019550D2C4605 Question 414&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&QLR_FOCUS_ELEMENT=C1__QUE_88A84F4F5F4BCEE788199&id=C1__QUE_88A84F4F5F4BCEE788199&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_38_Riding_Qual_Select_None", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_39_Clk_Had_Any_Motor_Accidents");

	web_reg_find("Text=bans in the past five years", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_39_Clk_Had_Any_Motor_Accidents;PC=ajaxservletcontroller_47");
	web_custom_request("ajaxservletcontroller_47", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 96&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_263FD52B9B69BB1624054&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_39_Clk_Had_Any_Motor_Accidents", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_40_Clk_Any_Driving_Related_Convictions");

	web_reg_find("Text=Have you ever had insurance declined", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_40_Clk_Any_Driving_Related_Convictions;PC=ajaxservletcontroller_48");
	web_custom_request("ajaxservletcontroller_48", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 98&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_263FD52B9B69BB1624152&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_40_Clk_Any_Driving_Related_Convictions", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_41_Clk_Any_Insurance_Policy_Declined");

	web_reg_find("Text=Do you have any unspent", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_41_Clk_Any_Insurance_Policy_Declined;PC=ajaxservletcontroller_49");
	web_custom_request("ajaxservletcontroller_49", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 104&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_263FD52B9B69BB1658077&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_41_Clk_Any_Insurance_Policy_Declined", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_42_Clk_Unspent_Non_Motoring_Convictions");

	web_reg_find("Text=Would you like to add another rider to the policy", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_42_Clk_Unspent_Non_Motoring_Convictions;PC=ajaxservletcontroller_50");
	web_custom_request("ajaxservletcontroller_50", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__89D74BD946CBD002 FormButton 459&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_89D74BD946CBD002595499&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_42_Clk_Unspent_Non_Motoring_Convictions", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_43_Clk_Add_Any_Additional_Riders");

	web_reg_find("Text=Do you wish to carry a pillion passenger", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_43_Clk_Add_Any_Additional_Riders;PC=ajaxservletcontroller_51");
	web_custom_request("ajaxservletcontroller_51", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 106&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_263FD52B9B69BB1658110&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_43_Clk_Add_Any_Additional_Riders", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_44_Clk_Pullion_Passenger");

	web_reg_find("Text=What kind of cover do you require", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_44_Clk_Pullion_Passenger;PC=ajaxservletcontroller_52");
	web_custom_request("ajaxservletcontroller_52", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__909019550D2C4605 FormButton 452&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_FB55D530D9C28AAB242779&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_44_Clk_Pullion_Passenger", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_45_Clk_Cover_Type_Comprehensive");

	web_reg_find("Text=What will the bike be used for", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_45_Clk_Cover_Type_Comprehensive;PC=ajaxservletcontroller_53");
	web_custom_request("ajaxservletcontroller_53", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__B5E665D02B433586 FormButton 639&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_B5E665D02B433586338279&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_45_Clk_Cover_Type_Comprehensive", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_46_Clk_Bike_Used_Social_Commuting");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_46_Clk_Bike_Used_Social_Commuting;PC=ajaxservletcontroller_54");
	web_custom_request("ajaxservletcontroller_54", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__7BA4648D5FD80F5C FormButton 118&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&id=C1__BUT_7BA4648D5FD80F5C37480&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_46_Clk_Bike_Used_Social_Commuting", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_47_Enter_Miles_Bike_Driven_Year");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_47_Enter_Miles_Bike_Driven_Year;PC=ajaxservletcontroller_55");
	web_custom_request("ajaxservletcontroller_55", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=263FD52B9B69BB16 Question 159&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&QLR_FOCUS_ELEMENT=C1__p1_HEAD_263FD52B9B69BB1661338&id=C1__CarMiles&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_47_Enter_Miles_Bike_Driven_Year", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_48_Miles_Bike_Driven_Year_Clk_Go");

	web_reg_find("Text=How many years of no claims discount do you have", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_48_Miles_Bike_Driven_Year_Clk_Go;PC=ajaxservletcontroller_56");
	web_custom_request("ajaxservletcontroller_56", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 107&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1"
		"].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&id=C1__ConfirmCarMiles&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_48_Miles_Bike_Driven_Year_Clk_Go", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_49_Select_NCD");

	web_reg_find("Text=Do you want a quote to protect your no claims", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_49_Select_NCD;PC=ajaxservletcontroller_57");
	web_custom_request("ajaxservletcontroller_57", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=263FD52B9B69BB16 Question 160&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY"
		"[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&QLR_FOCUS_ELEMENT=C1__QUE_263FD52B9B69BB1681084&id=C1__QUE_263FD52B9B69BB1681084&namespace=&controllername=servletcontroller&disable=false&title=Hastings "
		"Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_49_Select_NCD", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_50_Clk_NCD_Protect");

	web_reg_find("Text=When do you want your cover to start", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_50_Clk_NCD_Protect;PC=ajaxservletcontroller_58");
	web_custom_request("ajaxservletcontroller_58", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 109&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY"
		"[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&id=C1__BUT_263FD52B9B69BB1685011&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&"
		"{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_50_Clk_NCD_Protect", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_51_Select_Policy_To_Start");

	web_reg_find("Text=How would you like to pay for your insurance", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_51_Select_Policy_To_Start;PC=ajaxservletcontroller_59");
	web_custom_request("ajaxservletcontroller_59", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=BED9E6606FF1BDEA Question 181&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0guxQh8GMlIPWYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2Es5y1q%2FZ9jiTszQSGJWqBZl%2"
		"FdLN%2BEPwUR1FkCNqss7eA1bSsPegMSHkVH7urSgM%2BCTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LlLdxMM9pet%2FCm6kADfskE25mZwvTfjFe7rv8kF7JAwwyrRKQ37%2FLMHNvbI1A41KyA1%2FInDlj2XMVjrlVfBlfW56"
		"eziGPj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm"
		"%2BayVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwyWT7ASHBO2S1VwIk59D%2FnSKnjCQnWR6dUf%2FFxlvFg25uFwcsV5wPZeZVgp0KwNPJBtA%2BNpNL1D1W%2FzaW1dAdmMNnyr6xu%2BYucnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkndlVH4z2YVCiOzpvnDLW"
		"t%2BJDckGNI2k8vNKO%2B%2BTHRBbxgiVW7jrHNRj4UH3XuAooMiLtKhR685GlxWpJLVEyRrT5tw9qOC8eZ1mwZr4cvz%2BnYEpykUYVVkZ4fgjVUDiHHxYMJ%2Ft4fTtA%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY"
		"[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&QLR_FOCUS_ELEMENT=C1__QUE_BED9E6606FF1BDEA182030&id=C1__QUE_BED9E6606FF1BDEA182030&"
		"namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_51_Select_Policy_To_Start", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_52_Clk_Anually");

	web_reg_find("Text=Main contact number", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_52_Clk_Anually;PC=ajaxservletcontroller_61");
	web_custom_request("ajaxservletcontroller_61", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__263FD52B9B69BB16 FormButton 111&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&id=C1__BUT_263FD52B9B69BB1695903&namespace=&controllername=servletcontroller&disable="
		"false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_52_Clk_Anually", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_53_Enter_Contact_Number");

	web_reg_find("Text=Mobile number", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_53_Enter_Contact_Number;PC=ajaxservletcontroller_62");
	web_custom_request("ajaxservletcontroller_62", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=7BA4648D5FD80F5C Question 162&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED=09860803766&QLR_FOCUS_ELEMENT="
		"C1__p4_PolHolderMainContact&id=C1__PolHolderMainContact&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_53_Enter_Contact_Number", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_54_Contact_Number_Clk_Continue");

	web_reg_find("Text=your email address", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_54_Contact_Number_Clk_Continue;PC=ajaxservletcontroller_63");
	web_custom_request("ajaxservletcontroller_63", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__E4EB70E15D114B27 FormButton 487&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED=09860803766&C1__WEBSERVICES[1]"
		".DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].PHONENUMBERS[1].PHONENUMBERMOBILE[1].PHONENUMBERMOBILE=&id=C1__BUT_E4EB70E15D114B271639603&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_54_Contact_Number_Clk_Continue", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_55_Enter_Email");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_55_Enter_Email;PC=ajaxservletcontroller_64");
	web_custom_request("ajaxservletcontroller_64", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=49CDEA7B63328BDC Question 593&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED=09860803766&C1__WEBSERVICES[1]"
		".DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].PHONENUMBERS[1].PHONENUMBERMOBILE[1].PHONENUMBERMOBILE=&C1__IN[1].USERDETAILS[1].EMAILADDRESS={p_EmailHTML}&C1__IN[1].USERDETAILS[1].CONFIRMEMAILADDRESS=&QLR_FOCUS_ELEMENT=FMT_C09E1E136C0E2FFB130324&id=C1__QUE_49CDEA7B63328BDC1667664&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}="
		"{c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_55_Enter_Email", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_56_Confirm_Email_Clk_Go");

	web_reg_find("Text=Create password", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_56_Confirm_Email_Clk_Go;PC=ajaxservletcontroller_65");
	web_custom_request("ajaxservletcontroller_65", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__E91479E74A680336 FormButton 2&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED=09860803766&C1__WEBSERVICES[1]"
		".DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].PHONENUMBERS[1].PHONENUMBERMOBILE[1].PHONENUMBERMOBILE=&C1__IN[1].USERDETAILS[1].EMAILADDRESS={p_EmailHTML}&C1__IN[1].USERDETAILS[1].CONFIRMEMAILADDRESS={p_EmailHTML}&id=C1__BUT_EmailGo&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_56_Confirm_Email_Clk_Go", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_57_Enter_Password");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_57_Enter_Password;PC=ajaxservletcontroller_66");
	web_custom_request("ajaxservletcontroller_66", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXQuestionAction&key=7BA4648D5FD80F5C Question 165&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED=09860803766&C1__WEBSERVICES[1]"
		".DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].PHONENUMBERS[1].PHONENUMBERMOBILE[1].PHONENUMBERMOBILE=&C1__IN[1].USERDETAILS[1].EMAILADDRESS={p_EmailHTML}&C1__IN[1].USERDETAILS[1].CONFIRMEMAILADDRESS={p_EmailHTML}&C1__IN[1].USERDETAILS[1].PASSWORD=Testing%4012345&C1__IN[1].USERDETAILS[1].CONFIRMPASSWORD=&QLR_FOCUS_ELEMENT=FMT_C09E1E136C0E2FFB130324&id=C1__QUE_516955FB3D907EA31693257&namespace=&controllername=servletcontroller&"
		"disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_57_Enter_Password", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_58_Confirm_Password_Clk_Go");

	web_reg_find("Text=Your preferences", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_58_Confirm_Password_Clk_Go;PC=ajaxservletcontroller_67");
	web_custom_request("ajaxservletcontroller_67", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__7BA4648D5FD80F5C FormButton 115&MODE=&{c_pageCode_01}={c_pageCodeValue_01}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwgmW%2FIEDI6PzA1%2FInDlj2XMVjrlVfBlfW56eziG"
		"Pj%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2Ba"
		"yVKd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwJVRfntLXYnqhVHULbII%2B7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ%2B0jkLJvfEVN0sU0uDb1RaDjz"
		"GJTHNUvuRyyJX0aGsM6F2LPIG1wC%2BI%2FkQXkiLtKhR685Gp4DA2S9Yjo%2BeoWz5iHt1JBmBGQ%2FHWRNxEzMpAR6u3xPY8MP%2F4pIFcfaz92uQlzUWw%3D%3D&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES=No&C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW=&C1__WORKINGELEMENTS[1].VISIBILITY[1]"
		".DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE={p_VRN}&C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS=None&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()=3&"
		"C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()=2016&C1__WORKINGELEMENTS[1].VEHICLEDATE[1].NOTBOUGHTYET=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER=3500.00&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS=3&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1]"
		".CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD=2&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE=own_another_car&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE=003_Mr&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME={p_FirstName}&"
		"C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME={p_LastName}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON"
		"[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()={p_YDOB}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()={p_DDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE"
		"[1].SINCEDATE.MONTH()={p_MDOBm}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()={p_DDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()={p_MDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()={p_YDOB}&C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS=M&C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE={p_Postcode}&C1__WORKINGELEMENTS[1]"
		".DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT=1&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1=22%20Four%20Forks&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2=&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1]"
		".MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3=Spaxton&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY=BRIDGWATER&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE=8&C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS=E&"
		"C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE=M&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS=15&C1__WEBSERVICES[1].DOMAINMODEL[1]"
		".CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS=None&C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT=8%2C000&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS=8&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED=09860803766&C1__WEBSERVICES[1]"
		".DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].PHONENUMBERS[1].PHONENUMBERMOBILE[1].PHONENUMBERMOBILE=&C1__IN[1].USERDETAILS[1].EMAILADDRESS={p_EmailHTML}&C1__IN[1].USERDETAILS[1].CONFIRMEMAILADDRESS={p_EmailHTML}&C1__IN[1].USERDETAILS[1].PASSWORD=Testing%4012345&C1__IN[1].USERDETAILS[1].CONFIRMPASSWORD=Testing%4012345&id=C1__BUT_PasswordGo&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID="
		"0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_58_Confirm_Password_Clk_Go", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue;PC=ajaxservletcontroller_68");
	web_custom_request("ajaxservletcontroller_68", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXValidate&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION=A01&namespace=&controllername=servletcontroller&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue;PC=ajaxservletcontroller_69");
	web_custom_request("ajaxservletcontroller_69", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C2__AJXValidate&C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE=001&namespace=&controllername=servletcontroller&SUBSESSIONID=0&{c_pageCode_01}={c_pageCodeValue_01}", 
		"LAST");
	
	web_reg_find("Text=Your quote reference","SaveCount=Clk_Qoute_Count", "LAST");

	web_reg_save_param(
		"c_pageCode_02",
		"LB=if (ajaxBrowserNavigationCheck('&",
		"RB==",
		"LAST");	
		
	web_reg_save_param(
		"c_pageCodeValue_02",
		"LB==",
		"RB=', '', 'servletcontroller', ''))",
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue;PC=servletcontroller_3");
	web_submit_data("servletcontroller_3", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=C1____7BA4648D5FD80F5C FormButton 116", "ENDITEM", 
		"Name={c_pageCode_01}", "Value={c_pageCodeValue_01}", "ENDITEM", 
		"Name=MENUSTATE", "Value=", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name=DisplayInfo", "Value=", "ENDITEM", 
		"Name=DisplayInfo_Platform", "Value=", "ENDITEM", 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH+T3opZKZ0Ly1BJ+r1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3+yNhsUSq6LkFHjtpjMKdJYKu8Ebg11YK5mZwvTfjFe7rv8kF7JAww4yw+3YuIFwgmW/IEDI6PzA1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzwJVRfntLXYnqhVHULbII+7GUnhOjgtq2QrX5ZAw5vjDYPJvv2SwKx3LwxJZbnyzwUOnicpJicHwdBvVWwNTLnoUtUuwecJjslcnD7Wc6FV/o/hA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf/ndPJS1UlSIs/QYMqjluNWtoZJajJAXKs6YyKDqukrlI1y9TNk/vsEJprSu9PkubGijj3uEPV/HlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ/yvXE2cIAv0aLiNMaopateJkxSCh9cg8OlMQZMVYAa5VaiPTXtX8aLj5LNpt6zFEN7ZCMf3ESmqYUc1ZFTsxujcXTepANNtZTpirgUVOCktzlyhCVmA9dTXLGnyO5pc8S0lU99UoH2xkkPBozQ+"
		"0jkLJvfEVN0sU0uDb1RaDjzGJTHNUvuRyyJX0aGsM6F2LPIG1wC+I/kQXkiLtKhR685Gp4DA2S9Yjo+eoWz5iHt1JBmBGQ/HWRNxEzMpAR6u3xPY8MP/4pIFcfaz92uQlzUWw==", "ENDITEM", 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONPOSTCODE", "Value=No", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONCARMILES", "Value=No", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].POSTCODEERRORS[1].HASERRORONOVERNIGHTPOSTCODE", "Value=", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].ADDITIONALVEHICLEMODALWINDOW[1].ISTOOPENMODALWINDOW", "Value=", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].GREYCHECKMODALVISIBLE", "Value=", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].VISIBILITY[1].DIRECTVISIBILITY[1].FAILEDCHECKS[1].CUECHECKMODALVISIBLE", "Value=", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].VISIBILITY[1].REFERRALMODALWINDOW[1].REFERRALMODALVISIBLE", "Value=", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].HASHNAME", "Value=bike", "ENDITEM", 
		"Name=C1__C1__VEHICLE[1].LICENSEPLATE[1].LICENSEPLATE", "Value={p_VRN}", "ENDITEM", 
		"Name=C1__OTHERCMPWORKINGELEMENTS[1].BIKE[1].DIRECT[1].SECURITYFEATURESANDMARKINGS[1].IMMOBILISERS", "Value=None", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.MONTH()", "Value=3", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].VEHICLEDATE[1].PURCHASEDATE.YEAR()", "Value=2016", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].CURRENTVALUEFORCUSTOMER[1].CURRENTVALUEFORCUSTOMER", "Value=3500.00", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].OVERNIGHTPARKINGARRANGEMENTS[1].OVERNIGHTPARKINGARRANGEMENTS", "Value=3", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].NUMBEROFCARSONHOUSEHOLD[1].NUMBEROFCARSONHOUSEHOLD", "Value=2", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].OWNINSUREUSEANOTHERVEHICLE[1].OWNINSUREUSEANOTHERVEHICLE", "Value=own_another_car", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].TITLE[1].TITLE", "Value=003_Mr", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].FIRSTNAME[1].FIRSTNAME", "Value={p_FirstName}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].LASTNAME[1].LASTNAME", "Value={p_LastName}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.DAY()", "Value={p_DDOBm}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.MONTH()", "Value={p_MDOBm}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].DATEOFBIRTH[1].DATEOFBIRTH.YEAR()", "Value={p_YDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.DAY()", "Value={p_DDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.MONTH()", "Value={p_MDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].DATEOFBIRTH.YEAR()", "Value={p_YDOB}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.DAY()", "Value={p_DDOBm}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.MONTH()", "Value={p_MDOBm}", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].PERMANENTRESIDENCEUK[1].SINCEDATE[1].SINCEDATE.YEAR()", "Value={p_YDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.DAY()", "Value={p_DDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.MONTH()", "Value={p_MDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].RESIDENTDATE.YEAR()", "Value={p_YDOB}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECT[1].MARITALSTATUS", "Value=M", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].ADDRESSPOSTCODE", "Value={p_Postcode}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].DIRECTJOURNEYPOSTCODE[1].POSTCODELOOKUPRESULTS[1].POSTCODELOOKUPFORMATTEDRESULT", "Value=1", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE1[1].ADDRESSLINE1", "Value=22 Four Forks", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE2[1].ADDRESSLINE2", "Value=", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].ADDRESSLINE3[1].ADDRESSLINE3", "Value=Spaxton", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].POSTADDRESS[1].TOWNORCITY[1].TOWNORCITY", "Value=BRIDGWATER", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].NUMBEROFYEARSLIVINGHERE[1].NUMBEROFYEARSLIVINGHERE", "Value=8", "ENDITEM", 
		"Name=C1__C2__EMPLOYMENTINFORMATION[1].EMPLOYMENTSTATUS[1].EMPLOYMENTSTATUS", "Value=E", "ENDITEM", 
		"Name=C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].OCCUPATION[1].OCCUPATION", "Value=A01", "ENDITEM", 
		"Name=C1__C2__EMPLOYMENTINFORMATION[1].JOBS[1].JOB[1].INDUSTRYTYPE[1].INDUSTRYTYPE", "Value=001", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCETYPE[1].DRIVINGLICENCETYPE", "Value=M", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].DRIVINGLICENCE[1].DRIVINGLICENCEYEARS[1].DRIVINGLICENCEYEARS", "Value=15", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].ADDITIONALRIDINGQUALIFICATIONS[1].ADDITIONALRIDINGQUALIFICATIONS", "Value=None", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].CARMILEAGE[1].INPUT", "Value=8,000", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].NOCLAIMSDISCOUNTNUMBEROFYEARS[1].NOCLAIMSDISCOUNTNUMBEROFYEARS", "Value=8", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST", "Value={p_Policy_start_date}", "ENDITEM", 
		"Name=C1__WORKINGELEMENTS[1].CONTACTS[1].FIRSTCONTACTINSERTED", "Value=09860803766", "ENDITEM", 
		"Name=C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].MOTORPOLICYHOLDER[1].PERSON[1].CONTACTS[1].PHONENUMBERS[1].PHONENUMBERMOBILE[1].PHONENUMBERMOBILE", "Value=", "ENDITEM", 
		"Name=C1__IN[1].USERDETAILS[1].EMAILADDRESS", "Value={p_Email}", "ENDITEM", 
		"Name=C1__IN[1].USERDETAILS[1].CONFIRMEMAILADDRESS", "Value={p_Email}", "ENDITEM", 
		"Name=C1__IN[1].USERDETAILS[1].PASSWORD", "Value=Testing@12345", "ENDITEM", 
		"Name=C1__IN[1].USERDETAILS[1].CONFIRMPASSWORD", "Value=Testing@12345", "ENDITEM", 
		"Name=C1__C3__MARKETINGCONTACTS[1].POST[1].POST", "Value=", "ENDITEM", 
		"Name=C1__C3__MARKETINGCONTACTS[1].TELEPHONE[1].TELEPHONE", "Value=", "ENDITEM", 
		"Name=C1__C3__MARKETINGCONTACTS[1].EMAIL[1].EMAIL", "Value=", "ENDITEM", 
		"Name=C1__C3__MARKETINGCONTACTS[1].SMS[1].SMS", "Value=", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue;PC=ajaxservletcontroller_70");
	web_submit_data("ajaxservletcontroller_70", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_02}", "Value={c_pageCodeValue_02}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_02}", "Value={c_pageCodeValue_02}", "ENDITEM", 
		"LAST");

	if(atoi(lr_eval_string("{Clk_Qoute_Count}")) > 0) {
		lr_end_transaction("DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue", 0);
	} else {
		lr_end_transaction("DJ_MC_S02_CC_59_Clk_IAgree_Lets_Continue", 1);
		lr_exit(5, 1);
	}

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_60_Clk_PayInFull");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_60_Clk_PayInFull;PC=ajaxservletcontroller_71");
	web_custom_request("ajaxservletcontroller_71", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__60BC839902790A63 FormButton 245&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&id=C1__BUT_Car_Annually&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_60_Clk_PayInFull", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_61_Clk_LooksGoodLetsContinue");

	web_reg_find("Text=Upgrade to Hastings Premier", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_61_Clk_LooksGoodLetsContinue;PC=ajaxservletcontroller_72");
	web_custom_request("ajaxservletcontroller_72", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__5C5A318A9211C8A3 FormButton 5&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&id=C1__BUT_Continue&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_61_Clk_LooksGoodLetsContinue", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_62_Clk_KeepYourOrigPol");

	web_reg_find("Text=Add motor legal expenses", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_62_Clk_KeepYourOrigPol;PC=ajaxservletcontroller_73");
	web_custom_request("ajaxservletcontroller_73", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__A09AE8E90DF77710 FormButton 7&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=&id=C1__BUT_NoUpgradeHP&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_62_Clk_KeepYourOrigPol", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_63_LegalCover_Clk_YesPlease");

	web_reg_find("Text=Add enhanced personal accident cover", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_63_LegalCover_Clk_YesPlease;PC=ajaxservletcontroller_74");
	web_custom_request("ajaxservletcontroller_74", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__77659045F2159DCB FormButton 9&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&id=C1__BUT_AddLegal&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_63_LegalCover_Clk_YesPlease", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_64_EnhPerAccCover_Clk_YesPlease");

	web_reg_find("Text=RAC Breakdown cover", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_64_EnhPerAccCover_Clk_YesPlease;PC=ajaxservletcontroller_75");
	web_custom_request("ajaxservletcontroller_75", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__2F93543A9FF27E43 FormButton 27&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&id=C1__BUT_AddPersonal&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_64_EnhPerAccCover_Clk_YesPlease", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_65_BDCNeedAsst_Clk_Yes");

	web_reg_find("Text=Is it essential you have breakdown cover in Europe", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_65_BDCNeedAsst_Clk_Yes;PC=ajaxservletcontroller_76");
	web_custom_request("ajaxservletcontroller_76", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__BC5EBFB772BA7479 FormButton 604&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=&id=C1__BUT_2BE79FE0F2910149448510&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_65_BDCNeedAsst_Clk_Yes", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_66_BDCInEurope_Clk_No");

	web_reg_find("Text=Is breakdown cover essential at your home address", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_66_BDCInEurope_Clk_No;PC=ajaxservletcontroller_77");
	web_custom_request("ajaxservletcontroller_77", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__BC5EBFB772BA7479 FormButton 606&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=F&id=C1__BUT_2BE79FE0F2910149448514&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_66_BDCInEurope_Clk_No", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_67_BDCAtHomeAddr_Clk_Yes");

	web_reg_find("Text=Select your level of breakdown cover", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_67_BDCAtHomeAddr_Clk_Yes;PC=ajaxservletcontroller_78");
	web_custom_request("ajaxservletcontroller_78", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__BC5EBFB772BA7479 FormButton 607&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=F&id=C1__BUT_2BE79FE0F2910149448516&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_67_BDCAtHomeAddr_Clk_Yes", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_68_BDCRdReAtHome_Clk_Yes");

	web_reg_find("Text=At Home Breakdown Cover", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_68_BDCRdReAtHome_Clk_Yes;PC=ajaxservletcontroller_79");
	web_custom_request("ajaxservletcontroller_79", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__71DCC42C4BC1E8DB FormButton 454&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=F&id=C1__HomeSlideButton&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_68_BDCRdReAtHome_Clk_Yes", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_69_BreakdownCover_Clk_YesPlease");

	web_reg_find("Text/IC=Add Helmet", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_69_BreakdownCover_Clk_YesPlease;PC=ajaxservletcontroller_80");
	web_custom_request("ajaxservletcontroller_80", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__4BBA9795B383D39A FormButton 613&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=LQNS&id=C1__BUT_4BBA9795B383D39A645571&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_69_BreakdownCover_Clk_YesPlease", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_70_HelmetLeathers_Clk_YesPlease");

	web_reg_find("Text=You and your vehicle", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_70_HelmetLeathers_Clk_YesPlease;PC=ajaxservletcontroller_81");
	web_custom_request("ajaxservletcontroller_81", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__12920A7600B3374A FormButton 451&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=T&id=C1__BUT_12920A7600B3374A145650&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_70_HelmetLeathers_Clk_YesPlease", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_71_Clk_AgreedLetsPay");

	web_reg_find("Text=You've been upgraded", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_71_Clk_AgreedLetsPay;PC=ajaxservletcontroller_82");
	web_custom_request("ajaxservletcontroller_82", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__215B4840B00F0F14 FormButton 50&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=T&C1__AUTOSELECTOR_TBL_9E5A1AE2A78D944C375111=&C1__AUTOSELECTOR_TBL_2F93543A9FF27E4392719=&C1__C2__MARKETINGCONTACTS[1].POST[1].POST=F&C1__C2__MARKETINGCONTACTS[1].TELEPHONE[1].TELEPHONE=F&C1__C2__MARKETINGCONTACTS[1].EMAIL[1].EMAIL=F&C1__C2__MARKETINGCONTACTS[1].SMS[1].SMS=F&id="
		"C1__BUT_ImportantInfoAnnually&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_71_Clk_AgreedLetsPay", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_72_Clk_Continue_UHP");

	web_reg_find("Text=Make a secure payment", "LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_72_Clk_Continue_UHP;PC=ajaxservletcontroller_83");
	web_custom_request("ajaxservletcontroller_83", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__AJXButtonAction&key=C1__2A013FCE632B2101 FormButton 625&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&C1__IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=N&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=T&C1__AUTOSELECTOR_TBL_9E5A1AE2A78D944C375111=&C1__AUTOSELECTOR_TBL_2F93543A9FF27E4392719=&C1__C2__MARKETINGCONTACTS[1].POST[1].POST=F&C1__C2__MARKETINGCONTACTS[1].TELEPHONE[1].TELEPHONE=F&C1__C2__MARKETINGCONTACTS[1].EMAIL[1].EMAIL=F&C1__C2__MARKETINGCONTACTS[1].SMS[1].SMS=F&id="
		"C1__BUT_2A013FCE632B2101860160&namespace=&controllername=servletcontroller&disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_72_Clk_Continue_UHP", 2);

	lr_think_time(10);
	
	lr_start_transaction("DJ_MC_S02_CC_73_Clk_CreditCard");

	web_reg_save_param(
		"c_orderKey",
		"LB=corporate?OrderKey=",
		"RB=&amp;Ticket=",
		"LAST");
		
	web_reg_save_param(
		"c_ticket",
		"LB=&amp;Ticket=",
		"RB=&amp;source=https",
		"LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_73_Clk_CreditCard;PC=ajaxservletcontroller_84");
	web_custom_request("ajaxservletcontroller_84", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"Body=MODE=C1__C4__AJXButtonAction&key=C1__C4__EB04ADED4DD00701 FormButton 11&MODE=&{c_pageCode_02}={c_pageCodeValue_02}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LtvQip30YO64fc7xbouaLwW5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwi92heoazYFKg1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzw8OjPUAaHPmDwhbwAVZ9m1pEP%2B%2FsokDL3bcIQLAW%2B8wNFFB6%2F%2BTlEjaHV6na0vWcgyrUWvXSVACYSeLQcz%2FRi43KP2a1XIOfOcnD7Wc6FV%2Fo%2FhA15vYr8OIs66xny9NoE6n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqOgcJvFGM%2F%2BDJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyGcc%2FvO8UNuxrRjLkmcdik4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvNYAJNBS8ifGTmOqLA3SnRmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH%2BT3opZKZ0Ly1BJ"
		"%2Br1REgygWMOH4g&IOVATION[1].ERRORMESSAGE=&C1__WORKINGELEMENTS[1].BACKBUTTONDISABLED=&C1__WORKINGELEMENTS[1].HASHNAME=bike&C1__WORKINGELEMENTS[1].TRADINGHASHNAME=&C1__WORKINGELEMENTS[1].PROVIDERNAME=RAC&C1__WORKINGELEMENTS[1].QTB[1].LANDINGPAGE[1].COVERTYPE[1].COVERTYPE=comprehensive&C1__WORKINGELEMENTS[1].POLICYSTARTDATE[1].DATESLIST={p_Policy_start_date}&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].VEHICLECOLLECTION[1].VEHICLE[1].VOLUNTARYEXCESS[1].VOLUNTARYEXCESS=250&"
		"C1__WORKINGELEMENTS[1].VANANDBIKENCDQTB[1].HASNCDPROTECTED=T&C1__WEBSERVICES[1].DOMAINMODEL[1].CARPOLICYCOLLECTION[1].CARPOLICY[1].ISCARRYINGPILLIONPASSENGER[1].ISCARRYINGPILLIONPASSENGER=F&C1__MVT[1].VARIANTTYPE=&C1__WORKINGELEMENTS[1].VISIBILITY[1].UPGRADEVISIBILITY[1].ISHDUPGRADED=Y&C1__WORKINGELEMENTS[1].BREAKDOWNDECISIONQUESTIONS[1].BREAKDOWNQUESTIONSCOMPLETED=T&C1__AUTOSELECTOR_TBL_9E5A1AE2A78D944C375111=&C1__AUTOSELECTOR_TBL_2F93543A9FF27E4392719=&C1__C2__MARKETINGCONTACTS[1].POST[1].POST=F"
		"&C1__C2__MARKETINGCONTACTS[1].TELEPHONE[1].TELEPHONE=F&C1__C2__MARKETINGCONTACTS[1].EMAIL[1].EMAIL=F&C1__C2__MARKETINGCONTACTS[1].SMS[1].SMS=F&id=C1__C4__BUT_CreditCard&namespace=&controllername=servletcontroller&disable=true&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_02}={c_pageCodeValue_02}", 
		"LAST");

	web_reg_find("Text=Card Details", "SaveCount=Clk_CC_Count", "LAST");
	
	web_reg_save_param(
		"c_jsessionid",
		"LB=multicard/process;jsessionid=",
		"RB=\" method=\"post\"",
		"LAST");	
		
	web_reg_save_param(
		"c_csrf",
		"LB=<input type=\"hidden\" name=\"_csrf\" value=\"",
		"RB=\" />",
		"LAST");
		
	web_reg_save_param(
		"c_worldpay_hpp_id",
		"LB=<link rel=\"stylesheet\" href=\"https://payments-test.worldpay.com/resources/static/",
		"RB=/css/combined.min.css\" media=\"all\">",
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_73_Clk_CreditCard;PC=corporate");
	web_url("corporate", 
		"URL=https://payments-test.worldpay.com/app/hpp-iframe/integration/wpg/corporate?OrderKey={c_orderKey}&" 
		"Ticket={c_ticket}&" 
		"country=GB&language=en&"
		"iframeIntegrationId=integrationID&" 
		"iframeHelperURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080%2FPortal%2Fhtml%2Fpayment%2Fhelper.html&" 
		"iframeBaseURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080&successURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080%2FPortal%2Fservletcontroller%3FMODE%3DFORWARD_FROM_PHASE_COMPONENT_MODE%26SUBSESSIONID%3D0%26PAGE%3D1%26status%3DSUCCESS&" 
		"cancelURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080%2FPortal%2Fservletcontroller%3FMODE%3DREDISPLAY%26SUBSESSIONID%3D0%26PAGE%3D1%26status%3DFAILURE&" 
		"failureURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080%2FPortal%2Fservletcontroller%3FMODE%3DREDISPLAY%26SUBSESSIONID%3D0%26PAGE%3D1%26status%3DFAILURE&"
		"pendingURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080%2FPortal%2Fservletcontroller%3FMODE%3DREDISPLAY%26SUBSESSIONID%3D0%26PAGE%3D1%26status%3DFAILURE&" 
		"errorURL=http%3A%2F%2Fad1-nft-ecclus.test.hastings.local%3A9080%2FPortal%2Fservletcontroller%3FMODE%3DREDISPLAY%26SUBSESSIONID%3D0%26PAGE%3D1%26status%3DFAILURE",
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"LAST");

	 
# 2722 "Action.c"
	
	if(atoi(lr_eval_string("{Clk_CC_Count}")) > 0) {
		lr_end_transaction("DJ_MC_S02_CC_73_Clk_CreditCard", 0);
	} else {
		lr_end_transaction("DJ_MC_S02_CC_73_Clk_CreditCard", 1);
		lr_exit(5, 1);
	}

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_74_Enter_CC_CardNumber");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_74_Enter_CC_CardNumber;PC=cardtypes%3Bjsessionid%3D%7Bc_jsessionid%7D");
	web_submit_data("cardtypes;jsessionid={c_jsessionid}", 
		"Action=https://payments-test.worldpay.com/app/hpp/{c_worldpay_hpp_id}/rest/cardtypes;jsessionid={c_jsessionid}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://payments-test.worldpay.com/app/hpp/{c_worldpay_hpp_id}/payment/start;jsessionid={c_jsessionid}", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=cardNumber", "Value=55555555555", "ENDITEM", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_74_Enter_CC_CardNumber", 2);

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_75_Clk_Make_Payment");
	lr_start_transaction("DJ_MC_S02_CC_75_ST01_Make_Payment_WorldPay");

	web_reg_save_param(
		"c_amount",
		"LB=paymentStatus=AUTHORISED&paymentAmount=",
		"RB=&paymentCurrency=GBP&mac=",
		"LAST");
		
	web_reg_save_param(
		"c_mac_value",
		"LB=paymentCurrency=GBP&mac=",
		"RB=\"",
		"LAST");
	
	addDynaTraceHeader("NA=DJ_MC_S02_CC_75_Clk_Make_Payment_DJ_MC_S02_CC_75_ST01_Make_Payment_WorldPay;PC=process%3Bjsessionid%3D%7Bc_jsessionid%7D");
	web_submit_data("process;jsessionid={c_jsessionid}", 
		"Action=https://payments-test.worldpay.com/app/hpp/{c_worldpay_hpp_id}/payment/multicard/process;jsessionid={c_jsessionid}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://payments-test.worldpay.com/app/hpp/{c_worldpay_hpp_id}/payment/start;jsessionid={c_jsessionid}", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=selectedPaymentMethodName", "Value=ECMC", "ENDITEM", 
		"Name=cardNumber", "Value=5555555555554444", "ENDITEM", 
		"Name=cardholderName", "Value=Kittle", "ENDITEM", 
		"Name=expiryDate.expiryMonth", "Value=12", "ENDITEM", 
		"Name=expiryDate.expiryYear", "Value={p_WP_Year}", "ENDITEM", 
		"Name=securityCodeVisibilityType", "Value=MANDATORY", "ENDITEM", 
		"Name=mandatoryForUnknown", "Value=true", "ENDITEM", 
		"Name=securityCode", "Value=555", "ENDITEM", 
		"Name=dfReferenceId", "Value=", "ENDITEM", 
		"Name=_csrf", "Value={c_csrf}", "ENDITEM", 
		"Name=ajax", "Value=true", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("DJ_MC_S02_CC_75_ST01_Make_Payment_WorldPay", 2);
	
	lr_start_transaction("DJ_MC_S02_CC_75_ST02_Make_Payment_EC");
	
	web_reg_find("Text=Please wait while we process your payment...", "LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_75_Clk_Make_Payment_DJ_MC_S02_CC_75_ST02_Make_Payment_EC;PC=servletcontroller_4");
	web_url("servletcontroller_4", 
		"URL={p_Host}/Portal/servletcontroller?MODE=FORWARD_FROM_PHASE_COMPONENT_MODE&SUBSESSIONID=0&PAGE=1&status=SUCCESS&orderKey=HASTINGS%5E{c_orderKey}&paymentStatus=AUTHORISED&paymentAmount={c_amount}&paymentCurrency=GBP&mac={c_mac_value}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=REDISPLAY&SUBSESSIONID=0&PAGE=1", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_75_Clk_Make_Payment_DJ_MC_S02_CC_75_ST02_Make_Payment_EC;PC=ajaxservletcontroller_85");
	web_submit_data("ajaxservletcontroller_85", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=FORWARD_FROM_PHASE_COMPONENT_MODE&SUBSESSIONID=0&PAGE=1&status=SUCCESS&orderKey=HASTINGS%5E{c_orderKey}&paymentStatus=AUTHORISED&paymentAmount={c_amount}&paymentCurrency=GBP&mac={c_mac_value}", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_02}", "Value={c_pageCodeValue_02}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_02}", "Value={c_pageCodeValue_02}", "ENDITEM", 
		"LAST");
	
	web_reg_find("Text=You're almost done...", "SaveCount=Clk_Make_Payment_Count", "LAST");
	web_reg_find("Search=Body","Text=Policy number: <strong>XA", "LAST");
	
	web_reg_save_param(
		"c_pageCode_03",
		"LB=if (ajaxBrowserNavigationCheck('&",
		"RB==",
		"LAST");
		
	web_reg_save_param(
		"c_pageCodeValue_03",
		"LB==",
		"RB=', '', 'servletcontroller', ''))",
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_75_Clk_Make_Payment_DJ_MC_S02_CC_75_ST02_Make_Payment_EC;PC=servletcontroller_5");
	web_submit_data("servletcontroller_5", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller?MODE=FORWARD_FROM_PHASE_COMPONENT_MODE&SUBSESSIONID=0&PAGE=1&status=SUCCESS&orderKey=HASTINGS%5E{c_orderKey}&paymentStatus=AUTHORISED&paymentAmount={c_amount}&paymentCurrency=GBP&mac={c_mac_value}", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=__CC02B1A846B20095 FormButton 64", "ENDITEM", 
		"Name={c_pageCode_02}", "Value={c_pageCodeValue_02}", "ENDITEM", 
		"Name=MENUSTATE", "Value=", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name=DisplayInfo", "Value=", "ENDITEM", 
		"Name=DisplayInfo_Platform", "Value=", "ENDITEM", 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH+T3opZKZ0Ly1BJ+r1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3+yNhsUSq6LrYUguLQnMI6N9gkEi3Re2O5mZwvTfjFe7rv8kF7JAww4yw+3YuIFwjjvVbePUTJSA1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzwPVDf0XaAoUXaO9Zj6V4hgkPM5ikWJmPKaTy44dfbjaLvSOgM27qo2hSKzq/VGoOQ3eFSWYMFduZiIkT8sdWHfur49PnENHfH6n3BcOhMpRDkUzf/ndPJS1UlSIs/QYMqL2+QC/5J0JPJAXKs6YyKDqukrlI1y9TNk/vsEJprSu9PkubGijj3uEPV/HlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ/yH/esQe90Nh9KfJiv4SBYnoBcI5gdL+vZ2bVl8qIesf4Pm0ur5NgvJvFVqOKNf+iUGtR/nBJhlqXYUUERE/Bnynnw+vN0OfeBvA3+NHw2ae2nj9ncG4B0wj2wnR6JElaWhSDX5nE5VYaVT31SgfbGSQ8GjND7SOQsm98RU3SxTS4NvVFoOPMYlMc1S+5HLIlfRoawzoXYs8i2YQ6VDKamiQ==", "ENDITEM", 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_75_Clk_Make_Payment_DJ_MC_S02_CC_75_ST02_Make_Payment_EC;PC=ajaxservletcontroller_86");
	web_submit_data("ajaxservletcontroller_86", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_03}", "Value={c_pageCodeValue_03}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_03}", "Value={c_pageCodeValue_03}", "ENDITEM", 
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_75_ST02_Make_Payment_EC", 2);
	
	if(atoi(lr_eval_string("{Clk_Make_Payment_Count}")) > 0) {
		lr_end_transaction("DJ_MC_S02_CC_75_Clk_Make_Payment", 0);
	} else {
		lr_end_transaction("DJ_MC_S02_CC_75_Clk_Make_Payment", 1);
		lr_exit(5, 1);
	}

	lr_think_time(10);

	lr_start_transaction("DJ_MC_S02_CC_76_Clk_Goto_My_Account");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_76_Clk_Goto_My_Account;PC=ajaxservletcontroller_87");
	web_custom_request("ajaxservletcontroller_87", 
		"URL={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"Body=MODE=AJXButtonAction&key=8EADEAA1FE5050E8 FormButton 176&MODE=&{c_pageCode_03}={c_pageCodeValue_03}&MENUSTATE=&IOVATION[1].IOVATIONBLACKBOX="
		"0400nyhffR%2BvPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj%2FQUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs%2F%2FBPd61qfOlyiCO4xxpB8Ae0mh%2FOSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK%2BXsEKtAFZAbXMb4S4mJUL%2BoutWlmFacj%2BbKztDnegsLOz7UUq%2B0iYIBJMCrQBWQG1zG8eRPpa%2FyGqkCT3lLwd44pW%2Bzhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR%2FQ8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTW"
		"t4mcaYyjVH%2BT3opZKZ0Ly1BJ%2Br1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN%2F%2BYxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I%2BvS3zO1UWjmU01eKRQwT6oP8G%2FKuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV%2BF3um15cX4uunC8EA%2BOYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX%2BLOGJaRFddJ46H2W0dl9AiquzxZVp0p5%2B88QU69T3MV6YiJ%2F%2BIO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3%2ByNhsUSq6LrYUguLQnMI6cT8hwyRxTNm5mZwvTfjFe7rv8kF7JAww4yw%2B3YuIFwh343EzahYPAA1%2FInDlj2XMVjrlVfBlfW56eziGPj"
		"%2BJAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg%2BPX4AfOPjzqyODId%2BTYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN%2Fhz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ%2BFIVehcb0PGva7W%2BjZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV%2FTsCtPkdogeQK%2BzPTxOH0WU0cMy%2FZGi%2FOZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN%2BR0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x%2FFdXzvUgu5XZQYU6mg%2BOYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV%2FOlqWhTCsvxK5j9mEm%2BayV"
		"Kd2Qck8xCy6pr7qiYs%2Bk1FY42UpAUwVYh81ZndP3U%2BQhmFnPAJmrzwSaB1RcWDn8BI5ksLVje9INP8htJd2hFxEB0BORPGlwJk%2FpXAvlkCwG68VMCrSceJw0tl3LAn8TaVAakx31ttHv5Xpc0K88u56n3BcOhMpRDkUzf%2FndPJS1UlSIs%2FQYMqFEzXc8QHFMjJAXKs6YyKDqukrlI1y9TNk%2FvsEJprSu9PkubGijj3uEPV%2FHlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ%2FyH%2FesQe90Nh93QxTfxCFnXE79EDHNb7dvshjSp1wJfUS8zonvYUaWXx9Ot4aAO%2Fi%2F2bVl8qIesf4Pm0ur5NgvJmEzvEFEid0T3Qbkjz%2BG6fa4BjtqbrXJSourFejtO5XQfE74NVK3lw6xF8LhFfZaVRU5ctHT5UEV6RgK14IDMo0x0SZKLh8eSRDt9IuPelGoZ0lSLx2Z"
		"qP82sXOKNpA%2F%2FBQeWz5L3rEd%2Bv9aXjlzRIht1pReyzlz%2FBPreOgD1Bv3rwWnbFcuXzp7TmhU1rr6kh2ImG2XRU4sVlUJxmcfE6MF4y%2FElA6V9VzsZHmLx6oBNKkmMLJ9HxPO%2Fnd1oXQd28WS%2FsDARrXGjyix01dQKm6em%2FluqJ2pe6qcXF1zhTpDvSxwuSeyekzaTfKHWbSXJ2tedlcVumiBcD6T1dGUjL%2BQcEoLF%2BZfpCHYchqL6VJLpBZNsIfDOkMckSqE6F4OpFROel2d2TqUf8Oa6j0zE53jK9GFecOQi4f0eT%2B48%2BPpQE%2BzIZhDcvcmXRGG%2Ba0Ltk9uABEh0wG7RDDyqnBefMvnAtjzJE11ow%3D%3D&IOVATION[1].ERRORMESSAGE=&id=NBThankYouGoToMyAccount&namespace=&controllername=servletcontroller&"
		"disable=false&title=Hastings Direct&SUBSESSIONID=0&{c_pageCode_03}={c_pageCodeValue_03}", 
		"LAST");
	
	web_reg_find("Text=We've sent you an email", "LAST");
	web_reg_find("Text=To check we've got the right email address for you", "LAST");
	
	web_reg_save_param(
		"c_Email",
		"LB=we've sent an email to:\n<br><br>\n<b>",
		"RB=</b>\n<br><br>\nPlease check your inbox",
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_76_Clk_Goto_My_Account;PC=servletcontroller_6");
	web_submit_data("servletcontroller_6", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=REDISPLAY", "ENDITEM", 
		"Name={c_pageCode_03}", "Value={c_pageCodeValue_03}", "ENDITEM", 
		"Name=MENUSTATE", "Value=", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name=DisplayInfo", "Value=", "ENDITEM", 
		"Name=DisplayInfo_Platform", "Value=", "ENDITEM", 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gQTquLv5CU0OYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2EmZzv44SgyygpONKIJTQr0klnTWt4mcaYyjVH+T3opZKZ0Ly1BJ+r1REgygWMOH4gTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL3+yNhsUSq6LrYUguLQnMI6cT8hwyRxTNm5mZwvTfjFe7rv8kF7JAww4yw+3YuIFwh343EzahYPAA1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzwSaB1RcWDn8BI5ksLVje9INP8htJd2hFxEB0BORPGlwJk/pXAvlkCwG68VMCrSceJw0tl3LAn8TaVAakx31ttHv5Xpc0K88u56n3BcOhMpRDkUzf/ndPJS1UlSIs/QYMqFEzXc8QHFMjJAXKs6YyKDqukrlI1y9TNk/vsEJprSu9PkubGijj3uEPV/HlHpkZfY0Tqy27WcTaJqlf4YUVob4OU7MCVaJ/yH/esQe90Nh93QxTfxCFnXE79EDHNb7dvshjSp1wJfUS8zonvYUaWXx9Ot4aAO/i/2bVl8qIesf4Pm0ur5NgvJmEzvEFEid0T3Qbkjz+G6fa4BjtqbrXJSourFejtO5XQfE74NVK3lw6xF8LhFfZaVRU5ctHT5UEV6RgK14IDMo0x0SZKLh8eSRDt9IuPelGoZ0lSLx2ZqP82sXOKNpA//"
		"BQeWz5L3rEd+v9aXjlzRIht1pReyzlz/BPreOgD1Bv3rwWnbFcuXzp7TmhU1rr6kh2ImG2XRU4sVlUJxmcfE6MF4y/ElA6V9VzsZHmLx6oBNKkmMLJ9HxPO/nd1oXQd28WS/sDARrXGjyix01dQKm6em/luqJ2pe6qcXF1zhTpDvSxwuSeyekzaTfKHWbSXJ2tedlcVumiBcD6T1dGUjL+QcEoLF+ZfpCHYchqL6VJLpBZNsIfDOkMckSqE6F4OpFROel2d2TqUf8Oa6j0zE53jK9GFecOQi4f0eT+48+PpQE+zIZhDcvcmXRGG+a0Ltk9uABEh0wG7RDDyqnBefMvnAtjzJE11ow==", "ENDITEM", 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_76_Clk_Goto_My_Account;PC=ajaxservletcontroller_88");
	web_submit_data("ajaxservletcontroller_88", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_03}", "Value={c_pageCodeValue_03}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_03}", "Value={c_pageCodeValue_03}", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("DJ_MC_S02_CC_76_Clk_Goto_My_Account", 2);
	
	lr_think_time(10);
	
	return 0;
}
# 5 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "Registration.c" 1
Registration()
{
	
	web_reg_save_param("c_userId",
	                   "LB={\"userId\":\"",
	                   "RB=\",\"passwordToken",
	                   "LAST");

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
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_77_Registration_GetSetPasswordToken", 2);
	
	lr_think_time(10);
		
	web_reg_find("Text=and brand HD was verified", "LAST");

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
		"LAST");

	lr_end_transaction("DJ_MC_S02_CC_78_Registration_VerifyEmail", 2);
	
	lr_think_time(10);	
	
	
	return 0;
}
# 6 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "MyAccount.c" 1
MyAccount()
{
	web_cache_cleanup();
	web_cleanup_cookies();
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");	
	
	web_reg_find("Text=Hastings Direct", "LAST");
	
	web_reg_find("Text=Enter your email address to register or log in", "LAST");
	
	web_reg_save_param("c_pageCode_101",
	                   "LB=if (ajaxBrowserNavigationCheck('&",
	                   "RB==",
	                   "LAST");	
	
	web_reg_save_param("c_pageCodeValue_101",
	                   "LB==",
	                   "RB=', '', 'servletcontroller', ''))",
	                   "LAST");
	
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
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_79_MyAccount_AppLaunch;PC=ajaxservletcontroller");
	web_submit_data("ajaxservletcontroller", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1004.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("DJ_MC_S02_CC_79_MyAccount_AppLaunch", 2);

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
		"LAST");	

	lr_end_transaction("DJ_MC_S02_CC_80_MyAccount_Enter_Email_Clk_Continue", 2);

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
		"LAST");
	
	web_reg_find("Text=We are currently retrieving your account details", "SaveCount=Login_Count", "LAST");
	
	web_reg_find("Text=Welcome to Hastings Direct", "LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=servletcontroller_2");
	web_submit_data("servletcontroller_2", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1007.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=REDISPLAY", "ENDITEM", 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", "ENDITEM", 
		"Name=MENUSTATE", "Value=", "ENDITEM", 
		"Name=BROWSER_FEATURES", "Value=csstransforms3d:1;", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name=DisplayInfo", "Value=", "ENDITEM", 
		"Name=DisplayInfo_Platform", "Value=", "ENDITEM", 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400bpNfiPCR/AUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd/YSZcuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXq59FNh3tdjW5mZwvTfjFe7rv8kF7JAwwUMBOSJmr/27jDzvR4i8p3w1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzw7pxTBTkfaY5kc4kzPEU8M1bqgkAAJ8MaNSYvU0ReYgl9zE0cYalMNuZBL66QRLJJ4kchY9fStvsQ4UzZkwlYcZ9l3dwV8dWkiQcp7l8EoPVZOWa7AmiMkRcWvEsMdd2+ko2xE2e5vthnNd6yV0dlGsdDEvpBKJ34P25mbkP9XifPSKB2tDqqunJF3zTPs6HQJaaZKFFjoz9wPpPV0ZSMv4UahKqHTgGouUKjzwNeG6VaeANSSKrfWM9wowANta1ss5E7bjygRzT6fFZfLrdMKQ==", "ENDITEM", 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", "ENDITEM", 
		"Name=CONNECT_ACTIVE_TAB", "Value=", "ENDITEM", 
		"Name=ISLPORTALWEBSERVICES[1].WEBSERVICES[1].ISLPORTALACCOUNTENDPOINTIMPLSERVICE[1].LOGINASYNC[1].INPUT_LOGINASYNC[1].REQUEST[1].PASSWORD", "Value=Testing@12345", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=ajaxservletcontroller_4");
	web_submit_data("ajaxservletcontroller_4", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1008.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", "ENDITEM", 
		"LAST");	
	
	web_reg_find("Text=renewal date", "LAST");

	web_reg_save_param("c_pageCode_102",
	                   "LB=if (ajaxBrowserNavigationCheck('&",
	                   "RB==",
	                   "LAST");	
	
	web_reg_save_param("c_pageCodeValue_102",
	                   "LB==",
	                   "RB=', '', 'servletcontroller', ''))",
	                   "LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=servletcontroller_3");
	web_submit_data("servletcontroller_3", 
		"Action={p_Host}/Portal/servletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1010.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=__8E81E3EF49E5F4C9 FormButton 61", "ENDITEM", 
		"Name={c_pageCode_101}", "Value={c_pageCodeValue_101}", "ENDITEM", 
		"Name=MENUSTATE", "Value=", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name=DisplayInfo", "Value=", "ENDITEM", 
		"Name=DisplayInfo_Platform", "Value=", "ENDITEM", 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd/YSZcuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXOmPSv1ucE7C5mZwvTfjFe7rv8kF7JAwwUMBOSJmr/27am6JvFwaI2Q1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzw1ORCqOFFAugn6gfj6XB1q6mFYaSaoF5oDOS8HIgNudy/+JfmN4aU9jAgjxchyt/cQGRiYdlPOF1PVClKG5StmtGYIj8/4Np4iQcp7l8EoPVZOWa7AmiMkQQy/m2yvWeDGYO24lwRJBxAGY6oI7n7pXrR8vp2gAirxkmFUdb3KY8B3pNo8li6oAXrzoQmZk1Ufb00QxX/nGTSJK1HmnZX9yA1cy1egaweM72zpBqOFjOK6/pdx/gqwnv0vudh8Ybc0DmEs+S/+0iXWXUG3xIjCY0vJ/fD9qkyQR03IzB7Fg8AyEkuqXCKjEVCcuAzYjmBgFEcupM4HapE03YUHvRRww5nBQxbOFpdb91oXvXOXEm9qcTW/Rcf0zIh1h4lvTAhlrdzeNWV2gQ=", "ENDITEM", 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login;PC=ajaxservletcontroller_5");
	web_submit_data("ajaxservletcontroller_5", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1011.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCode_102}", "Value={c_pageCodeValue_102}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name={c_pageCode_102}", "Value={c_pageCodeValue_102}", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("DJ_MC_S02_CC_81_MyAccount_Enter_Password_Clk_Login", 2);

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
		"ITEMDATA", 
		"Name=MODE", "Value=NAVMENU_8AFE80824037C5AA MenuItem 29", "ENDITEM", 
		"Name={c_pageCode_102}", "Value={c_pageCodeValue_102}", "ENDITEM", 
		"Name=MENUSTATE", "Value=", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=0", "ENDITEM", 
		"Name=DisplayInfo", "Value=", "ENDITEM", 
		"Name=DisplayInfo_Platform", "Value=", "ENDITEM", 
		"Name=IOVATION[1].IOVATIONBLACKBOX", "Value=0400nyhffR+vPCUNf94lis1ztiPNP76z447sYjYOUc9PCUsHqk4p1vQ3NFwK6BgmikqIBCX4pOoTq3vWsuegsz8vj/QUFssaniOVLXo2pPf0i5kp6F6y3FFYQrrfTYRIQqMOVqWthzeyqHQjYTSjyDe6CyYg2wn1WUxgZNfbcjbO4PMRieADP31pI6gF1WPMlk0gO0SK5bmiUzWYY4NdZuSstIs//BPd61qfOlyiCO4xxpB8Ae0mh/OSZsgH1DGeSyhaZtkhhHBmdiJNcO5JXVePGSnYu2EqH5k9WNilydK+XsEKtAFZAbXMb4S4mJUL+outWlmFacj+bKztDnegsLOz7UUq+0iYIBJMCrQBWQG1zG8eRPpa/yGqkCT3lLwd44pW+zhbw125IML8WKLhTiHrWLKTGWxeH0qCysxgZfLqQahC09gR/"
		"Q8fGU590nH6wX2Efrzxlo7BjV4O2FhjeOfd/YSZcuspEW7Xm1UIzlI58I5GIRBLo2g2GT7JW1qcDYXNTGC8d084eYyKCTDLlwSlmoW82cN/+YxYm2a9xBQi2PAMB2VdwqkGCvjtmwQK0uWOItjVWNpQTjhCcvU5ohbUH7I+vS3zO1UWjmU01eKRQwT6oP8G/KuTzg6TMVfop73TAKe7MjBYK3z45h40ZgWfxsEQPbI34e0fLOlkPjwLyqCWoTV+F3um15cX4uunC8EA+OYeNGYFn8b6FG6w5AJFEQF7dmSFCZofMWenDYtPNX+LOGJaRFddJ46H2W0dl9AiquzxZVp0p5+88QU69T3MV6YiJ/+IO4wJwtQHr2DgT3vFL0ZMZD89caLarX2VrmkVMGfGDfMJjL2AiZLB562fNWcGwpRnJpCXt56idEkiiEm5mZwvTfjFe7rv8kF7JAwwUMBOSJmr/273jYztMdsD7A1/"
		"InDlj2XMVjrlVfBlfW56eziGPj+JAPZpuSCh7LMWtff6RuFZ2ve4VtR0CKRrQAHzj486sjgy8ZDpe9BkHe7ou5GL7lS1H9xQdGYg+PX4AfOPjzqyODId+TYQ4ximvqAnXGS8X5aHJLKqoPOTOkjkXN/hz5a5huHxzgrotiK8Gc1oq4ZBfSDuwNV91iEVVyJOfF90BppZ+FIVehcb0PGva7W+jZypZ06DwxTgjpWlg1hT9MjrEMcO8nAEuGqAHulqWhTCsvxKUe8MrV/TsCtPkdogeQK+zPTxOH0WU0cMy/ZGi/OZc1PWD1Ek94E2JxvvIApWVhTfj9Vx2xW1nbvSIBfLN+R0M79MOnRTMthL42XhNrpfL9A3UsGakOudUPm2UAMsniBFfBXlAxtWCyjF6x/FdXzvUgu5XZQYU6mg+OYeNGYFn8Zui1Avp7zeygF7dmSFCZoflqE1fhd7ptcbwPhxexoV/OlqWhTCsvxK5j9mEm+"
		"ayVKd2Qck8xCy6pr7qiYs+k1FY42UpAUwVYh81ZndP3U+QhmFnPAJmrzw3kRGv3XFtyPbep8lIljZlO3KqTMlYlOmDVu1gFzonvnfcvU8SobNrt4VYeqWzR4ZZC+7IgXLoIClgYnwtimTqJ0QFhG5UenOiQcp7l8EoPVZOWa7AmiMkQQy/m2yvWeDGYO24lwRJBxAGY6oI7n7pXrR8vp2gAirxkmFUdb3KY8B3pNo8li6oAXrzoQmZk1Ufb00QxX/nGTSJK1HmnZX9yA1cy1egaweM72zpBqOFjOK6/pdx/gqwnv0vudh8Ybc0DmEs+S/+0iXWXUG3xIjCY0vJ/fD9qkyQR03IzB7Fg8AyEkuqXCKjEVCcuAzYjmBgFEcupM4HapE03YUHvRRww5nBQxbOFpdb91oXvXOXEm9qcTW/Rcf0zIh1h4lvTAhlrdzeNWV2gQ=", "ENDITEM", 
		"Name=IOVATION[1].ERRORMESSAGE", "Value=", "ENDITEM", 
		"Name=scheme", "Value=HD", "ENDITEM", 
		"Name=source", "Value=Login", "ENDITEM", 
		"Name=email", "Value={c_Email}", "ENDITEM", 
		"Name=dob", "Value={p_DMYDOB}", "ENDITEM", 
		"Name=HD_domain", "Value=nft01.hastingsdirect.com", "ENDITEM", 
		"Name=PC_domain", "Value=nft01.peopleschoice.co.uk", "ENDITEM", 
		"Name=cid", "Value=", "ENDITEM", 
		"LAST");	

	web_reg_find("Text=Hastings Direct", "LAST");
	
	web_reg_find("Text=Enter your email address to register or log in", "LAST");
	
	web_reg_save_param("c_pageCode_103",
	                   "LB=if (ajaxBrowserNavigationCheck('&",
	                   "RB==",
	                   "LAST");	
	
	web_reg_save_param("c_pageCodeValue_103",
	                   "LB==",
	                   "RB=', '', 'servletcontroller', ''))",
	                   "LAST");

	addDynaTraceHeader("NA=DJ_MC_S02_CC_82_MyAccount_Clk_Logout;PC=servletcontroller_5");
	web_url("servletcontroller_5", 
		"URL={p_Host}/Portal/servletcontroller?action=login&door=open", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_Host}/Portal/servletcontroller", 
		"Snapshot=t1013.inf", 
		"Mode=HTML", 
		"LAST");	

	addDynaTraceHeader("NA=DJ_MC_S02_CC_82_MyAccount_Clk_Logout;PC=ajaxservletcontroller_6");
	web_submit_data("ajaxservletcontroller_6", 
		"Action={p_Host}/Portal/ajaxservletcontroller", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_Host}/Portal/servletcontroller?action=login&door=open", 
		"Snapshot=t1014.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MODE", "Value=AjaxBrowserNavigationCheck", "ENDITEM", 
		"Name={c_pageCodeValue_103}", "Value={c_pageCodeValue_103}", "ENDITEM", 
		"Name=namespace", "Value=", "ENDITEM", 
		"Name=controllername", "Value=servletcontroller", "ENDITEM", 
		"Name=SUBSESSIONID", "Value=1", "ENDITEM", 
		"Name={c_pageCodeValue_103}", "Value={c_pageCodeValue_103}", "ENDITEM", 
		"LAST");	

	lr_end_transaction("DJ_MC_S02_CC_82_MyAccount_Clk_Logout", 2);	
	
	
	return 0;
}
# 7 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 8 "c:\\users\\vereb\\onedrive - hastings insurance services ltd\\documents\\github\\test2\\self sufficient scripts\\core scripts\\nft_dj_mc_s02_cc\\\\combined_NFT_DJ_MC_S02_CC.c" 2

