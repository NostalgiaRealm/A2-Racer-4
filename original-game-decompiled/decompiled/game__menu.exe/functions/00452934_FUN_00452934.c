
/* ==== FUN_00452934 @ 00452934 ==== 
 * signature: undefined __register FUN_00452934(undefined * param_1, uint param_2, uint param_3, char param_4)
 * body: 00452934-004529d5
 */

void FUN_00452934(undefined *param_1,uint param_2,uint param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR pCVar4;
  LPCSTR pCVar5;
  undefined4 uVar6;
  UINT UVar7;
  UINT *in_FS_OFFSET;
  UINT UStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  UStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_20;
  iVar1 = FUN_004523fc(param_2);
  uVar2 = FUN_004524c4(param_3);
  if (SCARRY4(iVar1,uVar2)) {
    thunk_FUN_00402808(uVar2);
  }
  uVar3 = FUN_00452718(param_3,param_4);
  UVar7 = iVar1 + uVar2 + uVar3;
  if (SCARRY4(iVar1 + uVar2,uVar3)) {
    thunk_FUN_00402808(uVar3);
  }
  SetForegroundWindow(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24));
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_8);
  pCVar4 = FUN_004040a0(local_8);
  pCVar5 = FUN_004040a0(param_1);
  uVar6 = FUN_0044d494(*(int *)PTR_DAT_004ab8ac,pCVar5,pCVar4,UVar7);
  FUN_00452598(uVar6);
  *in_FS_OFFSET = UVar7;
  pcStack_1c = FUN_004529dd;
  UStack_20 = 0x4529d5;
  FUN_00403c5c((int *)&local_8);
  return;
}


