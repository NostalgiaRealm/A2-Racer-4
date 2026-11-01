
/* ==== FUN_0045b2d0 @ 0045b2d0 ==== 
 * signature: undefined __register FUN_0045b2d0(int * param_1)
 * body: 0045b2d0-0045b3e4
 */

void FUN_0045b2d0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  DWORD DVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar9;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1[2] + 8) < 1) {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(&local_10,local_110);
    pcStack_138 = "No events in queue.";
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
    puVar3 = puStack_120;
  }
  puStack_120 = puVar3;
  DVar4 = GetTickCount();
  while( true ) {
    if ((int)((undefined4 *)local_8[2])[2] < 1) break;
    piVar6 = (int *)FUN_0041ff40((undefined4 *)local_8[2],0);
    iVar7 = FUN_0040312c(piVar6,(int)&PTR_TPersistent_vmt_000_0045adf4);
    if (DVar4 < *(uint *)(iVar7 + 0x30)) break;
    piVar6 = (int *)FUN_0041ff40((undefined4 *)local_8[2],0);
    piVar6 = (int *)FUN_0040312c(piVar6,(int)&PTR_TPersistent_vmt_000_0045adf4);
    uVar2 = piVar6[10];
    puVar1 = (uint *)(piVar6 + 0xc);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    uVar8 = extraout_ECX;
    uVar9 = extraout_EDX;
    if (CARRY4(uVar5,uVar2)) {
      thunk_FUN_00402808(uVar2);
      uVar8 = extraout_ECX_00;
      uVar9 = extraout_EDX_00;
    }
    if (DVar4 < (uint)piVar6[0xc]) {
      uVar5 = piVar6[10] + DVar4;
      if (CARRY4(piVar6[10],DVar4)) {
        uVar5 = thunk_FUN_00402808(uVar5);
        uVar8 = extraout_ECX_01;
        uVar9 = extraout_EDX_01;
      }
      piVar6[0xc] = uVar5;
    }
    FUN_0045b234(0,uVar9,uVar8,(int)&stack0xfffffffc);
    (**(code **)(*piVar6 + 0x30))(piVar6,local_8);
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403c80(&local_10,2);
  return;
}


