
/* ==== FUN_0051e3d0 @ 0051e3d0 ==== 
 * signature: undefined __cdecl FUN_0051e3d0(undefined4 param_1)
 * body: 0051e3d0-0051e3e9
 */

void __cdecl FUN_0051e3d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0074c750;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0074c784 = param_1;
  return;
}


