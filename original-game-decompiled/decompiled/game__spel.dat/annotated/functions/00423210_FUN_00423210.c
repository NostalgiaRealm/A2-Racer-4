
/* ==== FUN_00423210 @ 00423210 ==== 
 * signature: ulonglong __cdecl FUN_00423210(int param_1)
 * body: 00423210-0042328f
 */

ulonglong __cdecl FUN_00423210(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = DAT_006fba58 * 0xf0 + DAT_00715e50;
  if (*(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50) != *(int *)(iVar1 + 0x3c)) {
    return CONCAT44(param_1,iVar1) & 0xffffffffffffff00;
  }
  iVar1 = DAT_0073b0d0 + *(int *)(iVar1 + 0x24) * 0xa9;
  uVar2 = FUN_00403ea0(param_1,*(float *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                       *(float *)(iVar1 + 0x58));
  if ((0x3ff < (int)uVar2) && ((int)uVar2 < 0xc01)) {
    return uVar2 & 0xffffffffffffff00;
  }
  return CONCAT44((int)(uVar2 >> 0x20),CONCAT31((int3)(uVar2 >> 8),1));
}


