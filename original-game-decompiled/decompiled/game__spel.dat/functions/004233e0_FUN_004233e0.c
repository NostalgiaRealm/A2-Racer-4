
/* ==== FUN_004233e0 @ 004233e0 ==== 
 * signature: int __cdecl FUN_004233e0(int param_1, int param_2)
 * body: 004233e0-00423502
 */

int __cdecl FUN_004233e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_10;
  int local_c;
  int local_8;
  
  local_10 = 3.4028235e+38;
  local_8 = -1;
  if (param_2 < 0) {
    FUN_004a6980(0,(byte *)s___s___d_Illegal_waypoint__d_pass_00595628);
  }
  iVar1 = *(int *)(param_2 * 0x50 + 0x24 + DAT_00715eb8);
  local_c = 0;
  if (iVar1 < 1) {
    return -1;
  }
  do {
    iVar5 = FUN_004ab0d0((void *)(DAT_00715eb8 + param_2 * 0x50),local_c);
    if (param_1 != iVar5) {
      iVar6 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
      iVar2 = *(int *)(iVar5 * 0xf0 + 0x24 + DAT_00715e50);
      fVar3 = *(float *)(iVar6 + 0x50) - *(float *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8);
      fVar4 = *(float *)(iVar6 + 0x58) - *(float *)(DAT_0073b0d0 + iVar2 + 0x58 + iVar2 * 0xa8);
      fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
      if (fVar3 < local_10) {
        local_10 = fVar3;
        local_8 = iVar5;
      }
    }
    local_c = local_c + 1;
  } while (local_c < iVar1);
  return local_8;
}


