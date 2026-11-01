
/* ==== FUN_00419080 @ 00419080 ==== 
 * signature: undefined8 __cdecl FUN_00419080(int param_1)
 * body: 00419080-00419110
 */

undefined8 __cdecl FUN_00419080(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x24 + DAT_00715e50);
  iVar3 = DAT_0073b0d0 + iVar1;
  lVar4 = FUN_00403ea0((&DAT_005ce9e8)[param_1 * 0xa5],*(float *)(iVar3 + 0x50 + iVar1 * 0xa8),
                       *(undefined4 *)(iVar3 + 0x54 + iVar1 * 0xa8),
                       *(float *)(iVar3 + iVar1 * 0xa8 + 0x58));
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  if ((0x708 < (int)lVar4) && ((int)lVar4 < 0x898)) {
    return CONCAT44(uVar2,1);
  }
  return (ulonglong)uVar2 << 0x20;
}


