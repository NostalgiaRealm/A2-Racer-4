
/* ==== FUN_00403ea0 @ 00403ea0 ==== 
 * signature: longlong __cdecl FUN_00403ea0(int param_1, float param_2, undefined4 param_3, float param_4)
 * body: 00403ea0-0040407f
 */

longlong __cdecl FUN_00403ea0(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float local_1c;
  
  iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  local_1c = param_2 - *(float *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8);
  fVar1 = *(float *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8 + 0x58);
  if (local_1c == 0.0) {
    local_1c = 0.1;
  }
  else if ((local_1c <= 0.0) || (0.1 <= local_1c)) {
    if ((local_1c < 0.0) && (-0.1 < local_1c)) {
      local_1c = -0.1;
    }
  }
  else {
    local_1c = 0.1;
  }
  FUN_004c3fa0((byte *)s_delta_x__f_z__f_0058eed8);
  fpatan((float10)(param_4 - fVar1) / (float10)local_1c,(float10)1);
  FUN_004c3fa0((byte *)s_hoek___f_0058eeec);
  FUN_004c3fa0((byte *)s_Diff___f_0058eef8);
  FUN_004c3fa0((byte *)s_Diff___f_0058ef04);
  lVar3 = __ftol();
  return lVar3;
}


