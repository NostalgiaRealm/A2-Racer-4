
/* ==== FUN_004a8500 @ 004a8500 ==== 
 * signature: undefined __register FUN_004a8500(void)
 * body: 004a8500-004a8588
 */

void FUN_004a8500(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  code *pcStack_c;
  undefined4 *local_8;
  
  pcStack_c = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(undefined **)(iVar1 + 0xbc) = &DAT_004a8174;
  *(code **)(iVar1 + 0xb8) = FUN_004a859c;
  FUN_004a819c((int *)&local_8);
  FUN_00403cb0(&DAT_004ab5c8,local_8);
  if (DAT_004ab5cc == 0) {
    DAT_004ab5cc = FUN_004a8398((int *)&DAT_004a8174,'\x01',extraout_ECX);
    piVar2 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX_00);
    FUN_00452e94(piVar2,0x4a8374);
  }
  *in_FS_OFFSET = uStack_14;
  pcStack_c = FUN_004a8590;
  pcStack_10 = (code *)0x4a8588;
  FUN_00403c5c((int *)&local_8);
  return;
}


