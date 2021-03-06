/* RNA secondary structure markup in WUSS notation.
 * 
 * SRE, Tue Feb 15 10:15:28 2005
 * SVN $Id$
 * SVN $URL$
 */
#ifndef eslWUSS_INCLUDED
#define eslWUSS_INCLUDED

extern int esl_wuss2ct(char *ss, int len, int *ct);
extern int esl_ct2wuss(int *ct, int n, char *ss);
extern int esl_ct2simplewuss(int *ct, int n, char *ss);
extern int esl_wuss2kh(char *ss, char *kh);
extern int esl_kh2wuss(char *kh, char *ss);
extern int esl_wuss_full(char *oldss, char *newss);
extern int esl_wuss_nopseudo(char *ss1, char *ss2);


#endif /*eslWUSS_INCLUDED*/
/*****************************************************************
 * @LICENSE@
 *****************************************************************/
