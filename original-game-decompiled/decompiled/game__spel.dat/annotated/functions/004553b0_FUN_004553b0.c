
/* ==== FUN_004553b0 @ 004553b0 ==== 
 * signature: undefined4 __cdecl FUN_004553b0(int param_1)
 * body: 004553b0-004553fd
 */

undefined4 __cdecl FUN_004553b0(int param_1)

{
  int iVar1;
  int local_4;
  
  local_4 = DAT_006fba58;
  if (*(int *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) == 0) {
    iVar1 = FUN_00453480(param_1,&local_4);
    if (iVar1 != 0) {
      FUN_0045b9d0(DAT_006fba58,DAT_006fba58);
    }
  }
  return 1;
}


