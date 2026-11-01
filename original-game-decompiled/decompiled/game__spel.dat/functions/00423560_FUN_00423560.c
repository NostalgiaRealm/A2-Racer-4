
/* ==== FUN_00423560 @ 00423560 ==== 
 * signature: float10 __cdecl FUN_00423560(int param_1)
 * body: 00423560-004235e8
 */

float10 __cdecl FUN_00423560(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_4;
  
  iVar4 = 0;
  local_4 = 3.4028235e+38;
  iVar1 = *(int *)(param_1 * 0x50 + 0x24 + DAT_00715eb8);
  if (iVar1 < 1) {
    return (float10)3.4028235e+38;
  }
  do {
    iVar2 = FUN_004ab0d0((void *)(DAT_00715eb8 + param_1 * 0x50),iVar4);
    iVar3 = FUN_00414070(iVar2);
    if ((iVar3 != -1) && (*(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50) < local_4)) {
      local_4 = *(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  return (float10)local_4;
}


