
/* ==== FUN_004031f0 @ 004031f0 ==== 
 * signature: longlong __cdecl FUN_004031f0(int param_1, float param_2, float param_3, float param_4)
 * body: 004031f0-00403354
 */

longlong __cdecl FUN_004031f0(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  local_18 = param_2 - *(float *)(iVar1 + DAT_0073b0d0 + 0x50 + iVar1 * 0xa8);
  iVar1 = iVar1 + DAT_0073b0d0 + 0x50 + iVar1 * 0xa8;
  local_14 = param_3 - *(float *)(iVar1 + 4);
  local_10 = param_4 - *(float *)(iVar1 + 8);
  if (((local_18 != 0.0) || (local_14 != 0.0)) || (local_10 != 0.0)) {
    local_4 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
    local_c = local_18 / local_4;
    local_8 = local_14 / local_4;
    local_4 = local_10 / local_4;
  }
  puVar2 = (undefined4 *)
           FUN_004b4070(&local_18,
                        DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10)
  ;
  local_c = (float)*puVar2;
  local_8 = (float)puVar2[1];
  local_4 = (float)puVar2[2];
  FUN_00558550();
  lVar3 = __ftol();
  return lVar3;
}


