
/* ==== FUN_005651b9 @ 005651b9 ==== 
 * signature: undefined4 __cdecl FUN_005651b9(int param_1, int param_2)
 * body: 005651b9-0056521a
 */

undefined4 __cdecl FUN_005651b9(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char local_7c [120];
  
  iVar1 = (*DAT_0074dfd4)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00565337(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_00565370(DAT_0074dfc4);
    sVar3 = _strlen(DAT_0074dfc4);
    if (sVar2 == sVar3) {
      return 0;
    }
  }
  return 1;
}


