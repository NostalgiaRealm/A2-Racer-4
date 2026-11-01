
/* ==== FUN_00450f90 @ 00450f90 ==== 
 * signature: undefined4 __cdecl FUN_00450f90(int param_1)
 * body: 00450f90-00451017
 */

undefined4 __cdecl FUN_00450f90(int param_1)

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
      FUN_0045b510(param_1,DAT_006fba58);
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


