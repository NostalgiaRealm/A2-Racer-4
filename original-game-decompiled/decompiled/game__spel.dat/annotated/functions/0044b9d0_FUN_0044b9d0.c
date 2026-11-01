
/* ==== FUN_0044b9d0 @ 0044b9d0 ==== 
 * signature: undefined4 __stdcall FUN_0044b9d0(void)
 * body: 0044b9d0-0044ba9d
 */

undefined4 FUN_0044b9d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_198 [26];
  int iStack_130;
  int iStack_12c;
  undefined4 local_cc [51];
  
  if (DAT_006fb8d0 == 0) {
    return 0;
  }
  FUN_004c3fa0((byte *)s_Checking_alpha_blending_capabali_005a1104);
  puVar2 = local_198;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_cc;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_198[0] = 0xcc;
  local_cc[0] = 0xcc;
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0xc))(DAT_0073b4b4,local_198,local_cc);
  if (iVar1 != 0) {
    FUN_004c3fa0((byte *)s_Can_t_get_alpha_caps__alpha_blen_005a1130);
    return 0;
  }
  if ((iStack_130 == 0) && (iStack_12c == 0)) {
    FUN_004c3fa0((byte *)s_No_source_or_destination_alpha_b_005a1160);
    return 0;
  }
  DAT_006fb928 = iStack_130;
  DAT_006fb92c = iStack_12c;
  FUN_004c3fa0((byte *)s_Alpha_blending_supported__005a1194);
  return 1;
}


