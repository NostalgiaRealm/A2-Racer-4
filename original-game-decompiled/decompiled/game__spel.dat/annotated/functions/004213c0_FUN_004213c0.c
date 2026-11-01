
/* ==== FUN_004213c0 @ 004213c0 ==== 
 * signature: undefined4 __cdecl FUN_004213c0(int param_1)
 * body: 004213c0-0042140b
 */

int __cdecl FUN_004213c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 * 0x294;
  if ((*(int *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + param_1 * 0x294) + 2) * 0x10 + iVar1) != 2
      ) || (param_1 = 1, uVar2 = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f,
           7 < (int)((*(uint *)(&DAT_005cec0c + iVar1) ^ uVar2) - uVar2))) {
    param_1 = 0;
  }
  return param_1;
}


