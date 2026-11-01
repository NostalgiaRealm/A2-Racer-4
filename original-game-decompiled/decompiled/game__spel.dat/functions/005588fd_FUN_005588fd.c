
/* ==== FUN_005588fd @ 005588fd ==== 
 * signature: undefined4 __cdecl FUN_005588fd(FILE * param_1)
 * body: 005588fd-00558952
 */

undefined4 __cdecl FUN_005588fd(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x40U) == 0) {
    if ((param_1->_flag & 0x83U) != 0) {
      uVar2 = FUN_0055a5de((int *)param_1);
      __freebuf(param_1);
      iVar1 = FUN_0055ef30(param_1->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_00559d4e(param_1->_tmpfname);
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


