
/* ==== FUN_0042925c @ 0042925c ==== 
 * signature: undefined FUN_0042925c(void)
 * body: 0042925c-00429297
 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042925c(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  
  *(byte *)(unaff_ESI + 0xa8c0042) = *(byte *)(unaff_ESI + 0xa8c0042) & (byte)param_2;
  *(char *)(param_1 + 0xa004297) = *(char *)(param_1 + 0xa004297) + (byte)param_2;
  pcVar2 = unaff_EDI + 1;
  uVar3 = in((short)param_2);
  *unaff_EDI = uVar3;
  if (-1 < unaff_EBX + 1) {
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar2 + (char)param_1;
    iVar5 = CONCAT31((int3)((uint)param_2 >> 8),
                     (byte)param_2 | *(byte *)(unaff_EBX + 0x6d + param_1 * 2));
    pcVar1 = (char *)(unaff_EBX + 0x41 + unaff_EBP * 8);
    *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
    cVar4 = in((short)param_1 + 1);
    *pcVar2 = cVar4;
    FUN_00429324(iVar5);
    pcStack_c = thunk_FUN_004036bc;
    uStack_10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_10;
    EmptyClipboard();
    *in_FS_OFFSET = uStack_10;
    pcStack_c = (code *)0x4292cf;
    FUN_004292f8(iVar5);
    return;
  }
  _DAT_004ac738 = _DAT_004ac738 + -1;
  return;
}


