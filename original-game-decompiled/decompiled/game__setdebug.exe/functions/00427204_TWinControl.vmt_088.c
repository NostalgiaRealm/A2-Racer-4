
/* ==== TWinControl.vmt_088 @ 00427204 ==== 
 * signature: undefined __register TWinControl.vmt_088(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00427204-004272c9;004272d1-004272ed
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_088(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  if ((((char)param_1[0x51] != '\0') && ((char)param_1[0x5f] != '\0')) && (param_1[0x52] != 0)) {
    puStack_1c = (undefined1 *)0x427248;
    (**(code **)(*(int *)param_1[0x52] + 0x2c))((int *)param_1[0x52],0);
  }
  pcStack_20 = (code *)0x42724e;
  puStack_1c = &stack0xfffffffc;
  uVar2 = FUN_004271b0();
  puVar1 = puStack_1c;
  if ((char)uVar2 != '\0') {
    puStack_1c = (undefined1 *)0x427261;
    (**(code **)(*param_1 + 0x84))(param_1,param_3);
    puStack_1c = (undefined1 *)0x42726d;
    piVar3 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX);
    pcStack_20 = thunk_FUN_00403434;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0042705c(1,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    FUN_0042705c(2,extraout_EDX_01,puVar4,(int)&stack0xfffffffc);
    FUN_0042705c(3,extraout_EDX_02,puVar5,(int)&stack0xfffffffc);
    FUN_0042705c(4,extraout_EDX_03,puVar6,(int)&stack0xfffffffc);
    FUN_0042705c(5,extraout_EDX_04,puVar7,(int)&stack0xfffffffc);
    FUN_0042705c(0,extraout_EDX_05,puVar8,(int)&stack0xfffffffc);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4272d1;
    pcStack_20 = (code *)0x4272c9;
    FUN_00402d14(piVar3);
    return;
  }
  if ((char)param_1[0x5a] != '\0') {
    puStack_1c = (undefined1 *)0x4272e9;
    FUN_00402ef0(param_1,extraout_EDX,puVar1);
  }
  return;
}


