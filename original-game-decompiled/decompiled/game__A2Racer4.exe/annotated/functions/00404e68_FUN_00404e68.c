
/* ==== FUN_00404e68 @ 00404e68 ==== 
 * signature: undefined4 __cdecl FUN_00404e68(FILE * param_1)
 * body: 00404e68-00404ebd
 */

undefined4 __cdecl FUN_00404e68(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x40U) == 0) {
    if ((param_1->_flag & 0x83U) != 0) {
      uVar2 = FUN_00404635((int *)param_1);
      __freebuf(param_1);
      iVar1 = FUN_00404f4f(param_1->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_00403657(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1->_flag = 0;
  return uVar2;
}


