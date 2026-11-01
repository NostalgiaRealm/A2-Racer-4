
/* ==== FUN_0040429f @ 0040429f ==== 
 * signature: undefined8 __cdecl FUN_0040429f(int param_1)
 * body: 0040429f-00404355
 */

undefined8 __cdecl FUN_0040429f(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fStack_4;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f004);
  }
  iVar1 = *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x24 + DAT_00715e50);
  lVar3 = FUN_00403ea0((&DAT_005ce9e8)[param_1 * 0xa5],
                       *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8),
                       *(undefined4 *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 0x58),fStack_4);
  uVar2 = (uint)((ulonglong)lVar3 >> 0x20);
  if ((0x6a4 < (int)lVar3) && ((int)lVar3 < 0x8fc)) {
    return CONCAT44(uVar2,1);
  }
  return (ulonglong)uVar2 << 0x20;
}


