
/* ==== FUN_00422ae0 @ 00422ae0 ==== 
 * signature: undefined4 __cdecl FUN_00422ae0(int param_1, undefined4 * param_2)
 * body: 00422ae0-00422b4a
 */

undefined4 __cdecl FUN_00422ae0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1 * 0x50;
  puVar2 = param_2;
  if (*(int *)(iVar3 + 0x24 + DAT_00715eb8) < 1) {
    *param_2 = 0xffffffff;
    return *(undefined4 *)(iVar3 + 0x24 + DAT_00715eb8);
  }
  do {
    uVar1 = FUN_004ab0d0((void *)(iVar3 + DAT_00715eb8),iVar4);
    *puVar2 = uVar1;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar4 < *(int *)(iVar3 + 0x24 + DAT_00715eb8));
  param_2[iVar4] = 0xffffffff;
  return *(undefined4 *)(iVar3 + 0x24 + DAT_00715eb8);
}


