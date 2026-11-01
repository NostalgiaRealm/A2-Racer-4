
/* ==== FUN_0051a5a0 @ 0051a5a0 ==== 
 * signature: undefined __cdecl FUN_0051a5a0(int param_1)
 * body: 0051a5a0-0051a69f
 */

void __cdecl FUN_0051a5a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  piVar1 = DAT_0074c630;
  if (param_1 != 0) {
    while ((iVar2 = DAT_0074c60c, piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0))) {
      iVar3 = iVar3 + 1;
      piVar1 = (int *)*piVar1;
    }
    while ((iVar2 != 0 && (*(int *)(iVar2 + 0x30) != 0))) {
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(iVar2 + 0x30);
    }
    DAT_0074cdc0 = DAT_0074cdc0 + iVar3;
    if (DAT_0074cdc8 < iVar3) {
      DAT_0074cdc8 = iVar3;
    }
    DAT_0074cba8 = DAT_0074cba8 + iVar4;
    if (DAT_0074cbb0 < iVar4) {
      DAT_0074cbb0 = iVar4;
    }
  }
  for (; (DAT_0074c630 != (int *)0x0 && (*DAT_0074c630 != 0)); DAT_0074c630 = (int *)*DAT_0074c630)
  {
    DAT_0074c630[5] = DAT_0074c630[5] & 0xefffffff;
  }
  DAT_0074c630 = (int *)0x0;
  for (; (DAT_0074c60c != 0 && (*(int *)(DAT_0074c60c + 0x30) != 0));
      DAT_0074c60c = *(int *)(DAT_0074c60c + 0x30)) {
    *(uint *)(DAT_0074c60c + 0x50) = *(uint *)(DAT_0074c60c + 0x50) & 0xfffffdff;
  }
  DAT_0074c60c = 0;
  for (; (DAT_0074c610 != 0 && ((*(uint *)(DAT_0074c610 + 0x50) & 0x400) != 0));
      DAT_0074c610 = *(int *)(DAT_0074c610 + 0x30)) {
    *(undefined4 *)(DAT_0074c610 + 0x20) = 0;
    *(uint *)(DAT_0074c610 + 0x50) = *(uint *)(DAT_0074c610 + 0x50) & 0xfffffbff;
  }
  DAT_0074c610 = 0;
  DAT_0074c614 = 0;
  DAT_0074c690 = 0;
  return;
}


