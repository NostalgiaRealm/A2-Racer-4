
/* ==== FUN_0054e965 @ 0054e965 ==== 
 * signature: uint __cdecl FUN_0054e965(byte param_1)
 * body: 0054e965-0054e985
 */

uint __cdecl FUN_0054e965(byte param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = FUN_0054e3e2();
  uVar2 = (uint3)((uint)*(int *)(iVar1 + 0x10) >> 8);
  return CONCAT31(uVar2 >> 2,
                  (char)(CONCAT31(uVar2,*(undefined1 *)(*(int *)(iVar1 + 0x10) + (uint)param_1 * 2))
                        >> 2)) & 0xffffff01;
}


