
/* ==== FUN_004233be @ 004233be ==== 
 * signature: int __fastcall FUN_004233be(undefined4 param_1, int param_2)
 * body: 004233be-004233bf
 */

int __fastcall FUN_004233be(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  float fStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  cVar4 = in(0x32);
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) << ((char)param_1 + cVar4 & 0x1fU);
  *(char *)(unaff_EBP + 0x33) = *(char *)(unaff_EBP + 0x33) + (char)((uint)param_1 >> 8);
  cVar4 = (char)((uint)unaff_EBX >> 8);
  *(char *)(unaff_EDI + 0x33) = *(char *)(unaff_EDI + 0x33) + cVar4;
  *(char *)(unaff_EDI + 0x33) = *(char *)(unaff_EDI + 0x33) + cVar4;
  cVar4 = (char)(param_2 + 5);
  in(CONCAT11((char)((uint)(param_2 + 5) >> 8) * '\x02',cVar4));
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + cVar4;
  fStack00000008 = 3.4028235e+38;
  iStack00000010 = -1;
  if (in_stack_00000020 < 0) {
    FUN_004a6980(0,(byte *)s___s___d_Illegal_waypoint__d_pass_00595628);
  }
  iStack00000014 = *(int *)(in_stack_00000020 * 0x50 + 0x24 + DAT_00715eb8);
  iStack0000000c = 0;
  if (iStack00000014 < 1) {
    return -1;
  }
  do {
    iVar5 = FUN_004ab0d0((void *)(DAT_00715eb8 + in_stack_00000020 * 0x50),iStack0000000c);
    if (in_stack_0000001c != iVar5) {
      iVar6 = *(int *)(in_stack_0000001c * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
      iVar1 = *(int *)(iVar5 * 0xf0 + 0x24 + DAT_00715e50);
      fVar2 = *(float *)(iVar6 + 0x50) - *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
      fVar3 = *(float *)(iVar6 + 0x58) - *(float *)(DAT_0073b0d0 + iVar1 + 0x58 + iVar1 * 0xa8);
      fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < fStack00000008) {
        fStack00000008 = fVar2;
        iStack00000010 = iVar5;
      }
    }
    iStack0000000c = iStack0000000c + 1;
  } while (iStack0000000c < iStack00000014);
  return iStack00000010;
}


