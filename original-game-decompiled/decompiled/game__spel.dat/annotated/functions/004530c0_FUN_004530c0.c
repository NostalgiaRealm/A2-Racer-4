
/* ==== FUN_004530c0 @ 004530c0 ==== 
 * signature: undefined4 __cdecl FUN_004530c0(int param_1)
 * body: 004530c0-00453140
 */

undefined4 __cdecl FUN_004530c0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  local_4 = DAT_006fba58;
  iVar2 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar2 + 0x2c + DAT_00715e50);
  if (iVar1 == 0) {
    iVar1 = FUN_00453480(param_1,&local_4);
    if (iVar1 != 0) {
      FUN_0045b250(DAT_006fba58,DAT_006fba58);
      *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 1;
      return 1;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00453480(param_1,&local_4);
    if (iVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 0;
    }
  }
  return 1;
}


