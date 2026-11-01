
/* ==== FUN_0043dc90 @ 0043dc90 ==== 
 * signature: undefined4 __cdecl FUN_0043dc90(int param_1, int param_2)
 * body: 0043dc90-0043dd38
 */

undefined4 __cdecl FUN_0043dc90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  fVar2 = *(float *)(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178 + 0x10);
  fVar3 = *(float *)(param_1 + 0x30) - fVar1;
  fVar4 = *(float *)(param_1 + 0x38) - fVar2;
  fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar1 = *(float *)(param_2 + 0x30) - fVar1;
  fVar2 = *(float *)(param_2 + 0x38) - fVar2;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  if (fVar3 < fVar1) {
    return 1;
  }
  if (fVar3 == fVar1) {
    return 0;
  }
  return 0xffffffff;
}


