
/* ==== FUN_0049101c @ 0049101c ==== 
 * signature: undefined FUN_0049101c(void)
 * body: 0049101c-004910d4
 */

void FUN_0049101c(char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  char *extraout_EDX;
  char *pcVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  char **ppcVar5;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int iStack_c;
  char *pcStack_8;
  int iStack_4;
  
  iStack_c = unaff_EBX + 1;
  iStack_4 = unaff_EBP + -1;
  *param_1 = *param_1 + (char)param_1;
  *param_1 = *param_1 + (char)param_1;
  pcStack_10 = (code *)&iStack_4;
  pcStack_8 = (char *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00490b4c((int *)&pcStack_8);
  iVar1 = FUN_00403edc((int)pcStack_8);
  if (2 < iVar1) {
    iVar1 = 0;
    pcVar4 = pcStack_8;
    if (*(int *)(pcStack_8 + -4) == 0) {
      iVar1 = thunk_FUN_00402808(0);
      pcVar4 = extraout_EDX;
    }
    if (pcVar4[iVar1] == '\"') {
      FUN_00404124((int *)&pcStack_8,1,1);
      iVar1 = FUN_004041c8("\"",pcStack_8);
      if (0 < iVar1) {
        ppcVar5 = &pcStack_8;
        uVar2 = FUN_004041c8("\"",pcStack_8);
        uVar3 = uVar2 - 1;
        if (SBORROW4(uVar2,1)) {
          thunk_FUN_00402808(uVar2);
          uVar3 = extraout_ECX;
        }
        FUN_004040e4((int)pcStack_8,1,uVar3,(int *)ppcVar5);
      }
    }
  }
  FUN_004087a4(pcStack_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004910dc;
  pcStack_14 = (code *)0x4910d4;
  FUN_00403c5c((int *)&pcStack_8);
  return;
}


