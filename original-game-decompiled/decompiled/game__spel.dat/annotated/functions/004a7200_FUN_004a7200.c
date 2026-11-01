
/* ==== FUN_004a7200 @ 004a7200 ==== 
 * signature: int __cdecl FUN_004a7200(int param_1, int param_2)
 * body: 004a7200-004a722c
 */

int __cdecl FUN_004a7200(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 - param_2 >> 0x1f;
  iVar1 = (param_1 - param_2 ^ uVar2) - uVar2;
  if (DAT_00715f04 / 2 < iVar1) {
    return DAT_00715f04 - iVar1;
  }
  return iVar1;
}


