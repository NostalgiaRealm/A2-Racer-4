
/* ==== FUN_0055ac05 @ 0055ac05 ==== 
 * signature: undefined __cdecl FUN_0055ac05(LPCSTR param_1, char * param_2, FILE * param_3)
 * body: 0055ac05-0055ac38
 */

void __cdecl FUN_0055ac05(LPCSTR param_1,char *param_2,FILE *param_3)

{
  if ((param_3->_flag & 0x83) != 0) {
    FUN_005588fd(param_3);
  }
  param_3->_base = (char *)0x0;
  param_3->_ptr = (char *)0x0;
  param_3->_flag = 0;
  param_3->_cnt = 0;
  FUN_0055f0d8(param_1,param_2,0x40,&param_3->_ptr);
  return;
}


