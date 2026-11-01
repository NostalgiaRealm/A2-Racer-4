
/* ==== FUN_00403246 @ 00403246 ==== 
 * signature: undefined4 __cdecl FUN_00403246(byte param_1, uint param_2, byte param_3)
 * body: 00403246-00403276
 */

undefined4 __cdecl FUN_00403246(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_00408220 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00407602 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


