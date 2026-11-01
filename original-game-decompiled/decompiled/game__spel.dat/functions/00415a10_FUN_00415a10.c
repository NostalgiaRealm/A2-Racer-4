
/* ==== FUN_00415a10 @ 00415a10 ==== 
 * signature: undefined __cdecl FUN_00415a10(int param_1)
 * body: 00415a10-00415ae2
 */

void __cdecl FUN_00415a10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 * 0x38;
  iVar5 = (&DAT_005d1ba8)[param_1 * 0xe];
  iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + iVar6) == *(int *)(&DAT_00709f1c + iVar2 * 0x340)) {
    iVar5 = iVar5 * 0xf0;
    piVar1 = (int *)(iVar5 + 0x3c + DAT_00715e50);
    *(undefined4 *)(iVar5 + 0xcc + DAT_00715e50) = 0;
    iVar2 = DAT_00715e50;
    iVar3 = *piVar1 * 0x50 + DAT_00715eb8;
    if ((*(int *)(iVar3 + 0x24) < 2) &&
       ((iVar3 = *(int *)(iVar3 + 0x20), iVar3 == -1 ||
        ((iVar3 = iVar3 * 0x50 + DAT_00715eb8, *(int *)(iVar3 + 0x24) < 1 &&
         ((iVar3 = *(int *)(iVar3 + 0x20), iVar3 == -1 ||
          (*(int *)(iVar3 * 0x50 + 0x24 + DAT_00715eb8) < 1)))))))) {
      (&DAT_005d1bac)[param_1 * 0xe] = 0;
      *(undefined4 *)(&DAT_005d1bc8 + iVar6) = 0;
      uVar4 = FUN_00415980(param_1);
      *(undefined4 *)(iVar5 + iVar2 + 0x50) = uVar4;
      *(undefined4 *)(&DAT_005d1bc4 + iVar6) = *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50);
    }
  }
  return;
}


