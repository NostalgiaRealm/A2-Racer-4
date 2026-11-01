
/* ==== FUN_0047fbd4 @ 0047fbd4 ==== 
 * signature: undefined __register FUN_0047fbd4(int * param_1, undefined4 * param_2)
 * body: 0047fbd4-0047fd7a
 */

void FUN_0047fbd4(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *in_FS_OFFSET;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iStack_140;
  code *pcStack_13c;
  undefined1 *puStack_138;
  undefined4 *local_128;
  undefined *local_124;
  undefined4 *local_120;
  undefined *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_124 = (undefined *)0x0;
  local_128 = (undefined4 *)0x0;
  local_11c = (undefined *)0x0;
  local_120 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_138 = (undefined1 *)0x47fc0d;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_13c = thunk_FUN_004036bc;
  iStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_140;
  local_10 = local_8;
  local_c = 0xb;
  puStack_138 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar6 = "CreateNewPlayer";
  FUN_00403f9c(&local_14,3);
  iVar3 = local_14;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar3,0,(int)pcVar6);
  iVar3 = 0;
  while( true ) {
    FUN_00481178(iVar3,(int *)&local_120);
    FUN_00403f28((int *)&local_11c,(undefined4 *)param_1[0x2e],local_120);
    uVar1 = FUN_004087a4(local_11c);
    if ((char)uVar1 == '\0') break;
    bVar4 = SCARRY4(iVar3,1);
    iVar3 = iVar3 + 1;
    if (bVar4) {
      thunk_FUN_00402808(uVar1);
    }
  }
  if ((int *)param_1[0x30] != (int *)0x0) {
    FUN_00402f9c((int *)param_1[0x30]);
  }
  iVar5 = iVar3;
  piVar2 = (int *)FUN_0048c24c((int *)&PTR_TSaveGame_vmt_000_0048aa08,'\x01',local_8,iVar3);
  param_1[0x30] = (int)piVar2;
  FUN_0048c07c(piVar2);
  FUN_00481178(iVar3,(int *)&local_128);
  FUN_00403f28((int *)&local_124,(undefined4 *)param_1[0x2e],local_128);
  FUN_0048b0c8((int *)param_1[0x30],local_124);
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x30] + 8))();
  uVar1 = FUN_0045f46c();
  FUN_0045fd98(uVar1,0x47fdbc,piVar2);
  *(int *)(param_1[0x31] + 0x14) = iVar3;
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = iVar5;
  FUN_00403c80((int *)&local_128,4);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


