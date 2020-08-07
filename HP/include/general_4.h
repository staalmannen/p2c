/* Header for module general_4, generated by p2c */
#ifndef GENERAL_4_H
#define GENERAL_4_H



#ifndef IODECLARATIONS_H
#include <p2c/iodecl.h>
#endif



#ifdef GENERAL_4_G
# define vextern
#else
# define vextern extern
#endif
extern Void abort_transfer PP((buf_info_type *b_info));
extern char transfer_setup PP((long device, int t_tfr, int t_dir,
			       buf_info_type *b_info, long t_cnt));
extern Void P_transfer PP((long device, int t_tfr, int t_dir,
			   buf_info_type *b_info, long x_count));
extern Void transfer_word PP((long device, int t_tfr, int t_dir,
			      buf_info_type *b_info, long x_count));
extern Void transfer_until PP((int term, long device, int t_tfr, int t_dir,
			       buf_info_type *b_info));
extern Void transfer_end PP((long device, int t_tfr, int t_dir,
			     buf_info_type *b_info));
extern Void P_iobuffer PP((buf_info_type *b_info, long t_count));
extern Void buffer_reset PP((buf_info_type *b_info));
extern long buffer_space PP((buf_info_type *b_info));
extern long buffer_data PP((buf_info_type *b_info));
extern Void P_readbuffer PP((buf_info_type *b_info, Char *value));
extern Void P_writebuffer PP((buf_info_type *b_info, int value));
extern Void readbuffer_string PP((buf_info_type *b_info, Char *str,
				  long str_count));
extern Void writebuffer_string PP((buf_info_type *b_info, Char *str));
extern boolean buffer_busy PP((buf_info_type *b_info));
extern boolean isc_busy PP((int isc));



#undef vextern

#endif /*GENERAL_4_H*/

/* End. */
